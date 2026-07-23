/*
 * XREFs of WdipSemLoadNextScenario @ 0x140799F84
 * Callers:
 *     WdipSemLoadScenarioTable @ 0x140799B78 (WdipSemLoadScenarioTable.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     EtwEventEnabled @ 0x1402C0830 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwEnumerateKey @ 0x1403FABC0 (ZwEnumerateKey.c)
 *     memset @ 0x140414300 (memset.c)
 *     __report_rangecheckfailure @ 0x1404B66AC (__report_rangecheckfailure.c)
 *     RtlUnicodeStringToInteger @ 0x1405DE4B0 (RtlUnicodeStringToInteger.c)
 *     RtlGUIDFromString @ 0x140639680 (RtlGUIDFromString.c)
 *     WdipSemFastFree @ 0x140788B54 (WdipSemFastFree.c)
 *     WdipSemFastAllocate @ 0x140788B80 (WdipSemFastAllocate.c)
 *     WdipSemLoadNextEndEvent @ 0x1407995F4 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextContextProvider @ 0x1407998F8 (WdipSemLoadNextContextProvider.c)
 *     WdipSemQueryValueFromRegistry @ 0x14079A464 (WdipSemQueryValueFromRegistry.c)
 *     WdipSemOpenRegistryKey @ 0x14079A574 (WdipSemOpenRegistryKey.c)
 *     WdipSemWriteScenarioLimitExceededEvent @ 0x140930888 (WdipSemWriteScenarioLimitExceededEvent.c)
 */

__int64 __fastcall WdipSemLoadNextScenario(HANDLE KeyHandle, ULONG Index, GUID *Guid)
{
  PSLIST_ENTRY v6; // rsi
  char v7; // r14
  NTSTATUS v8; // ebx
  unsigned int v9; // edx
  __int64 v10; // rax
  WCHAR v11; // cx
  __int64 v12; // rdx
  int v13; // r8d
  WCHAR *v14; // r9
  WCHAR v15; // cx
  int v16; // eax
  char v17; // cl
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  ULONG v22; // r15d
  PSLIST_ENTRY v23; // rax
  int NextEndEvent; // eax
  ULONG v25; // r14d
  int NextContextProvider; // eax
  __int64 Data1; // rax
  __int64 v28; // rax
  const EVENT_DESCRIPTOR *v29; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h]
  ULONG Value; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+44h] [rbp-BCh] BYREF
  int v34; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v35; // [rsp+50h] [rbp-B0h]
  HANDLE KeyHandlea; // [rsp+58h] [rbp-A8h]
  __int64 v37; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  _DWORD KeyInformation[38]; // [rsp+78h] [rbp-88h] BYREF
  WCHAR SourceString[64]; // [rsp+110h] [rbp+10h] BYREF
  WCHAR v41[64]; // [rsp+190h] [rbp+90h] BYREF

  Handle = 0LL;
  v35 = 0LL;
  KeyHandlea = 0LL;
  ResultLength = 0;
  v6 = 0LL;
  Value = 0;
  v33 = 0;
  v34 = 0;
  v37 = 0LL;
  v7 = 0;
  DestinationString = 0LL;
  if ( !KeyHandle || !Guid )
    return (unsigned int)-1073741811;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v8 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, KeyInformation, 0x96u, &ResultLength);
  if ( v8 >= 0 )
  {
    if ( KeyInformation[3] >= 0x80u )
    {
      v8 = -2147483643;
      goto LABEL_36;
    }
    *((_WORD *)&KeyInformation[4] + ((unsigned __int64)KeyInformation[3] >> 1)) = 0;
    memset(SourceString, 0, sizeof(SourceString));
    memset(v41, 0, sizeof(v41));
    v9 = 0;
    v10 = 0LL;
    while ( 1 )
    {
      v11 = *(_WORD *)((char *)&KeyInformation[4] + v10 * 2);
      if ( v11 == 59 )
        break;
      SourceString[v10] = v11;
      ++v9;
      ++v10;
      if ( v9 >= 0x40 )
        goto LABEL_11;
    }
    if ( 2 * (unsigned __int64)v9 >= 0x80 )
      _report_rangecheckfailure();
    SourceString[v9] = 0;
LABEL_11:
    if ( v9 >= 0x40 )
      goto LABEL_71;
    v12 = v9 + 1;
    v13 = 0;
    if ( (unsigned int)v12 >= 0x40 )
      goto LABEL_71;
    v14 = (WCHAR *)&KeyInformation[4] + v12;
    do
    {
      v15 = *v14;
      v41[v13] = *v14;
      if ( !v15 )
        break;
      LODWORD(v12) = v12 + 1;
      ++v14;
      ++v13;
    }
    while ( (unsigned int)v12 < 0x40 );
    if ( (unsigned int)v12 >= 0x40 )
      goto LABEL_71;
    if ( v13 == 1 && v41[0] == 42 )
      v7 = 1;
    RtlInitUnicodeString(&DestinationString, SourceString);
    v8 = RtlGUIDFromString(&DestinationString, Guid);
    if ( v8 < 0 )
      goto LABEL_36;
    if ( !v7 )
    {
      RtlInitUnicodeString(&DestinationString, v41);
      v8 = RtlUnicodeStringToInteger(&DestinationString, 0xAu, &Value);
      if ( v8 < 0 )
        goto LABEL_36;
      LOWORD(Guid[1].Data1) = Value;
    }
    v8 = WdipSemOpenRegistryKey((PCWSTR)&KeyInformation[4]);
    if ( v8 >= 0 )
    {
      v16 = WdipSemQueryValueFromRegistry(Handle, &v33, (__int64)&ResultLength);
      v8 = v16;
      if ( v16 < 0 )
      {
        if ( v16 != -1073741772 )
          goto LABEL_36;
        BYTE2(Guid[1].Data1) = -1;
      }
      else
      {
        v17 = v33;
        if ( !v33 )
          v17 = -1;
        BYTE2(Guid[1].Data1) = v17;
      }
      v18 = WdipSemQueryValueFromRegistry(Handle, &v37, (__int64)&ResultLength);
      v8 = v18;
      if ( v18 < 0 )
      {
        if ( v18 != -1073741772 )
          goto LABEL_36;
        *(_QWORD *)Guid[1].Data4 = -1LL;
      }
      else
      {
        v19 = v37;
        if ( !v37 )
          v19 = -1LL;
        *(_QWORD *)Guid[1].Data4 = v19;
      }
      v20 = WdipSemQueryValueFromRegistry(Handle, &v34, (__int64)&ResultLength);
      v8 = v20;
      if ( v20 >= 0 )
      {
        *(_DWORD *)&Guid[2].Data2 = v34;
        goto LABEL_34;
      }
      if ( v20 == -1073741772 )
      {
        *(_DWORD *)&Guid[2].Data2 = 0;
LABEL_34:
        if ( (int)WdipSemOpenRegistryKey(L"EndEvents") < 0 )
        {
LABEL_35:
          v8 = 0;
          goto LABEL_36;
        }
        v22 = 0;
        while ( 1 )
        {
          v23 = WdipSemFastAllocate(0, 0x30u);
          v6 = v23;
          if ( !v23 )
            goto LABEL_78;
          *v23 = 0LL;
          v23[1] = 0LL;
          v23[2] = 0LL;
          NextEndEvent = WdipSemLoadNextEndEvent(KeyHandlea, v22++, (GUID *)v23);
          v8 = NextEndEvent;
          if ( NextEndEvent == -2147483622 )
            break;
          if ( NextEndEvent < 0 )
            goto LABEL_36;
          v28 = *(unsigned int *)&Guid[3].Data2;
          if ( (unsigned int)v28 >= 0x10 )
          {
            if ( EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_INIT_SCENARIO_END_EVENT_MAX) )
            {
              v29 = &WDI_SEM_EVENT_INIT_SCENARIO_END_EVENT_MAX;
LABEL_70:
              WdipSemWriteScenarioLimitExceededEvent(v29, Guid, LOWORD(Guid[1].Data1));
            }
            goto LABEL_71;
          }
          *(_QWORD *)&Guid[65].Data4[8 * v28] = v6;
          ++*(_DWORD *)&Guid[3].Data2;
        }
        if ( !*(_DWORD *)&Guid[3].Data2 )
          goto LABEL_35;
        if ( !v7 )
        {
          if ( (int)WdipSemOpenRegistryKey(L"ContextProviders") < 0 )
            goto LABEL_35;
          v25 = 0;
          while ( 1 )
          {
            if ( !v6 )
            {
              v6 = WdipSemFastAllocate(0, 0x30u);
              if ( !v6 )
                break;
            }
            *v6 = 0LL;
            v6[1] = 0LL;
            v6[2] = 0LL;
            NextContextProvider = WdipSemLoadNextContextProvider(v35, v25++, (GUID *)v6);
            v8 = NextContextProvider;
            if ( NextContextProvider == -2147483622 )
              goto LABEL_35;
            if ( NextContextProvider < 0 )
              goto LABEL_36;
            Data1 = Guid[3].Data1;
            if ( (unsigned int)Data1 >= 0x7C )
            {
              if ( !EtwEventEnabled(WdipSemRegHandle, &WDI_SEM_EVENT_INIT_SCENARIO_CONTEXT_PROVIDER_MAX) )
                goto LABEL_71;
              v29 = &WDI_SEM_EVENT_INIT_SCENARIO_CONTEXT_PROVIDER_MAX;
              goto LABEL_70;
            }
            *(_QWORD *)&Guid[3].Data4[8 * Data1] = v6;
            v6 = 0LL;
            ++Guid[3].Data1;
          }
LABEL_78:
          v8 = -1073741670;
          goto LABEL_36;
        }
LABEL_71:
        v8 = -1073741823;
      }
    }
  }
LABEL_36:
  if ( Handle )
    ZwClose(Handle);
  if ( v35 )
    ZwClose(v35);
  if ( KeyHandlea )
    ZwClose(KeyHandlea);
  if ( v6 )
    WdipSemFastFree(0, v6);
  return (unsigned int)v8;
}
