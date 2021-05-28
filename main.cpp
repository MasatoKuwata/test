#include <DxLib.h>

// ----------- メイン処理
int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int)
{
	ChangeWindowMode(true);			//ウインドウモード
	SetWindowText("1916015_桑田雅斗");
	SetGraphMode(800, 600, 16);
	if (DxLib_Init() == -1) return -1;		//初期化と裏画面化
	SetDrawScreen(DX_SCREEN_BACK);

	// ---------- ゲームループ
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) != 1)
	{
		ClsDrawScreen();

		ScreenFlip();
	}
	DxLib_End();		// DxLibの後始末
	return 0;
}