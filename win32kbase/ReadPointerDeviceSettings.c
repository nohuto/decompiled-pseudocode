/*
 * XREFs of ReadPointerDeviceSettings @ 0x1C009CC40
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C009C980 (xxxSystemParametersInfo.c)
 * Callees:
 *     ApiSetEditionOverrideUserTouchGestureSettings @ 0x1C009CDB4 (ApiSetEditionOverrideUserTouchGestureSettings.c)
 *     ?LoadPointerDeviceTouchSettings@@YAHXZ @ 0x1C009D22C (-LoadPointerDeviceTouchSettings@@YAHXZ.c)
 *     GetDWORDSettingValuesEx @ 0x1C009D450 (GetDWORDSettingValuesEx.c)
 */

__int64 __fastcall ReadPointerDeviceSettings(int a1, _DWORD *a2)
{
  unsigned int v2; // edi
  struct tagDEVICECONFIG_SETTING near **v4; // rdx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  bool v17; // zf
  struct tagDEVICECONFIG_SETTING *v18; // rsi
  int v19; // eax

  v2 = 0;
  if ( a1 == 146 )
  {
    if ( !gTouchMonitor || !gMultiTouchMonitor )
      LoadPointerDeviceTouchSettings();
    ApiSetEditionOverrideUserTouchGestureSettings(off_1C02C4038, off_1C02C4028);
    v4 = off_1C02C4038;
    *a2 = (unsigned int)(*((_DWORD *)off_1C02C4038 + 3) - 1) > 0xFFFFFFFD;
    v5 = *((_DWORD *)v4 + 7);
    if ( v5 == -1 )
      v5 = *((_DWORD *)v4 + 6);
    a2[1] = v5;
    v6 = *((_DWORD *)v4 + 11);
    if ( v6 == -1 )
      v6 = *((_DWORD *)v4 + 10);
    a2[2] = v6;
    v7 = *((_DWORD *)v4 + 15);
    if ( v7 == -1 )
      v7 = *((_DWORD *)v4 + 14);
    a2[3] = v7;
    v8 = *((_DWORD *)v4 + 19);
    if ( v8 == -1 )
      v8 = *((_DWORD *)v4 + 18);
    a2[5] = v8;
    v9 = *((_DWORD *)v4 + 23);
    if ( v9 == -1 )
      v9 = *((_DWORD *)v4 + 22);
    a2[6] = v9;
    v10 = *((_DWORD *)v4 + 27);
    if ( v10 == -1 )
      v10 = *((_DWORD *)v4 + 26);
    a2[7] = v10;
    v11 = *((_DWORD *)v4 + 31);
    if ( v11 == -1 )
      v11 = *((_DWORD *)v4 + 30);
    a2[8] = v11;
    v12 = *((_DWORD *)v4 + 35);
    if ( v12 == -1 )
      v12 = *((_DWORD *)v4 + 34);
    a2[9] = v12;
    v13 = *((_DWORD *)v4 + 39);
    if ( v13 == -1 )
      v13 = *((_DWORD *)v4 + 38);
    a2[10] = v13;
    v14 = *((_DWORD *)v4 + 43);
    if ( v14 == -1 )
      v14 = *((_DWORD *)v4 + 42);
    a2[11] = v14;
    v15 = *((_DWORD *)v4 + 47);
    if ( v15 == -1 )
      v15 = *((_DWORD *)v4 + 46);
    a2[12] = v15;
    v16 = *((_DWORD *)v4 + 51);
    if ( v16 == -1 )
      v16 = *((_DWORD *)v4 + 50);
    v17 = gMultiTouchMonitor == 0;
    v18 = off_1C02C4028;
    a2[13] = v16;
    if ( v17 )
      GetDWORDSettingValuesEx(3LL, v18, 1LL, 0LL);
    v19 = *((_DWORD *)v18 + 3);
    if ( v19 == -1 )
      v19 = *((_DWORD *)v18 + 2);
    a2[4] = v19;
    return 1;
  }
  return v2;
}
