#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {
            "hlc_rifle_aek972", "hlc_rifle_aek972_mtk", "hlc_rifle_aek972worn",
            "hlc_rifle_aek973", "hlc_rifle_aek973_mtk", "hlc_rifle_aek973worn",
            "hlc_rifle_ak19", "hlc_rifle_ak19GL", "hlc_rifle_aku19",
            "hlc_rifle_ak19_grip", "hlc_rifle_ak19_grip2", "hlc_rifle_ak19_grip3",
            "hlc_rifle_aku19_grip", "hlc_rifle_aku19_grip2", "hlc_rifle_aku19_grip3",
            "hlc_rifle_RK62_rail"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "wb_niarms_main_prep",
            "cba_main",
            "hlcweapons_core",
            "hlcweapons_ACR",
            "hlcweapons_AKs",
            "hlcweapons_AR15",
            "hlcweapons_AUG",
            "hlcweapons_Bren",
            "hlcweapons_falpocalypse",
            "hlcweapons_FHAWCovert",
            "hlcweapons_FN3011",
            "hlcweapons_g3",
            "hlcweapons_G36",
            "hlcweapons_M134",
            "hlcweapons_M14",
            "hlcweapons_M16A2",
            "hlcweapons_M60E4",
            "hlcweapons_MG3s",
            "hlcweapons_MP5",
            "hlcweapons_saw",
            "hlcweapons_SCAR",
            "hlcweapons_SG550",
            "hlcweapons_Springfield1903",
            "hlcweapons_stgw57",
            "hlcweapons_XM8",
            "niaweapons_226",
            "niarms_416",
            "niaweapons_C96",
            "sp_fwa_mas"
        };
        author = "johnb43";
        authors[] = {
            "johnb43",
            "ThePointForward",
            "Blutze",
            "Garfield"
        };
        url = "https://github.com/johnb432/Weapons-Balance-NIArms";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

#include "CfgEventHandlers.hpp"
#include "CfgAcc.hpp"
#include "CfgAmmo.hpp"
#include "CfgAmmoBelts.hpp"
#include "CfgVehicles.hpp"
#include "CfgMagazineWells.hpp"

class Mode_SemiAuto;
class Mode_FullAuto;
class Mode_Burst;

class asdg_OpticRail1913_long;
class nia_rifle_gripod_slot;
class asdg_MuzzleSlot_762R;
class asdg_OpticSideRail_AK;
class asdg_FrontSideRail;

class CfgWeapons {
    class Rifle;
    class Rifle_Base_F: Rifle {
        class WeaponSlotsInfo;
    };

    class ItemCore;
    class CBA_MiscItem;

    #include "weapons\CfgWeapMisc.hpp"
    #include "weapons\CfgWeapACR.hpp"
    #include "weapons\CfgWeapAK.hpp"
    #include "weapons\CfgWeapAKNew.hpp"
    #include "weapons\CfgWeapAR15.hpp"
    #include "weapons\CfgWeapAUG.hpp"
    #include "weapons\CfgWeapAWM.hpp"
    #include "weapons\CfgWeapFAL.hpp"
    #include "weapons\CfgWeapG3.hpp"
    #include "weapons\CfgWeapG36.hpp"
    #include "weapons\CfgWeapHK416.hpp"
    #include "weapons\CfgWeapM14.hpp"
    #include "weapons\CfgWeapMG.hpp"
    #include "weapons\CfgWeapMP5.hpp"
    #include "weapons\CfgWeapMuzzle.hpp"
    #include "weapons\CfgWeapOptic.hpp"
    #include "weapons\CfgWeapSAW.hpp"
    #include "weapons\CfgWeapSCAR.hpp"
    #include "weapons\CfgWeapSG550.hpp"
    #include "weapons\CfgWeapXM8.hpp"
};

class CfgMagazines {
    class 30Rnd_556x45_Stanag;
    class hlc_50Rnd_45ACP_B_1921;

    #include "magazines\CfgMagFAL.hpp"
    #include "magazines\CfgMagAK545.hpp"
    #include "magazines\CfgMagAK762.hpp"
    #include "magazines\CfgMagAUG.hpp"
    #include "magazines\CfgMagG36.hpp"
    #include "magazines\CfgMagMG3.hpp"
    #include "magazines\CfgMagMisc.hpp"
    #include "magazines\CfgMagNATO762.hpp"
    #include "magazines\CfgMagRifleMisc.hpp"
    #include "magazines\CfgMagSCAR.hpp"
    #include "magazines\CfgMagSG550.hpp"
    #include "magazines\CfgMagSTANAG.hpp"
    #include "magazines\CfgMag300.hpp"
    #include "magazines\CfgMagAK556.hpp"

    // New additions
    #include "magazines\CfgMag303.hpp"
    #include "magazines\CfgMagAK545New.hpp"
    #include "magazines\CfgMagAK762New.hpp"
    #include "magazines\CfgMagMauser.hpp"
    #include "magazines\CfgMagPKM.hpp"
    #include "magazines\CfgMagMisc2.hpp"
};

class BettIR_Config {
    class CompatibleAttachments {
        class __base_rightSiderailPointer;
        class hlc_acc_DBALPL_Side: __base_rightSiderailPointer {};
        class hlc_acc_LS321G: __base_rightSiderailPointer {};

        class hlc_acc_AIM1D_Generic: __base_rightSiderailPointer {};
        class hlc_acc_AIM1D_M16: __base_rightSiderailPointer {};

        class hlc_acc_DBALPL: __base_rightSiderailPointer {};
    };
};
