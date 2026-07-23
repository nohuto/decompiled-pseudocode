/*
 * XREFs of VerifierExAcquireFastMutex @ 0x1409E5710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1409DCE50 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x1409DD0CC (ViKeIrqlLogCommon.c)
 *     VfDeadlockAcquireResource @ 0x1409DE5C8 (VfDeadlockAcquireResource.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1409E5D84 (ViExCheckAPCLevelOrBelow.c)
 */

PVOID __fastcall VerifierExAcquireFastMutex(ULONG_PTR a1)
{
  char CurrentIrql; // di
  char *v3; // rax
  PVOID retaddr; // [rsp+38h] [rbp+0h]

  if ( (MmVerifierData & 0x800) != 0 )
    CurrentIrql = ViExCheckAPCLevelOrBelow(a1, a1, ((unsigned int)MmVerifierData >> 17) & 1);
  else
    CurrentIrql = KeGetCurrentIrql();
  ((void (__fastcall *)(ULONG_PTR))pXdvExAcquireFastMutex)(a1);
  if ( (MmVerifierData & 0x400000) == 0 || (VfFlightOptions & 9) != 0 )
  {
    v3 = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, 1);
    ViKeIrqlLogCommon((__int64)v3, 2u);
  }
  return VfDeadlockAcquireResource(a1, 3, (__int64)KeGetCurrentThread(), 0, retaddr);
}
