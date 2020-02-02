class CfgPatches
{
	class sxp_respirator
	{
		// Default BIS info
		name = "SuperXP Respirator";
		author = "Superxpdude";
		url = "https://github.com/Superxpdude/sxp_respirator";
		
		requiredAddons[] = {
			"A3_Data_F_Enoch",
			"A3_Characters_F_Enoch",
			"A3_Supplies_F_Enoch_Bags", // Doesn't work if you don't have the contact backpacks
			"ace_interaction"
		};
		requiredVersion = 1.94; // Requires the Contact DLC
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		
		// CBA Info
		authors[] = {"Superxpdude"};
		version = 1.0;
		versionStr = "1.0";
		versionAr[] = {1.0.0};
	};
};

