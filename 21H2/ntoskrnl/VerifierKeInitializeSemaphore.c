/*
 * XREFs of VerifierKeInitializeSemaphore @ 0x1409DBCA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VfUtilSynchronizationObjectSanityChecks @ 0x1409C7B0C (VfUtilSynchronizationObjectSanityChecks.c)
 */

__int64 __fastcall VerifierKeInitializeSemaphore(void *a1, unsigned int a2, unsigned int a3)
{
  VfUtilSynchronizationObjectSanityChecks(a1, 0x20uLL);
  return ((__int64 (__fastcall *)(void *, _QWORD, _QWORD))pXdvKeInitializeSemaphore)(a1, a2, a3);
}
