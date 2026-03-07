__int64 __fastcall NtUserSetWinEventHook(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  __int64 v12; // rbx
  unsigned __int64 v13; // r9
  __int64 *v14; // rdi
  __int64 v15; // rcx
  int v17; // ecx
  ULONG64 v18; // rdx
  _BYTE v19[4]; // [rsp+44h] [rbp-A4h] BYREF
  int v20; // [rsp+48h] [rbp-A0h]
  __int64 v21; // [rsp+50h] [rbp-98h]
  unsigned __int64 v22; // [rsp+58h] [rbp-90h]
  int v23; // [rsp+68h] [rbp-80h]
  unsigned __int64 v24; // [rsp+70h] [rbp-78h]
  _BYTE v25[48]; // [rsp+78h] [rbp-70h] BYREF

  v21 = a5;
  EnterLeaveCritByVelocity::EnterLeaveCritByVelocity(v19, 6LL);
  if ( (a8 & 0xFFFFFFF0) != 0 )
  {
    UserSetLastError(1004LL);
    v12 = 0LL;
    goto LABEL_6;
  }
  DomainShared<>::DomainExclusive<DLT_WINEVENT>::ObjectLock<>::ObjectLock<>(v25);
  v12 = 0LL;
  v13 = 0LL;
  if ( (a8 & 4) != 0 && a3 && a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v17 = *(_DWORD *)a4;
    v20 = v17;
    v23 = v17;
    v13 = *(_QWORD *)(a4 + 8);
    v24 = v13;
    if ( (v13 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v18 = (unsigned __int16)v17 + v13 + 2;
    if ( v18 <= v13 || v18 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v17 > HIWORD(v20) )
    {
      if ( (v17 & 1) == 0 )
        goto LABEL_20;
    }
    else if ( (v17 & 1) == 0 )
    {
      v22 = v13;
      goto LABEL_3;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3460LL);
LABEL_20:
    ExRaiseAccessViolation();
  }
LABEL_3:
  v14 = (__int64 *)SetWinEventHook(a1, a2, a3, v13, v21, (int)a6, a7, a8);
  DomainShared<>::DomainExclusive<DLT_HANDLEMANAGER>::ObjectLock<>::~ObjectLock<>(v25);
  if ( v14 )
    v12 = *v14;
  EtwTraceAuditApiSetWinEventHook(a1, a2, a6, a7, a8, v12);
LABEL_6:
  UserSessionSwitchLeaveCrit(v15);
  return v12;
}
