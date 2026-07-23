/*
 * XREFs of VerifierExReleaseFastMutexNoReboot @ 0x1409E5960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViExReleaseFastMutexCommon @ 0x1409E5E30 (ViExReleaseFastMutexCommon.c)
 */

__int64 __fastcall VerifierExReleaseFastMutexNoReboot(ULONG_PTR a1)
{
  ViExReleaseFastMutexCommon(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR))pXdvExReleaseFastMutex)(a1);
}
