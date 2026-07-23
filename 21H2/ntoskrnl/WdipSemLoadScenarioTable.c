/*
 * XREFs of WdipSemLoadScenarioTable @ 0x140799B78
 * Callers:
 *     WdipSemCleanStart @ 0x14079925C (WdipSemCleanStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     RtlVerifyVersionInfo @ 0x14037D410 (RtlVerifyVersionInfo.c)
 *     VerSetConditionMask @ 0x14037F3B0 (VerSetConditionMask.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     WdipSemFastAllocate @ 0x140788B80 (WdipSemFastAllocate.c)
 *     WdipSemLoadNextScenario @ 0x140799F84 (WdipSemLoadNextScenario.c)
 *     WdipSemQueryValueFromRegistry @ 0x14079A464 (WdipSemQueryValueFromRegistry.c)
 *     WdipSemOpenRegistryKey @ 0x14079A574 (WdipSemOpenRegistryKey.c)
 *     WdipSemFreeScenario @ 0x14079A600 (WdipSemFreeScenario.c)
 *     WdipSemUpdateProviderEntriesForScenario @ 0x14079A698 (WdipSemUpdateProviderEntriesForScenario.c)
 *     WdipSemUpdateProviderTableWithScenario @ 0x14079A774 (WdipSemUpdateProviderTableWithScenario.c)
 *     WdipSemEnableAllProviders @ 0x14079A8E0 (WdipSemEnableAllProviders.c)
 *     WdipSemAddScenarioToTable @ 0x14079A9D4 (WdipSemAddScenarioToTable.c)
 *     WdipSemRollBackProviderTable @ 0x14092FF04 (WdipSemRollBackProviderTable.c)
 *     WdipSemWriteMisconfigEvent @ 0x14093078C (WdipSemWriteMisconfigEvent.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x140930888 (WdipSemWriteScenarioLimitExceededEvent.c)
 */

__int64 WdipSemLoadScenarioTable()
{
  PSLIST_ENTRY v0; // rbx
  ULONGLONG v1; // r12
  int v2; // edi
  ULONG v3; // r15d
  NTSTATUS v4; // eax
  bool v5; // r14
  ULONG v6; // esi
  PSLIST_ENTRY v7; // rax
  int NextScenario; // eax
  unsigned int v9; // edi
  unsigned int v10; // edi
  unsigned int v12; // r10d
  unsigned int v13; // r8d
  __int64 v14; // rdx
  __int64 v15; // rcx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE v17; // [rsp+40h] [rbp-C8h]
  HANDLE Handle; // [rsp+48h] [rbp-C0h]
  int v19; // [rsp+50h] [rbp-B8h] BYREF
  int v20; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v21; // [rsp+58h] [rbp-B0h] BYREF
  HANDLE KeyHandle; // [rsp+60h] [rbp-A8h]
  HANDLE v23; // [rsp+68h] [rbp-A0h]
  UNICODE_STRING v24; // [rsp+70h] [rbp-98h] BYREF
  _OSVERSIONINFOEXW VersionInfo; // [rsp+88h] [rbp-80h] BYREF
  GUID Guid; // [rsp+1A8h] [rbp+A0h] BYREF
  _DWORD KeyInformation[38]; // [rsp+1B8h] [rbp+B0h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  v17 = 0LL;
  v23 = 0LL;
  v0 = 0LL;
  ResultLength[0] = 0;
  v19 = 0;
  v20 = 0;
  v24 = 0LL;
  Guid = 0LL;
  memset(&VersionInfo, 0, sizeof(VersionInfo));
  v1 = 0LL;
  v2 = WdipSemOpenRegistryKey(L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\Control\\WDI\\Scenarios");
  if ( v2 >= 0 )
  {
    v3 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          while ( 1 )
          {
            do
            {
              do
              {
LABEL_3:
                if ( Handle )
                {
                  ZwClose(Handle);
                  Handle = 0LL;
                }
                if ( v17 )
                {
                  ZwClose(v17);
                  v17 = 0LL;
                }
                if ( v23 )
                {
                  ZwClose(v23);
                  v23 = 0LL;
                }
                memset(KeyInformation, 0, sizeof(KeyInformation));
                v4 = ZwEnumerateKey(KeyHandle, v3++, KeyBasicInformation, KeyInformation, 0x96u, ResultLength);
                if ( v4 == -2147483622 )
                {
                  v2 = 0;
                  WdipSemEnableAllProviders();
                  goto LABEL_36;
                }
              }
              while ( v4 < 0 );
              if ( KeyInformation[3] >= 0x80u )
              {
                v2 = -2147483643;
                goto LABEL_36;
              }
              *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
              RtlInitUnicodeString(&v24, (PCWSTR)&KeyInformation[4]);
            }
            while ( RtlGUIDFromString(&v24, &Guid) < 0 );
            if ( !WdipSemDisabledScenarioTable )
              break;
            v12 = *((_DWORD *)WdipSemDisabledScenarioTable + 256);
            v13 = 0;
            if ( !v12 )
              break;
            while ( 1 )
            {
              v14 = 16LL * v13;
              v15 = *(_QWORD *)&Guid.Data1 - *(_QWORD *)((char *)WdipSemDisabledScenarioTable + v14);
              if ( *(_QWORD *)&Guid.Data1 == *(_QWORD *)((char *)WdipSemDisabledScenarioTable + v14) )
                v15 = *(_QWORD *)Guid.Data4 - *(_QWORD *)((char *)WdipSemDisabledScenarioTable + v14 + 8);
              if ( !v15 )
                break;
              if ( ++v13 >= v12 )
                goto LABEL_14;
            }
          }
LABEL_14:
          ;
        }
        while ( (int)WdipSemOpenRegistryKey((PCWSTR)&KeyInformation[4]) < 0 );
        LODWORD(v21) = 1;
        v5 = 1;
        if ( (int)WdipSemOpenRegistryKey(L"Config") >= 0 )
          break;
LABEL_16:
        if ( (int)WdipSemOpenRegistryKey(L"Instrumentation") >= 0 )
        {
          v6 = 0;
          while ( 1 )
          {
            while ( 1 )
            {
              if ( v0 )
                WdipSemFreeScenario(v0);
              v7 = WdipSemFastAllocate(1, 0x4A0u);
              v0 = v7;
              if ( !v7 )
              {
                v2 = -1073741670;
                goto LABEL_36;
              }
              memset(v7, 0, 0x4A0uLL);
              *((_BYTE *)&v0[73].Next + 8) = v5;
              NextScenario = WdipSemLoadNextScenario(v23, v6++, (GUID *)v0);
              v9 = NextScenario;
              if ( NextScenario == -2147483622 )
                goto LABEL_3;
              if ( NextScenario >= 0 )
                break;
              if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_INIT_MISCONFIG) )
                WdipSemWriteMisconfigEvent(v0, LOWORD(v0[1].Next), v9);
            }
            if ( (unsigned int)dword_140C1A560 >= 0x40 )
              break;
            v10 = dword_140C1C9A0;
            if ( (int)WdipSemUpdateProviderTableWithScenario(v0) < 0
              || HIDWORD(v0[3].Next) && (int)WdipSemAddScenarioToTable(v0) < 0 )
            {
              WdipSemRollBackProviderTable(v10);
            }
            else
            {
              WdipSemUpdateProviderEntriesForScenario(v0);
              if ( HIDWORD(v0[3].Next) )
                v0 = 0LL;
            }
          }
          if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_INIT_SCENARIO_MAX) )
            WdipSemWriteScenarioLimitExceededEvent(&WDI_SEM_EVENT_INIT_SCENARIO_MAX, v0, LOWORD(v0[1].Next));
        }
      }
      if ( (int)WdipSemQueryValueFromRegistry(v17, &v19, (__int64)ResultLength) < 0 || v19 )
      {
        if ( (int)WdipSemQueryValueFromRegistry(v17, &v20, (__int64)ResultLength) < 0
          || (v20 & 1) == 0
          || (memset(&VersionInfo, 0, sizeof(VersionInfo)),
              VersionInfo.wSuiteMask = 16,
              v1 = VerSetConditionMask(v1, 0x40u, 6u),
              RtlVerifyVersionInfo(&VersionInfo, 0x40u, v1) < 0) )
        {
          if ( (int)WdipSemQueryValueFromRegistry(v17, &v21, (__int64)ResultLength) >= 0 )
            v5 = (_DWORD)v21 != 0;
          goto LABEL_16;
        }
      }
    }
  }
LABEL_36:
  if ( KeyHandle )
  {
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
  }
  if ( Handle )
  {
    ZwClose(Handle);
    Handle = 0LL;
  }
  if ( v17 )
  {
    ZwClose(v17);
    v17 = 0LL;
  }
  if ( v23 )
    ZwClose(v23);
  if ( v0 )
    WdipSemFreeScenario(v0);
  return (unsigned int)v2;
}
