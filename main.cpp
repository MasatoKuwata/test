#include <DxLib.h>

// ----------- ���C������
int WINAPI WinMain(_In_ HINSTANCE, _In_opt_ HINSTANCE, _In_ LPSTR, _In_ int)
{
	ChangeWindowMode(true);			//�E�C���h�E���[�h
	SetWindowText("1916015_�K�c��l");
	SetGraphMode(800, 600, 16);
	if (DxLib_Init() == -1) return -1;		//�������Ɨ���ʉ�
	SetDrawScreen(DX_SCREEN_BACK);

	// ---------- �Q�[�����[�v
	while (ProcessMessage() == 0 && CheckHitKey(KEY_INPUT_ESCAPE) != 1)
	{
		ClsDrawScreen();

		ScreenFlip();
	}
	DxLib_End();		// DxLib�̌�n��
	return 0;
}