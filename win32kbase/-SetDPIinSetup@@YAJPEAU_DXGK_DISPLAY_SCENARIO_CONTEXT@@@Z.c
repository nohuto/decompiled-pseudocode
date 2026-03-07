__int64 __fastcall SetDPIinSetup(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1)
{
  char v2; // bl
  int updated; // edi
  unsigned int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // edx
  struct _MDEV *v21; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-78h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+E8h] [rbp-18h]
  int v26; // [rsp+F0h] [rbp-10h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  __int64 v28; // [rsp+100h] [rbp+0h]
  int v29; // [rsp+108h] [rbp+8h]
  __int64 v30; // [rsp+110h] [rbp+10h]
  int v31; // [rsp+118h] [rbp+18h]
  _DWORD v32[32]; // [rsp+120h] [rbp+20h] BYREF
  bool v33; // [rsp+1B8h] [rbp+B8h] BYREF
  char v34; // [rsp+1C0h] [rbp+C0h] BYREF
  int v35; // [rsp+1C8h] [rbp+C8h] BYREF

  QueryTable.Flags = 292;
  v35 = 0;
  QueryTable.Name = L"ImageState";
  v21 = 0LL;
  QueryTable.EntryContext = &DestinationString;
  QueryTable.QueryRoutine = 0LL;
  QueryTable.DefaultType = 16777217;
  QueryTable.DefaultData = 0LL;
  DestinationString = 0LL;
  QueryTable.DefaultLength = 0;
  String2 = 0LL;
  v25 = 0LL;
  v26 = 0;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0;
  v30 = 0LL;
  v31 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\State",
         &QueryTable,
         0LL,
         0LL) < 0 )
    goto LABEL_4;
  RtlInitUnicodeString(&String2, L"IMAGE_STATE_SPECIALIZE_RESEAL_TO_OOBE");
  v2 = 1;
  if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
  {
    RtlInitUnicodeString(&String2, L"IMAGE_STATE_COMPLETE");
    if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
      return 0LL;
LABEL_4:
    RtlDeleteRegistryValue(
      0,
      L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
      L"Overrode");
    return 0LL;
  }
  QueryTable.Flags |= 0x80u;
  QueryTable.Name = L"Upgrade";
  QueryTable.EntryContext = &v35;
  if ( RtlQueryRegistryValues(0, L"\\Registry\\Machine\\SYSTEM\\Setup", &QueryTable, 0LL, 0LL) >= 0 )
    return 0LL;
  QueryTable.Name = L"Overrode";
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Setup\\DPI",
         &QueryTable,
         0LL,
         0LL) >= 0 )
    return 0LL;
  memset(v32, 0, 0x60uLL);
  if ( (int)DrvGetCurrentDpiInfoFromHDev(*(_QWORD *)(*((_QWORD *)gpDispInfo + 12) + 80LL), (__int64)v32) < 0 )
    return 0LL;
  updated = 0;
  gbSetupDPIInitialized = 1;
  v5 = (96 * v32[2] + 50) / 0x64u;
  if ( qword_1C02D6E30 && (int)qword_1C02D6E30() >= 0 && qword_1C02D6E38 )
    qword_1C02D6E38(1LL, &v35);
  if ( v35 != v5 )
  {
    if ( qword_1C02D6E50 )
    {
      if ( (int)qword_1C02D6E50() >= 0 )
      {
        if ( qword_1C02D6E58 )
        {
          if ( (int)qword_1C02D6E58(1LL, v5) >= 0 )
          {
            if ( qword_1C02D6E40 )
            {
              if ( (int)qword_1C02D6E40() >= 0 )
              {
                if ( qword_1C02D6E48 )
                {
                  if ( (int)qword_1C02D6E48(1LL, v5 > 0x78) >= 0 )
                  {
                    v33 = 0;
                    v7 = *(_QWORD *)(SGDGetSessionState(v6) + 24);
                    *(_DWORD *)(v7 + 1280) = 0;
                    *(_DWORD *)(v7 + 1288) = 0;
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
                                &v21,
                                0LL,
                                0LL,
                                &v33,
                                0LL,
                                (__int64)a1,
                                0LL) >= 0 )
                    {
                      if ( !v33 )
                      {
                        GreReinitializeStockFonts(v5, 1);
                        *((_QWORD *)gpDispInfo + 5) = *(_QWORD *)v21;
                        *((_QWORD *)gpDispInfo + 2) = v21;
                        GreUpdateSharedDevCaps(*((_QWORD *)gpDispInfo + 5));
                        *((_WORD *)gpsi + 3499) = v5;
                        ++*((_WORD *)gpsi + 3507);
                        CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
                        v10 = CurrentProcessWin32Process;
                        if ( CurrentProcessWin32Process )
                          v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
                        *(_WORD *)(v10 + 284) = *((_WORD *)gpsi + 3499);
                      }
                      if ( !CreateCachedMonitor() )
                      {
                        updated = -1073741823;
                        gbSetDPIinSetupChangedDisplaySettings = 1;
                        goto LABEL_30;
                      }
                      AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v34, v11, v12, v13);
                      updated = zzzUpdateUserScreen(v15, v14, v16);
                      AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v34, v17, v18, v19);
                      gbSetDPIinSetupChangedDisplaySettings = 1;
                      if ( updated < 0 )
                      {
LABEL_30:
                        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
                          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
                        {
                          v2 = 0;
                        }
                        if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                        {
                          v20 = 22;
                          LOBYTE(v20) = v2;
                          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                          WPP_RECORDER_AND_TRACE_SF_d(
                            WPP_GLOBAL_Control->AttachedDevice,
                            v20,
                            v12,
                            WPP_MAIN_CB.Queue.ListEntry.Flink,
                            2,
                            14,
                            22,
                            (__int64)&WPP_d82075a5283f313a7450cbd9ac983c1d_Traceguids,
                            updated);
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
  }
  return (unsigned int)updated;
}
