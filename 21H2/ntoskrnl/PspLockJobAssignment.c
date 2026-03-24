/*
 * XREFs of PspLockJobAssignment @ 0x140616024
 * Callers:
 *     PspLockJobChain @ 0x140616240 (PspLockJobChain.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14067F388 (PspGetJobLockHierarchyForDeletion.c)
 *     PspAssignProcessToJob @ 0x14071F430 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
