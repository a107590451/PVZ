#pragma once
namespace game_framework {
	class Shovel {
	public:
		Shovel();					        // ��l����l��
		void OnShow();				    // ��ܦb�e���W
		void LoadBitmap();			  // Ū���һݪ�����
		bool isChoosed();			    // �ˬd��l�O�_�Q���
		void SetChoosed(bool);		// �]�w��l�O�_�w�Q���
	private:
		int x, y;					        // ��l���y��
		int xb, yb;					      // ��m��l���خت���m
		bool Choosed;				      // �x�s��l�����A
		CMovingBitmap bmp;
		CMovingBitmap back;
	};
}