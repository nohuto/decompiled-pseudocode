/*
 * XREFs of VerifierExReleaseResourceForThreadLiteNoReboot @ 0x1409E2420
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     ViResourceReleaseSanityChecks @ 0x1409E2698 (ViResourceReleaseSanityChecks.c)
 */

__int64 __fastcall VerifierExReleaseResourceForThreadLiteNoReboot(ULONG_PTR a1, __int64 a2)
{
  ViResourceReleaseSanityChecks(a1);
  return ((__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvExReleaseResourceForThreadLite)(a1, a2);
}
