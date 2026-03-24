/*
 * XREFs of VerifierExAcquireFastMutexUnsafeNoReboot @ 0x1409E4890
 * Callers:
 *     VerifierExAcquireFastMutexUnsafe @ 0x1409E4850 (VerifierExAcquireFastMutexUnsafe.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ViExCheckAPCsDisabled @ 0x1409E4DD4 (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExAcquireFastMutexUnsafeNoReboot(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0x39uLL, a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExAcquireFastMutexUnsafe)(a1);
}
