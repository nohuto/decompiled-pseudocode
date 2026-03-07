__int64 __fastcall NtUserSetClassLongPtr(__int64 a1, int a2, ULONG64 a3)
{
  __int64 v6; // rcx
  struct tagWND *v7; // rbx
  ULONG64 v8; // rdx
  ULONG64 v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // r8
  ULONG64 v13; // rdx
  ULONG64 v14; // rdx
  int v15; // ecx
  ULONG64 v16; // r8
  ULONG64 v17; // rdx
  int v18; // [rsp+20h] [rbp-98h]
  __int128 v19; // [rsp+38h] [rbp-80h]
  __int128 v20; // [rsp+70h] [rbp-48h] BYREF
  __int64 v21; // [rsp+80h] [rbp-38h]
  __int128 v22; // [rsp+98h] [rbp-20h]
  ULONG64 v23; // [rsp+A8h] [rbp-10h]

  v20 = 0LL;
  v21 = 0LL;
  EnterCrit(0LL, 0LL);
  v7 = (struct tagWND *)ValidateHwnd(a1);
  if ( !v7 )
  {
    v10 = 0LL;
    goto LABEL_6;
  }
  *(_QWORD *)&v20 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v20;
  *((_QWORD *)&v20 + 1) = v7;
  HMLockObject(v7);
  if ( a2 == -26 )
  {
    if ( (a3 & 0x10000) != 0 )
    {
      UserSetLastError(13);
      v10 = 0LL;
      goto LABEL_5;
    }
  }
  else if ( a2 == -8 )
  {
    v13 = a3;
    if ( a3 + 24 < a3 || a3 + 24 > MmUserProbeAddress )
      v13 = MmUserProbeAddress;
    v22 = *(_OWORD *)v13;
    v23 = *(_QWORD *)(v13 + 16);
    v19 = v22;
    v14 = v23;
    if ( v23 >= MmUserProbeAddress )
      v14 = MmUserProbeAddress;
    v15 = *(_DWORD *)v14;
    v18 = *(_DWORD *)v14;
    v16 = *(_QWORD *)(v14 + 8);
    if ( (v16 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      if ( (v16 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v17 = (unsigned __int16)v15 + v16 + 2;
      if ( v17 <= v16 || v17 >= MmUserProbeAddress )
        ExRaiseAccessViolation();
      if ( (unsigned __int16)v15 > HIWORD(v18) || (v15 & 1) != 0 )
      {
        if ( (v15 & 1) != 0 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 2084LL);
        ExRaiseAccessViolation();
      }
    }
    v10 = xxxSetClassLongPtr(v7);
    v9 = MmUserProbeAddress;
    v8 = MmUserProbeAddress;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    *(_OWORD *)a3 = v19;
    *(_QWORD *)(a3 + 16) = 0LL;
    goto LABEL_5;
  }
  v10 = xxxSetClassLongPtr(v7);
LABEL_5:
  ThreadUnlock1(v9, v8, v11);
LABEL_6:
  UserSessionSwitchLeaveCrit(v6);
  return v10;
}
