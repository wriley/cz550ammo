class CfgPatches
{
	class cz550_ammo_box
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CAData","CAMisc3"};
	};
};

class CfgAddons
{
	class cz550_ammo_box
	{
		list[]=
		{
			"CZ550_Ammo_Box",
		};
	};
};

class CfgVehicleClasses
{
	class cz550_ammo_box
	{
		// name in the editor
		displayName="Kerbo addons";
	};
};

class CfgVehicles
{
	class Thing; // External class reference
	class CZ550_Ammo_Box: Thing
	{
		scope = 2;
		model = "\cz550ammo\cz550_ammo_box.p3d";
		icon = "\Ca\misc\data\icons\i_danger_CA.paa";
		displayName = "CZ550 ammo box";
		mapSize = 0.7;
		accuracy = 0.2;
		vehicleClass = "cz550_ammo_box";
		destrType = "DestructNo";
	};
};