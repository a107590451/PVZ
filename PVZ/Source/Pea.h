#pragma once
namespace game_framework {
	class Pea {
	public:
		Pea();
		Pea(int,int,int);					  // ���l����l��
		void LoadBitmap();					// Ū�����l�������Ϥ�
		void OnShow();
		void OnMove();
		int GetRow();						    // �^�Ǩ��l�Ҧb���Ƽ�
		int GetX();						    	// �^�Ǩ��l�ثe��X��m
		void SetHitZombie(bool);		// �]�w���l�ثe�O�_�����L��
		bool isHitZombie();					// �^�Ǩ��l�����A
		bool isFinished();					// �^�Ǩ��l���ʵe�O�_�w�g����
		int MyType();					    	// �^�Ǩ��l�����A
	private:
		int x, y;
		int row;
		int type;						      	// ���l�����A(0�O���q���l�A1�O�N�ᨧ�l)
		bool finished;				  		// ���l���ʵe�O�_�w�g��ܵ���
		bool HitZombie;				  		// ���l�O�_�������L��
	};
}