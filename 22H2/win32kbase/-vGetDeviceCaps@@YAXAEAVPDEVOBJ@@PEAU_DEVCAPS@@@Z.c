/*
 * XREFs of ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C009A970
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013A90 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     InitVideo @ 0x1C009A7D8 (InitVideo.c)
 *     ?NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C00CAC40 (-NtGdiGetDeviceCapsAllInternal@@YAHAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0137CE4 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0144BCC (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     IsGetColorManagementCapsSupported @ 0x1C009AAF8 (IsGetColorManagementCapsSupported.c)
 *     ?cFonts@PDEVOBJ@@QEAAKXZ @ 0x1C009AB30 (-cFonts@PDEVOBJ@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vGetDeviceCaps(struct PDEVOBJ *this, struct _DEVCAPS *a2)
{
  _DWORD *v3; // rdi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  int v9; // eax

  v3 = (_DWORD *)(*(_QWORD *)this + 2136LL);
  *(_DWORD *)a2 = *v3;
  *((_DWORD *)a2 + 1) = v3[1];
  *((_DWORD *)a2 + 2) = (v3[2] + 500) / 0x3E8u;
  *((_DWORD *)a2 + 3) = (v3[3] + 500) / 0x3E8u;
  *((_DWORD *)a2 + 4) = v3[2];
  *((_DWORD *)a2 + 5) = v3[3];
  *((_DWORD *)a2 + 6) = v3[4];
  *((_DWORD *)a2 + 7) = v3[5];
  v5 = v3[6];
  if ( v5 == 15 )
    v5 = 16;
  v6 = -1;
  *((_DWORD *)a2 + 8) = v5;
  *((_DWORD *)a2 + 9) = v3[7];
  v7 = v3[8];
  if ( v7 != -1 )
    v6 = 5 * v7;
  *((_DWORD *)a2 + 10) = v6;
  *((_DWORD *)a2 + 11) = PDEVOBJ::cFonts(this);
  v8 = 0;
  *((_DWORD *)a2 + 12) = v3[8];
  *((_DWORD *)a2 + 13) = v3[9];
  *((_DWORD *)a2 + 34) = v3[76];
  *((_DWORD *)a2 + 14) = v3[16];
  *((_DWORD *)a2 + 15) = v3[17];
  *((_DWORD *)a2 + 16) = v3[18];
  *((_DWORD *)a2 + 17) = v3[10];
  *((_DWORD *)a2 + 18) = v3[11];
  *((_DWORD *)a2 + 19) = v3[26];
  *((_DWORD *)a2 + 20) = v3[13] + v3[14] + v3[15];
  *((_DWORD *)a2 + 21) = v3[24];
  *((_DWORD *)a2 + 22) = v3[25];
  *((_DWORD *)a2 + 23) = v3[22];
  *((_DWORD *)a2 + 24) = v3[23];
  v9 = v3[12] | 0x1807;
  *((_DWORD *)a2 + 25) = v9;
  if ( v3[1] )
    *((_DWORD *)a2 + 25) = v9 | 0x4000;
  *((_DWORD *)a2 + 26) = v3[62];
  *((_DWORD *)a2 + 27) = v3[4];
  *((_DWORD *)a2 + 28) = v3[5];
  *((_DWORD *)a2 + 29) = v3[63];
  if ( (int)IsGetColorManagementCapsSupported() >= 0 && qword_1C0255250 )
    v8 = qword_1C0255250(*(_QWORD *)this);
  *((_DWORD *)a2 + 35) = v8;
}
