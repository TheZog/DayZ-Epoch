class SkinBase : CA_Magazine
{
	scope = 0;
	count = 1;
	type = 256;
	sex = "male";
	playerModel = "Survivor2_DZ";	
	model = "\dayz_equip\models\cloth_parcel.p3d";
	picture = "\dayz_equip\textures\equip_cloth_parcel_ca.paa";	
	displayName = $STR_EQUIP_NAME_CLOTHES; // Used in Epoch player_craftItem for canvas
	descriptionShort = $STR_EQUIP_DESC_CLOTHES;	
	Craftoutput = "equip_rag";
	
	class ItemActions
	{
		class Use
		{
			text = $STR_EQUIP_TEXT_CLOTHES;
			script = "spawn player_wearClothes;";
		};
		
		class tearClothes
		{
			text = $STR_TEAR_CLOTHES;
			script = "spawn player_tearClothes;";
		};
		class Crafting 
		{
			text = $STR_EPOCH_PLAYER_269b;
			script = ";['Crafting','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemCanvas",1}};
			input[] = {{"SkinBase",2}};
		};
		class Crafting1 
		{
			text = $STR_EPOCH_PLAYER_269;
			script = ";['Crafting1','CfgMagazines', _id] spawn player_craftItem;";
			neednearby[] = {};
			requiretools[] = {"ItemToolbox","ItemKnife"};
			output[] = {{"ItemBandage",2}};
			input[] = {{"SkinBase",1},{"ItemTrashToiletpaper",1}};
		};
	};
	weight = 1;
};

#include "EpochSkins.hpp"