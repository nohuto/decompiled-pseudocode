__int64 __fastcall DpiPersistence::ReadDpiFromRegistry(
        struct _LUID *this,
        const struct _LUID *a2,
        int a3,
        struct _UNICODE_STRING *a4)
{
  DXGSESSIONDATA *v5; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  DXGSESSIONMGR *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int CurrentProcessSessionId; // eax
  DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  DXGSESSIONDATA *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  const WCHAR *v24; // rdx
  int v25; // eax
  HANDLE v26; // r8
  int v27; // eax
  struct _UNICODE_STRING *UserRegistryPath; // rax
  HANDLE v30; // r8
  int v31; // eax
  HANDLE v32; // rdx
  int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // eax
  const struct _UNICODE_STRING *v40; // r9
  unsigned int *v41; // [rsp+20h] [rbp-B9h]
  unsigned int v42; // [rsp+28h] [rbp-B1h]
  HANDLE KeyHandle; // [rsp+50h] [rbp-89h] BYREF
  HANDLE v44; // [rsp+58h] [rbp-81h] BYREF
  struct _UNICODE_STRING v45; // [rsp+60h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-69h] BYREF
  struct _UNICODE_STRING v47; // [rsp+80h] [rbp-59h] BYREF
  __int64 v48; // [rsp+90h] [rbp-49h] BYREF
  int v49; // [rsp+98h] [rbp-41h]
  const WCHAR *v50; // [rsp+A0h] [rbp-39h]
  struct _UNICODE_STRING *v51; // [rsp+A8h] [rbp-31h]
  int v52; // [rsp+B0h] [rbp-29h]
  int *v53; // [rsp+B8h] [rbp-21h]
  int v54; // [rsp+C0h] [rbp-19h]
  __int64 v55; // [rsp+C8h] [rbp-11h]
  int v56; // [rsp+D0h] [rbp-9h]
  __int128 v57; // [rsp+D8h] [rbp-1h]
  __int128 v58; // [rsp+E8h] [rbp+Fh]
  __int64 v59; // [rsp+F8h] [rbp+1Fh]
  int v60; // [rsp+150h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+158h] [rbp+7Fh] BYREF

  v60 = 0;
  *(_DWORD *)&a4->Length = 0;
  Handle = 0LL;
  v47 = 0LL;
  KeyHandle = 0LL;
  v5 = 0LL;
  v44 = 0LL;
  DestinationString = 0LL;
  v45 = 0LL;
  LODWORD(v7) = DpiPersistence::AllocateMonitorSetIdFromAdapterSource(this, a2, (unsigned int)&v47, a4);
  if ( (int)v7 < 0 )
    goto LABEL_14;
  v10 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 118);
  if ( !v10 )
  {
    v5 = 0LL;
    goto LABEL_38;
  }
  CurrentProcessSessionId = PsGetCurrentProcessSessionId(v9, v8, v11, v12);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, CurrentProcessSessionId);
  v15 = SessionDataForSpecifiedSession;
  v5 = SessionDataForSpecifiedSession;
  if ( !SessionDataForSpecifiedSession )
  {
LABEL_38:
    v34 = PsGetCurrentProcessSessionId(v9, v8, v11, v12);
    LODWORD(v7) = -1073741811;
    WdLogSingleEntry2(2LL, v34, -1073741811LL);
    v39 = PsGetCurrentProcessSessionId(v36, v35, v37, v38);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Current session does not have session data in session 0x%I64x, returning 0x%I64x.",
      v39,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_16;
  }
  if ( DXGSESSIONDATA::GetUserRegistryPath(SessionDataForSpecifiedSession, 0)->Buffer )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v17, v16, v18, v19) + 24) = 863LL;
    UserRegistryPath = DXGSESSIONDATA::GetUserRegistryPath(v15, 0);
    v24 = L"Control Panel\\Desktop\\PerMonitorSettings\\";
    DestinationString = *UserRegistryPath;
  }
  else
  {
    if ( DXGSESSIONDATA::GetUserRegistryPath(v5, 0)->Length )
    {
      WdLogSingleEntry1(1LL, 854LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pDxgSessionData->GetUserRegistryPath()->Length == 0",
        854LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = 855LL;
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    v24 = L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors";
  }
  RtlInitUnicodeString(&v45, v24);
  v25 = OpenRegistrySubkey(&Handle, 0xF003Fu, 0LL, &DestinationString, 0LL);
  v7 = v25;
  if ( v25 < 0 )
  {
    WdLogSingleEntry1(2LL, v25);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to open HKey root handle (Status = 0x%I64x)",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v26 = Handle;
    if ( !Handle )
    {
      WdLogSingleEntry1(1LL, 883LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"HKeyRootHandle", 883LL, 0LL, 0LL, 0LL, 0LL);
      v26 = Handle;
    }
    v27 = OpenRegistrySubkey(&KeyHandle, 0xF003Fu, v26, &v45, 0LL);
    v7 = v27;
    if ( v27 >= 0 )
    {
      v30 = KeyHandle;
      if ( !KeyHandle )
      {
        WdLogSingleEntry1(1LL, 899LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PerMonSettingsKeyHandle", 899LL, 0LL, 0LL, 0LL, 0LL);
        v30 = KeyHandle;
      }
      v31 = OpenRegistrySubkey(&v44, 0xF003Fu, v30, &v47, 0LL);
      v7 = v31;
      if ( v31 >= 0 )
      {
        v32 = v44;
        if ( !v44 )
        {
          WdLogSingleEntry1(1LL, 915LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MonitorIdKeyHandle", 915LL, 0LL, 0LL, 0LL, 0LL);
          v32 = v44;
        }
        v48 = 0LL;
        v49 = 288;
        v50 = L"DpiValue";
        v51 = a4;
        v53 = &v60;
        v52 = 67108868;
        v59 = 0LL;
        v54 = 4;
        v55 = 0LL;
        v56 = 0;
        v57 = 0LL;
        v58 = 0LL;
        v33 = RtlQueryRegistryValuesEx(0x40000000LL, v32, &v48, 0LL, 0LL);
        v7 = v33;
        v5 = v15;
        if ( v33 < 0 )
        {
          WdLogSingleEntry1(2LL, v33);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Unable to read registry values. (Status = 0x%I64x, SubKeyHandle2 = 0x%I64x, QueryTable = 0x%I64x)",
            v7,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        goto LABEL_14;
      }
    }
    WdLogSingleEntry1(4LL, v7);
  }
  v5 = v15;
LABEL_14:
  if ( (_DWORD)v7 == -1073741772 )
  {
    LODWORD(v7) = 0;
    *(_DWORD *)&a4->Length = v60;
  }
LABEL_16:
  if ( a3 && (int)v7 >= 0 && v5 && DXGSESSIONDATA::GetUserRegistryPath(v5, 0)->Buffer )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System");
    RtlInitUnicodeString(&v45, L"CurrentControlSet\\Control\\GraphicsDrivers\\ScaleFactors");
    LODWORD(v41) = *(_DWORD *)&a4->Length;
    DpiPersistence::WriteDwordToParticularRegValue(
      &DestinationString,
      &v45,
      &v47,
      v40,
      (const unsigned __int16 *const)v41,
      v42);
  }
  operator delete(v47.Buffer);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v44 )
    ZwClose(v44);
  return (unsigned int)v7;
}
