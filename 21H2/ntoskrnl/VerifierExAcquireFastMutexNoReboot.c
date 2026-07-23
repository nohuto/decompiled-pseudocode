/*
 * XREFs of VerifierExAcquireFastMutexNoReboot @ 0x1409E57C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfKeIrqlTransitionReserveLogEntry @ 0x1409DCE50 (VfKeIrqlTransitionReserveLogEntry.c)
 *     ViKeIrqlLogCommon @ 0x1409DD0CC (ViKeIrqlLogCommon.c)
 *     ViExCheckAPCLevelOrBelow @ 0x1409E5D84 (ViExCheckAPCLevelOrBelow.c)
 */

void __fastcall VerifierExAcquireFastMutexNoReboot(__int64 a1)
{
  char CurrentIrql; // bl
  char *v3; // rax

  if ( (MmVerifierData & 0x800) != 0 )
    CurrentIrql = ViExCheckAPCLevelOrBelow(a1, a1, 0LL);
  else
    CurrentIrql = KeGetCurrentIrql();
  ((void (__fastcall *)(__int64))pXdvExAcquireFastMutex)(a1);
  if ( (MmVerifierData & 0x400000) == 0 || (VfFlightOptions & 9) != 0 )
  {
    v3 = VfKeIrqlTransitionReserveLogEntry(CurrentIrql, 1);
    ViKeIrqlLogCommon((__int64)v3, 2u);
  }
}
