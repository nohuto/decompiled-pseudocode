/*
 * XREFs of VerifierPortKeReleaseSpinLock @ 0x1409DC550
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViKeIrqlLogCommon @ 0x1409DD0CC (ViKeIrqlLogCommon.c)
 *     ViKeReleaseSpinLockCommon @ 0x1409DD360 (ViKeReleaseSpinLockCommon.c)
 */

__int64 __fastcall VerifierPortKeReleaseSpinLock(ULONG_PTR a1, char a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx

  v4 = ViKeReleaseSpinLockCommon(a1);
  LOBYTE(v5) = a2;
  ((void (__fastcall *)(ULONG_PTR, __int64))pXdvKeReleaseSpinLock)(a1, v5);
  return ViKeIrqlLogCommon(v4, 1LL);
}
