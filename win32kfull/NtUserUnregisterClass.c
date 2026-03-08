/*
 * XREFs of NtUserUnregisterClass @ 0x1C0040C10
 * Callers:
 *     <none>
 * Callees:
 *     _UnregisterClass @ 0x1C0040D80 (_UnregisterClass.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserUnregisterClass(ULONG64 a1, __int64 a2, ULONG64 a3)
{
  int v6; // ecx
  ULONG64 v7; // r9
  ULONG64 v8; // rdx
  ULONG64 v9; // rcx
  int v10; // ebx
  __int128 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+60h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a1 >= MmUserProbeAddress )
    a1 = MmUserProbeAddress;
  v6 = *(_DWORD *)a1;
  v7 = *(_QWORD *)(a1 + 8);
  if ( (v7 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (v7 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = (unsigned __int16)v6 + v7 + 2;
    if ( v8 <= v7 || v8 >= MmUserProbeAddress )
      ExRaiseAccessViolation();
    if ( (unsigned __int16)v6 > (unsigned __int16)HIWORD(*(_DWORD *)a1) || (v6 & 1) != 0 )
    {
      if ( (v6 & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 10481LL);
      ExRaiseAccessViolation();
    }
  }
  v10 = UnregisterClass(v7, a2, &v12);
  if ( v10 )
  {
    v9 = MmUserProbeAddress;
    if ( a3 >= MmUserProbeAddress )
      a3 = MmUserProbeAddress;
    *(_OWORD *)a3 = v12;
    *(_QWORD *)(a3 + 16) = v13;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v10;
}
