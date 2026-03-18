/*
 * XREFs of PspLockJobAssignment @ 0x140682D58
 * Callers:
 *     PspGetJobLockHierarchyForDeletion @ 0x1406789B0 (PspGetJobLockHierarchyForDeletion.c)
 *     PspLockJobChain @ 0x140682C34 (PspLockJobChain.c)
 *     PspAssignProcessToJob @ 0x1406879B8 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
