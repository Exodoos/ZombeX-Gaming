class Life_atm_management {
	idd = 2700;
	name= "life_atm_menu";
	movingEnable = false;
	enableSimulation = true;

	class controlsBackground {

class Life_RscTitleBackground: Life_RscText
{
	idc = -1;
	x = 8.5 * GUI_GRID_W + GUI_GRID_X;
	y = 5 * GUI_GRID_H + GUI_GRID_Y;
	w = 23 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
	colorBackground[] = {0.31,0.51,0.97,1};
};
class MainBackground: Life_RscText
{
	idc = -1;
	x = 8.5 * GUI_GRID_W + GUI_GRID_X;
	y = 7 * GUI_GRID_H + GUI_GRID_Y;
	w = 23 * GUI_GRID_W;
	h = 14.5 * GUI_GRID_H;
	colorBackground[] = {0,0,0,0.7};
};
};

class controls {

	class CashTitle: Life_RscStructuredText
	{
		idc = 2701;
		x = 10 * GUI_GRID_W + GUI_GRID_X;
		y = 8 * GUI_GRID_H + GUI_GRID_Y;
		w = 19.5 * GUI_GRID_W;
		h = 5 * GUI_GRID_H;
	};

class Title: Life_RscText
{
	idc = -1;
	text = "$STR_ATM_Title";
	x = 9 * GUI_GRID_W + GUI_GRID_X;
	y = 5 * GUI_GRID_H + GUI_GRID_Y;
	w = 13 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
};


class WithdrawButton: Life_RscButtonMenu
{
	idc = -1;
	text = "$STR_ATM_Withdraw";
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
	onButtonClick = "[] call life_fnc_bankWithdraw";
	x = 9.5 * GUI_GRID_W + GUI_GRID_X;
	y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
};
class DepositButton: Life_RscButtonMenu
{
	idc = -1;
	text = "$STR_ATM_Deposit";
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
	onButtonClick = "[0] call life_fnc_bankDeposit";
	x = 16 * GUI_GRID_W + GUI_GRID_X;
	y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
};
class DepositAllButton: Life_RscButtonMenu
{
	idc = -1;
	text = "Deposit All";
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
	onButtonClick = "[1] call life_fnc_bankDeposit";
	x = 22.5 * GUI_GRID_W + GUI_GRID_X;
	y = 18.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 2 * GUI_GRID_H;
};
class moneyEdit: Life_RscEdit
{
	idc = 2702;
	sizeEx = 0.030;
	text = "1"; //--- ToDo: Localize;
	x = 10 * GUI_GRID_W + GUI_GRID_X;
	y = 13.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.5 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
};
class PlayerList: Life_RscCombo
{
	idc = 2703;
	x = 19 * GUI_GRID_W + GUI_GRID_X;
	y = 13.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 9 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
};
class TransferButton: Life_RscButtonMenu
{
	idc = 2403;
	text = "$STR_ATM_Transfer";
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
	onButtonClick = "[] call life_fnc_bankTransfer";
	x = 9.5 * GUI_GRID_W + GUI_GRID_X;
	y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
};
class GangDeposit: TransferButton
{
	idc = 2404;
	text = "$STR_pInAct_DepositToGang";
	colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
	onButtonClick = "[] call life_fnc_gangDeposit";
	x = 16 * GUI_GRID_W + GUI_GRID_X;
	y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8.5 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
};
class CloseButtonKey: Life_RscButtonMenu
{
	idc = -1;
	text = "$STR_Global_Close";
	onButtonClick = "closeDialog 0;";
	x = 25 * GUI_GRID_W + GUI_GRID_X;
	y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 4 * GUI_GRID_W;
	h = 1.5 * GUI_GRID_H;
	colorBackground[] = {0.79,0.2,0,1};
};
};
};
