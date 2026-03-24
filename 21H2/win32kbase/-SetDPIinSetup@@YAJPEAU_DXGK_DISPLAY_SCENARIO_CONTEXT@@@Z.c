/*
 * XREFs of ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0137A14
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C0068284 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C000F5D0 (DrvGetCurrentDpiInfoFromHDev.c)
 *     DrvSetDisplayConfig @ 0x1C0019050 (DrvSetDisplayConfig.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0099BB0 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     GreReinitializeStockFonts @ 0x1C00B70C0 (GreReinitializeStockFonts.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00CF780 (memset.c)
 */

__int64 __fastcall SetDPIinSetup(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1)
{
  int CurrentDpiInfoFromHDev; // esi
  unsigned int v4; // kr00_4
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  struct _DEVCAPS *v11; // rdx
  __int64 v12; // rcx
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-60h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v17; // [rsp+E8h] [rbp-18h]
  int v18; // [rsp+F0h] [rbp-10h]
  __int64 v19; // [rsp+F8h] [rbp-8h]
  __int64 v20; // [rsp+100h] [rbp+0h]
  int v21; // [rsp+108h] [rbp+8h]
  __int64 v22; // [rsp+110h] [rbp+10h]
  int v23; // [rsp+118h] [rbp+18h]
  _DWORD v24[36]; // [rsp+120h] [rbp+20h] BYREF
  char v25; // [rsp+1C8h] [rbp+C8h] BYREF
  int v26; // [rsp+1D0h] [rbp+D0h] BYREF
  struct _MDEV *v27; // [rsp+1D8h] [rbp+D8h] BYREF

  QueryTable.Flags = 292;
  v26 = 0;
  QueryTable.Name = L"ImageState";
  v27 = 0LL;
  QueryTable.EntryContext = &DestinationString;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultType = 16777217;
  QueryTable.DefaultData = 0LL;
  DestinationString = 0LL;
  QueryTable.DefaultLength = 0;
  String2 = 0LL;
  v17 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0;
  v22 = 0LL;
  v23 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\State",
         &QueryTable,
         0LL,
         0LL) < 0 )
    goto LABEL_4;
  RtlInitUnicodeString(&String2, L"IMAGE_STATE_SPECIALIZE_RESEAL_TO_OOBE");
  if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
  {
    RtlInitUnicodeString(&String2, L"IMAGE_STATE_COMPLETE");
    if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
      return 3221225474LL;
LABEL_4:
    RtlDeleteRegistryValue(
      0,
      L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
      L"Overrode");
    return 3221225474LL;
  }
  QueryTable.Flags |= 0x80u;
  QueryTable.Name = L"Upgrade";
  QueryTable.EntryContext = &v26;
  if ( RtlQueryRegistryValues(0, L"\\Registry\\Machine\\SYSTEM\\Setup", &QueryTable, 0LL, 0LL) >= 0 )
    return 3221225474LL;
  QueryTable.Name = L"Overrode";
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
         &QueryTable,
         0LL,
         0LL) >= 0 )
    return 3221225474LL;
  memset(v24, 0, 0x60uLL);
  CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(*(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL), (__int64)v24);
  v4 = 96 * v24[2] + 50;
  v5 = v4 / 0x64;
  if ( CurrentDpiInfoFromHDev >= 0 )
  {
    v6 = -1073741637;
    gbSetupDPIInitialized = 1;
    if ( qword_1C0257898 )
      v7 = qword_1C0257898();
    else
      v7 = -1073741637;
    if ( v7 >= 0 && qword_1C02578A0 )
      qword_1C02578A0(1LL, &v26);
    if ( v26 != v5 )
    {
      v8 = qword_1C02578B8 ? qword_1C02578B8() : -1073741637;
      if ( v8 >= 0 )
      {
        v9 = qword_1C02578C0 ? qword_1C02578C0(1LL, v5) : -1073741637;
        if ( v9 >= 0 )
        {
          v10 = qword_1C02578A8 ? qword_1C02578A8() : -1073741637;
          if ( v10 >= 0 )
          {
            if ( qword_1C02578B0 )
              v6 = qword_1C02578B0(1LL, v4 / 0x64 > 0x78);
            if ( v6 >= 0 )
            {
              v25 = 0;
              gDrvDpiWin8Style = 0;
              gDrvDpiAdjusted = 0;
              if ( (int)DrvSetDisplayConfig(
                          0,
                          0LL,
                          0x88Fu,
                          0,
                          0LL,
                          0,
                          0LL,
                          0LL,
                          *(struct _MDEV **)(gpDispInfo + 16),
                          &v27,
                          0LL,
                          0LL,
                          &v25,
                          0LL,
                          (__int64)a1) >= 0
                && !v25 )
              {
                GreReinitializeStockFonts(v5, 1);
                v11 = gpGdiDevCaps;
                *(_QWORD *)(gpDispInfo + 40) = *(_QWORD *)v27;
                *(_QWORD *)(gpDispInfo + 16) = v27;
                v15 = *(_QWORD *)(gpDispInfo + 40);
                vGetDeviceCaps((struct PDEVOBJ *)&v15, v11);
                *((_WORD *)gpsi + 3499) = v5;
                ++*((_WORD *)gpsi + 3507);
                *(_WORD *)(PsGetCurrentProcessWin32Process(v12) + 284) = *((_WORD *)gpsi + 3499);
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)CurrentDpiInfoFromHDev;
}
