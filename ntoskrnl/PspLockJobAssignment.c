/*
 * XREFs of PspLockJobAssignment @ 0x140700924
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x1406F6DC0 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobChain @ 0x1406F9018 (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x1406FFA20 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
