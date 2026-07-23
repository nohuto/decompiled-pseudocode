/*
 * XREFs of VerifierKeReleaseQueuedSpinLock @ 0x1409D44D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     VerifierBugCheckIfAppropriate @ 0x1409D1D54 (VerifierBugCheckIfAppropriate.c)
 *     ViKeIrqlLogCommon @ 0x1409DD0CC (ViKeIrqlLogCommon.c)
 *     ViKeLowerIrqlSanityChecks @ 0x1409DD138 (ViKeLowerIrqlSanityChecks.c)
 */

__int64 __fastcall VerifierKeReleaseQueuedSpinLock(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  char v2; // di
  ULONG_PTR v3; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rbx
  __int64 v6; // rdx

  v2 = a2;
  v3 = BugCheckParameter3;
  CurrentIrql = KeGetCurrentIrql();
  if ( KernelVerifier && (MmVerifierData & 0x800) != 0 && CurrentIrql < 2u )
    VerifierBugCheckIfAppropriate(0xC4u, 0x36uLL, CurrentIrql, BugCheckParameter3, (unsigned __int8)a2);
  LOBYTE(a2) = v2;
  LOBYTE(BugCheckParameter3) = CurrentIrql;
  v5 = ViKeLowerIrqlSanityChecks(BugCheckParameter3, a2);
  LOBYTE(v6) = v2;
  ((void (__fastcall *)(ULONG_PTR, __int64))pXdvKeReleaseQueuedSpinLock)(v3, v6);
  return ViKeIrqlLogCommon(v5, 1LL);
}
