/*
 * XREFs of NtUserClearForeground @ 0x1C01F1D70
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 NtUserClearForeground()
{
  __int64 v0; // rdx
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v5);
  v1 = 0LL;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput || !IAMThreadAccessGranted(gptiCurrent) )
  {
    UserSetLastError(5LL, v0);
  }
  else
  {
    if ( v2 )
      HMAssignmentUnlock(v2 + 88);
    v1 = 1LL;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v5, v0, v2);
  UserSessionSwitchLeaveCrit(v3);
  return v1;
}
