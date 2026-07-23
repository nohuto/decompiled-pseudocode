/*
 * XREFs of BapdWriteEtwEvents @ 0x14039A928
 * Callers:
 *     BapdpProcessEtwEvents @ 0x1403AA358 (BapdpProcessEtwEvents.c)
 *     PopBootLoaderTraceProcess @ 0x14077A018 (PopBootLoaderTraceProcess.c)
 * Callees:
 *     EtwEventEnabled @ 0x14021BEF0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x14025D570 (EtwWriteEx.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     BapdpParseEventParts @ 0x14039AC6C (BapdpParseEventParts.c)
 *     BapdRegisterEtwProvider @ 0x14039AD14 (BapdRegisterEtwProvider.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     EtwUnregister @ 0x14075F9C0 (EtwUnregister.c)
 *     EtwSetInformation @ 0x14077EFF0 (EtwSetInformation.c)
 *     BapdpWriteEventDataToRegistry @ 0x1409994A4 (BapdpWriteEventDataToRegistry.c)
 */

__int64 __fastcall BapdWriteEtwEvents(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  GUID *v3; // r14
  REGHANDLE v4; // r15
  REGHANDLE v5; // rdi
  NTSTATUS v6; // r12d
  int v7; // eax
  int *v8; // r13
  __int64 v9; // rdx
  _QWORD *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  REGHANDLE v13; // r14
  __int64 v14; // rcx
  __int16 v15; // ax
  __int64 v16; // rcx
  const WCHAR *v18; // rdx
  __int64 v19; // rcx
  int v20; // eax
  char v21; // [rsp+48h] [rbp-49h]
  GUID *v22; // [rsp+50h] [rbp-41h]
  ULONG UserDataCount; // [rsp+58h] [rbp-39h] BYREF
  int Data; // [rsp+5Ch] [rbp-35h] BYREF
  REGHANDLE v25; // [rsp+60h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-29h] BYREF
  REGHANDLE v27; // [rsp+78h] [rbp-19h] BYREF
  REGHANDLE RegHandle; // [rsp+80h] [rbp-11h] BYREF
  unsigned __int64 v29; // [rsp+88h] [rbp-9h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-1h] BYREF

  UserDataCount = 0;
  v2 = a1;
  v29 = a1 + (unsigned int)a2;
  Data = 0;
  v3 = &NullGuid;
  RegHandle = 0LL;
  v27 = 0LL;
  v25 = 0LL;
  LOBYTE(a2) = 1;
  v22 = &NullGuid;
  DestinationString = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = BapdRegisterEtwProvider(&BOOTENV_ETW_PROVIDER, a2, &RegHandle);
  if ( v6 < 0 )
    goto LABEL_30;
  v21 = 0;
  v7 = BapdRegisterEtwProvider(&BOOT_PROVIDER_GUID, 0LL, &v27);
  v4 = v27;
  v6 = v7;
  if ( v7 < 0 )
    goto LABEL_30;
  while ( v2 < v29 )
  {
    if ( *(_DWORD *)(v2 + 8) != 6 )
      goto LABEL_19;
    v8 = (int *)(v2 + 68);
    BapdpParseEventParts(v2 + 48, v2 + 68, *(_DWORD *)(v2 + 64), (unsigned int)&UserData, (__int64)&UserDataCount);
    v10 = (_QWORD *)(v2 + 32);
    v11 = *(_QWORD *)(v2 + 32);
    v12 = BOOTENV_ETW_PROVIDER - v11;
    if ( BOOTENV_ETW_PROVIDER == v11 )
      v12 = 0x1E535E959809A5BBLL - *(_QWORD *)(v2 + 40);
    if ( v12 )
    {
      v16 = BOOT_PROVIDER_GUID - v11;
      if ( BOOT_PROVIDER_GUID == v11 )
        v16 = 0x6B3FAED6A2C303F9LL - *(_QWORD *)(v2 + 40);
      if ( v16 )
      {
        v19 = *(_QWORD *)&v3->Data1 - v11;
        if ( *(_QWORD *)&v3->Data1 == v11 )
          v19 = *(_QWORD *)v3->Data4 - *(_QWORD *)(v2 + 40);
        if ( v19 )
        {
          if ( v5 )
          {
            EtwUnregister(v5);
            v25 = 0LL;
          }
          LOBYTE(v9) = *(_BYTE *)(v2 + 51) != 11;
          v20 = BapdRegisterEtwProvider(v2 + 32, v9, &v25);
          v5 = v25;
          v6 = v20;
          if ( v20 < 0 )
            goto LABEL_30;
          v13 = v25;
          v22 = (GUID *)(v2 + 32);
          if ( *(_BYTE *)(v2 + 51) == 11 )
            EtwSetInformation(v25, EventProviderSetTraits, (PVOID)UserData.Ptr, UserData.Size);
        }
        else
        {
          v13 = v5;
        }
      }
      else
      {
        v13 = v4;
        if ( !v21 && *(_BYTE *)(v2 + 51) == 11 )
        {
          EtwSetInformation(v4, EventProviderSetTraits, (PVOID)UserData.Ptr, UserData.Size);
          v21 = 1;
        }
      }
    }
    else
    {
      v13 = RegHandle;
    }
    if ( EtwEventEnabled(v13, (PCEVENT_DESCRIPTOR)(v2 + 48)) )
    {
      v6 = EtwWriteEx(
             v13,
             (PCEVENT_DESCRIPTOR)(v2 + 48),
             0LL,
             0,
             (LPCGUID)((v2 + 16) & -(__int64)(*(_BYTE *)(v2 + 15) != 0)),
             0LL,
             UserDataCount,
             &UserData);
      if ( v6 < 0 )
        goto LABEL_30;
    }
    v14 = BOOTENV_ETW_PROVIDER - *v10;
    if ( BOOTENV_ETW_PROVIDER == *v10 )
      v14 = 0x1E535E959809A5BBLL - *(_QWORD *)(v2 + 40);
    if ( !v14 )
    {
      v15 = *(_WORD *)(v2 + 48);
      switch ( v15 )
      {
        case 11:
          v18 = L"POSTTime";
          goto LABEL_38;
        case 20:
          if ( !*v8 )
            ZwUpdateWnfStateData(&WNF_BOOT_DIRTY_SHUTDOWN, 0LL, 0, 0LL, 0LL, 0, 0);
          break;
        case 16:
        case 29:
          ExBootAppFailureStatus = *v8;
          break;
        case 32:
          v18 = L"BootmgrUserInputTime";
LABEL_38:
          RtlInitUnicodeString(&DestinationString, v18);
          BapdpWriteEventDataToRegistry((PVOID)(v2 + 68));
          break;
      }
    }
    v3 = v22;
LABEL_19:
    v2 = (*(unsigned int *)(v2 + 4) + v2 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  }
  if ( (qword_140C197B8 & 4) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"BootmgrUserInputTime");
    BapdpWriteEventDataToRegistry(&Data);
    RtlInitUnicodeString(&DestinationString, L"POSTTime");
    BapdpWriteEventDataToRegistry(&Data);
  }
LABEL_30:
  if ( RegHandle )
    EtwUnregister(RegHandle);
  if ( v4 )
    EtwUnregister(v4);
  if ( v5 )
    EtwUnregister(v5);
  return (unsigned int)v6;
}
