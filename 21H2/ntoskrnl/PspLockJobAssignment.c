/*
 * XREFs of PspLockJobAssignment @ 0x14067FC84
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x1405D9E28 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobChain @ 0x14067FEA0 (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x1406F5FF0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
