/*
 * XREFs of ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D54F0
 * Callers:
 *     ?UserInitialize@@YAJXZ @ 0x1C005F1A8 (-UserInitialize@@YAJXZ.c)
 * Callees:
 *     DrvSetDisplayConfig @ 0x1C0065F30 (DrvSetDisplayConfig.c)
 *     ?vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z @ 0x1C0078DE0 (-vGetDeviceCaps@@YAXAEAVPDEVOBJ@@PEAU_DEVCAPS@@@Z.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C00A705C (DrvGetCurrentDpiInfoFromHDev.c)
 *     GreReinitializeStockFonts @ 0x1C00C4D10 (GreReinitializeStockFonts.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 __fastcall SetDPIinSetup(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1)
{
  int CurrentDpiInfoFromHDev; // edi
  unsigned int v4; // kr00_4
  unsigned int v5; // ebx
  struct _DEVCAPS *v6; // rdx
  __int64 v7; // rcx
  UNICODE_STRING String2; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int64 v10; // [rsp+A0h] [rbp-60h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v12; // [rsp+E8h] [rbp-18h]
  int v13; // [rsp+F0h] [rbp-10h]
  __int64 v14; // [rsp+F8h] [rbp-8h]
  __int64 v15; // [rsp+100h] [rbp+0h]
  int v16; // [rsp+108h] [rbp+8h]
  __int64 v17; // [rsp+110h] [rbp+10h]
  int v18; // [rsp+118h] [rbp+18h]
  _DWORD v19[32]; // [rsp+120h] [rbp+20h] BYREF
  bool v20; // [rsp+1B8h] [rbp+B8h] BYREF
  int v21; // [rsp+1C0h] [rbp+C0h] BYREF
  struct _MDEV *v22; // [rsp+1C8h] [rbp+C8h] BYREF

  QueryTable.Flags = 292;
  v21 = 0;
  QueryTable.Name = L"ImageState";
  v22 = 0LL;
  QueryTable.EntryContext = &DestinationString;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultType = 16777217;
  QueryTable.DefaultData = 0LL;
  DestinationString = 0LL;
  QueryTable.DefaultLength = 0;
  String2 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v18 = 0;
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
  QueryTable.EntryContext = &v21;
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
  memset(v19, 0, 0x60uLL);
  CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(*(_QWORD *)(*((_QWORD *)gpDispInfo + 12) + 80LL), (__int64)v19);
  v4 = 96 * v19[2] + 50;
  v5 = v4 / 0x64;
  if ( CurrentDpiInfoFromHDev >= 0 )
  {
    gbSetupDPIInitialized = 1;
    if ( qword_1C029C5E8 && (int)qword_1C029C5E8() >= 0 && qword_1C029C5F0 )
      qword_1C029C5F0(1LL, &v21);
    if ( v21 != v5 )
    {
      if ( qword_1C029C608 )
      {
        if ( (int)qword_1C029C608() >= 0 )
        {
          if ( qword_1C029C610 )
          {
            if ( (int)qword_1C029C610(1LL, v5) >= 0 )
            {
              if ( qword_1C029C5F8 )
              {
                if ( (int)qword_1C029C5F8() >= 0 )
                {
                  if ( qword_1C029C600 )
                  {
                    if ( (int)qword_1C029C600(1LL, v4 / 0x64 > 0x78) >= 0 )
                    {
                      v20 = 0;
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
                                  *((struct _MDEV **)gpDispInfo + 2),
                                  &v22,
                                  0LL,
                                  0LL,
                                  &v20,
                                  0LL,
                                  (__int64)a1,
                                  0LL) >= 0
                        && !v20 )
                      {
                        GreReinitializeStockFonts(v5, 1);
                        v6 = gpGdiDevCaps;
                        *((_QWORD *)gpDispInfo + 5) = *(_QWORD *)v22;
                        *((_QWORD *)gpDispInfo + 2) = v22;
                        v10 = *((_QWORD *)gpDispInfo + 5);
                        vGetDeviceCaps((struct PDEVOBJ *)&v10, v6);
                        *((_WORD *)gpsi + 3499) = v5;
                        ++*((_WORD *)gpsi + 3507);
                        *(_WORD *)(PsGetCurrentProcessWin32Process(v7) + 284) = *((_WORD *)gpsi + 3499);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)CurrentDpiInfoFromHDev;
}
