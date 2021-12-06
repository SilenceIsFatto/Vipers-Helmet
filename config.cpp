class CfgPatches
{
	class MS_ViperHelmet
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={};
	};
};

// Made by Silence: https://steamcommunity.com/id/MS-Silence/

class CfgWeapons
{
	class HeadgearItem;
	class H_HelmetB;
	class Uniform_Base;
	class UniformItem;
	class ItemCore;
	class VestItem;
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class MS_VipersHelmet: H_HelmetB
	{
		author= "Silence";
		weaponPoolAvailable=1;
		displayName="[MS] Vipers Helmet";
		picture="\Viper_Helmet\ms_logo.paa";
		model="\Viper_Helmet\viperhelmet";
		hiddenSelections[] = {"Lights", "LowerHelmet", "MiddleHelmet", "UpperHelmet", "Visor", "Wires"};
		hiddenSelectionsTextures[] = {"", "viper_helmet\textures\viper_head_headmaterial_2_basecolor.paa", "viper_helmet\textures\viper_head_headmaterial_3_basecolor.paa", "viper_helmet\textures\viper_head_headmaterial_1_basecolor.paa", "viper_helmet\textures\viper_head_headmaterial_2_basecolor.paa", "viper_helmet\textures\viper_head_headmaterial_3_basecolor.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=50;
			uniformModel="\Viper_Helmet\viperhelmet";
			modelSides[]=
			{
				"TCivilian",
				"TWest"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitPointName="HitHead";
					armor=7;
					passThrough=0.75;
				};
			};
		};
	};
	class MS_VipersHelmetBlue: MS_VipersHelmet
	{
		displayName = "[MS] Vipers Helmet (Blue Visor)";
		hiddenSelections[] = {"Lights", "LowerHelmet", "MiddleHelmet", "UpperHelmet", "Visor", "Wires"};
		hiddenSelectionsTextures[] = {"", "viper_helmet\textures\viper_head_headmaterial_2_basecolor.paa", "viper_helmet\textures\viper_head_headmaterial_3_basecolor.paa", "viper_helmet\textures\viper_head_headmaterial_1_basecolor.paa", "viper_helmet\textures\viper_head_headmaterial_visorblue.paa", "viper_helmet\textures\viper_head_headmaterial_3_basecolor.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\Viper_Helmet\viperhelmet";
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	
			modelSides[] = {6}; 
			hiddenSelections[] = {"Lights", "LowerHelmet", "MiddleHelmet", "UpperHelmet", "Visor", "Wires"};
			hiddenSelectionsTextures[] = {"", "viper_helmet\textures\viper_head_headmaterial_2_basecolor.paa", "viper_helmet\textures\viper_head_headmaterial_3_basecolor.paa", "viper_helmet\textures\viper_head_headmaterial_1_basecolor.paa", "viper_helmet\textures\viper_head_headmaterial_visorblue.paa", "viper_helmet\textures\viper_head_headmaterial_3_basecolor.paa"};
			subItems[] = {"Integrated_NVG_F"};
			
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor	= 6; // addition to armor of referenced hitpoint
					passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
			};
		};
	};
	class MS_VipersHelmetIMC: MS_VipersHelmet
	{
		displayName = "[MS] Vipers Helmet (IMC)";
		hiddenSelections[] = {"Lights", "LowerHelmet", "MiddleHelmet", "UpperHelmet", "Visor", "Wires"};
		hiddenSelectionsTextures[] = {"", "viper_helmet\Textures_IMC\VIPER_HEAD_HeadMaterial_2_BaseColor.paa", "viper_helmet\Textures_IMC\viper_head_headmaterial_3_basecolor.paa", "viper_helmet\Textures_IMC\viper_head_headmaterial_1_basecolor.paa", "viper_helmet\Textures_IMC\VIPER_HEAD_HeadMaterial_2_BaseColor.paa", "viper_helmet\Textures_IMC\viper_head_headmaterial_3_basecolor.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\Viper_Helmet\viperhelmet";
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	
			modelSides[] = {6}; 
			hiddenSelections[] = {"Lights", "LowerHelmet", "MiddleHelmet", "UpperHelmet", "Visor", "Wires"};
			hiddenSelectionsTextures[] = {"", "viper_helmet\Textures_IMC\VIPER_HEAD_HeadMaterial_2_BaseColor.paa", "viper_helmet\Textures_IMC\viper_head_headmaterial_3_basecolor.paa", "viper_helmet\Textures_IMC\viper_head_headmaterial_1_basecolor.paa", "viper_helmet\Textures_IMC\VIPER_HEAD_HeadMaterial_2_BaseColor.paa", "viper_helmet\Textures_IMC\viper_head_headmaterial_3_basecolor.paa"};
			subItems[] = {"Integrated_NVG_F"};
			
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor	= 6; // addition to armor of referenced hitpoint
					passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
			};
		};
	};
	class MS_VipersHelmetMilitia: MS_VipersHelmet
	{
		displayName = "[MS] Vipers Helmet (Militia)";
		hiddenSelections[] = {"Lights", "LowerHelmet", "MiddleHelmet", "UpperHelmet", "Visor", "Wires"};
		hiddenSelectionsTextures[] = {"", "viper_helmet\Textures_Militia\VIPER_HEAD_HeadMaterial_2_BaseColor.paa", "viper_helmet\Textures_Militia\viper_head_headmaterial_3_basecolor.paa", "viper_helmet\Textures_Militia\viper_head_headmaterial_1_basecolor.paa", "viper_helmet\Textures_Militia\VIPER_HEAD_HeadMaterial_2_BaseColor.paa", "viper_helmet\Textures_Militia\viper_head_headmaterial_3_basecolor.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\Viper_Helmet\viperhelmet";
			allowedSlots[] = {UNIFORM_SLOT, BACKPACK_SLOT, VEST_SLOT, HEADGEAR_SLOT};	
			modelSides[] = {6}; 
			hiddenSelections[] = {"Lights", "LowerHelmet", "MiddleHelmet", "UpperHelmet", "Visor", "Wires"};
			hiddenSelectionsTextures[] = {"", "viper_helmet\Textures_Militia\VIPER_HEAD_HeadMaterial_2_BaseColor.paa", "viper_helmet\Textures_Militia\viper_head_headmaterial_3_basecolor.paa", "viper_helmet\Textures_Militia\viper_head_headmaterial_1_basecolor.paa", "viper_helmet\Textures_Militia\VIPER_HEAD_HeadMaterial_2_BaseColor.paa", "viper_helmet\Textures_Militia\viper_head_headmaterial_3_basecolor.paa"};
			subItems[] = {"Integrated_NVG_F"};
			
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName	= "HitHead"; // reference to the hit point class defined in the man base class
					armor	= 6; // addition to armor of referenced hitpoint
					passThrough	= 0.5; // multiplier of base passThrough defined in referenced hitpoint
				};
			};
		};
	};
};
