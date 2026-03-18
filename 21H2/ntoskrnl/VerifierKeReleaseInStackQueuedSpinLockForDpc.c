/*
 * XREFs of VerifierKeReleaseInStackQueuedSpinLockForDpc @ 0x140A96020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     VfDeadlockReleaseResource @ 0x140A985B4 (VfDeadlockReleaseResource.c)
 */

__int64 __fastcall VerifierKeReleaseInStackQueuedSpinLockForDpc(__int64 a1)
{
  VfDeadlockReleaseResource(*(_DWORD *)(a1 + 8) & 0xFFFFFFFC);
  return ((__int64 (__fastcall *)(__int64))pXdvKeReleaseInStackQueuedSpinLockForDpc)(a1);
}
