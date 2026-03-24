/*
 * XREFs of PspLockJobAssignment @ 0x140616484
 * Callers:
 *     PspLockJobChain @ 0x1406166A0 (PspLockJobChain.c)
 *     PspGetJobLockHierarchyForDeletion @ 0x14065C9F8 (PspGetJobLockHierarchyForDeletion.c)
 *     PspAssignProcessToJob @ 0x14071E800 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobAssignment(__int64 a1)
{
  if ( a1 )
    --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobAssignmentLock, 0LL);
}
