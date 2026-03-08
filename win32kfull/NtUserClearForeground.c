/*
 * XREFs of NtUserClearForeground @ 0x1C01CE840
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     IAMThreadAccessGranted @ 0x1C009A2DC (IAMThreadAccessGranted.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

__int64 NtUserClearForeground()
{
  __int64 v0; // rbx
  int v1; // eax
  __int64 v2; // r9
  __int64 v3; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v5);
  v0 = 0LL;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput || (LOBYTE(v1) = IAMThreadAccessGranted(gptiCurrent), !v1) )
  {
    UserSetLastError(5);
  }
  else
  {
    if ( v2 )
      HMAssignmentUnlock(v2 + 88);
    v0 = 1LL;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v5);
  UserSessionSwitchLeaveCrit(v3);
  return v0;
}
