/*
 * XREFs of VerifierExReleaseFastMutexUnsafeNoReboot @ 0x1409E4A00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     ViExCheckAPCsDisabled @ 0x1409E4DD4 (ViExCheckAPCsDisabled.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexUnsafeNoReboot(ULONG_PTR a1)
{
  if ( (MmVerifierData & 0x800) != 0 )
    ViExCheckAPCsDisabled(0x3AuLL, a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExReleaseFastMutexUnsafe)(a1);
}
