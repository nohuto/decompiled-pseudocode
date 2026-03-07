_QWORD *__fastcall NtUserGetWOWClass(__int64 a1, ULONG64 a2, __int64 a3)
{
  ULONG64 v3; // rbx
  __int64 v5; // rcx
  struct tagTHREADINFO *v6; // rdi
  int v7; // ecx
  size_t *v8; // rdx
  ULONG64 v9; // r8
  _QWORD *WOWClass; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rbx

  v3 = a2;
  EnterSharedCrit(a1, a2, a3);
  v6 = PtiCurrentShared(v5);
  if ( v3 >= MmUserProbeAddress )
    v3 = MmUserProbeAddress;
  v7 = *(_DWORD *)v3;
  v8 = *(size_t **)(v3 + 8);
  if ( ((unsigned __int8)v8 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = (ULONG64)v8 + (unsigned __int16)v7 + 2;
  if ( v9 <= (unsigned __int64)v8 || v9 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v7 > (unsigned __int16)HIWORD(*(_DWORD *)v3) )
  {
    if ( (v7 & 1) == 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( (v7 & 1) != 0 )
  {
LABEL_12:
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2860);
LABEL_13:
    ExRaiseAccessViolation();
  }
  WOWClass = GetWOWClass(a1, v8);
  v12 = WOWClass;
  if ( WOWClass )
    v12 = (_QWORD *)(WOWClass[1] - *((_QWORD *)v6 + 59));
  UserSessionSwitchLeaveCrit(v11);
  return v12;
}
