/*
 * XREFs of NtUserClearForeground @ 0x1C01CD7F0
 * Callers:
 *     <none>
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C002731C (IAMThreadAccessGranted.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 */

__int64 NtUserClearForeground()
{
  __int64 v0; // rbx
  int v1; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v10; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v10);
  v0 = 0LL;
  if ( *(_QWORD *)(gptiCurrent + 456LL) == grpdeskRitInput || (LOBYTE(v1) = IAMThreadAccessGranted(gptiCurrent), !v1) )
  {
    UserSetLastError(5);
  }
  else
  {
    if ( v4 )
      HMAssignmentUnlock(v4 + 88);
    v0 = 1LL;
  }
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v10, v2, v3);
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v0;
}
