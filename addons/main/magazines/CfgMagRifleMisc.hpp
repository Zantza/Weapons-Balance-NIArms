class hlc_30rnd_68x43_FMJ: 30Rnd_556x45_Stanag {
    mass = 12;
};

class 29rnd_300BLK_STANAG: 30Rnd_556x45_Stanag {
    mass = 10;
};
class hlc_50rnd_300BLK_STANAG_EPR: 29rnd_300BLK_STANAG {
    mass = 25;
};

class hlc_30rnd_556x45_b_HK33: 30Rnd_556x45_Stanag {
    mass = 9.35;
};
class hlc_30rnd_556x45_EPR_HK33: hlc_30rnd_556x45_b_HK33 {
    mass = 9.35;
};
class hlc_30rnd_556x45_M_HK33: hlc_30rnd_556x45_b_HK33 {
    mass = 9.35;
};
class hlc_30rnd_556x45_mdim_HK33: hlc_30rnd_556x45_b_HK33 {
    mass = 9.35;
};
class hlc_30rnd_556x45_SOST_HK33: hlc_30rnd_556x45_b_HK33 {
    mass = 9.35;
};
class hlc_30rnd_556x45_SPR_HK33: hlc_30rnd_556x45_b_HK33 {
    mass = 9.35;
};
class hlc_30rnd_556x45_t_HK33: hlc_30rnd_556x45_b_HK33 {
    mass = 9.35;
};
class hlc_30rnd_556x45_tdim_HK33: hlc_30rnd_556x45_b_HK33 {
    mass = 9.35;
};

class hlc_24Rnd_75x55_B_stgw: 30Rnd_556x45_Stanag {
    mass = 20;
};
class hlc_24Rnd_75x55_ap_stgw: hlc_24Rnd_75x55_B_stgw {
    mass = 20;
};
class hlc_24Rnd_75x55_T_stgw: hlc_24Rnd_75x55_B_stgw {
    mass = 20;
};

class hlc_20Rnd_762x51_b_amt: hlc_24Rnd_75x55_B_stgw {
    mass = 16.7;
};
class hlc_20Rnd_762x51_mk316_amt: hlc_24Rnd_75x55_B_stgw {
    mass = 16.7;
    modelSpecial = "\hlc_wp_sigamt\mesh\magazine\Proxy\20rnd_762NATO_STGW";
};
class hlc_20Rnd_762x51_bball_amt: hlc_24Rnd_75x55_B_stgw {
    mass = 16.7;
    modelSpecial = "\hlc_wp_sigamt\mesh\magazine\Proxy\20rnd_762NATO_STGW";
};
class hlc_20Rnd_762x51_T_amt: hlc_20Rnd_762x51_b_amt {
    mass = 16.3;
};
