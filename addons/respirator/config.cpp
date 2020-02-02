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

class CfgFunctions
{
	class SXP_respirator
	{
		class sxp_respirator
		{
			file = "sxp\respirator\functions";
			class actionCondition {}; // Condition check for the ACE actions
			class eventHandler {}; // Event handler to remove hose on mask removal
			class filterToggle {}; // Action to toggle mask filter
			class respiratorToggle {}; // Action to toggle respirator hose			
		};
	};
};

class CfgVehicles
{
	class Man;
	class CAManBase: Man 
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class SXP_respirator_connect {
					displayName = "Connect respirator hose";
					condition = "true";
					exceptions[] = {};
					statement = "";
					icon = "sxp\respirator\data\connect_respirator.paa";
				};
				class SXP_respirator_disconnect {
					displayName = "Disconnect respirator hose";
					condition = "true";
					exceptions[] = {};
					statement = "";
					icon = "sxp\respirator\data\disconnect_respirator.paa";
				};
				class SXP_respirator_filter_attach {
					displayName = "Attach respirator filter";
					condition = "true";
					exceptions[] = {};
					statement = "";
					//icon = "sxp\respirator\data\connect_filter.paa";
				};
				class SXP_respirator_filter_detach {
					displayName = "Detach respirator filter";
					condition = "true";
					exceptions[] = {};
					statement = "";
					//icon = "sxp\respirator\data\disconnect_filter.paa";
				};
				class SXP_respirator_clean_hose {
					displayName = "Clean up respirator hose";
					condition = "true";
					exceptions[] = {};
					statement = "";
					//icon = "sxp\respirator\data\cleanup_respirator.paa";
				};
			};				
		};
	};
};