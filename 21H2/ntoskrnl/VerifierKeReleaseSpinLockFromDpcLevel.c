/*
 * XREFs of VerifierKeReleaseSpinLockFromDpcLevel @ 0x140A96180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfDeadlockReleaseResource @ 0x140A985B4 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseSpinLockFromDpcLevel(__int64 a1)
{
  VfDeadlockReleaseResource(a1);
  return ((__int64 (__fastcall *)(__int64))pXdvKeReleaseSpinLockFromDpcLevel)(a1);
}
