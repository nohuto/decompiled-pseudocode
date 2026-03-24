/*
 * XREFs of HalpLaFreeState @ 0x1404DB104
 * Callers:
 *     HalpDmaAllocateDomain @ 0x1403C6BB8 (HalpDmaAllocateDomain.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404C4A38 (HalpDmaDereferenceDomainObject.c)
 * Callees:
 *     HalpMmAllocCtxFree @ 0x140378ED0 (HalpMmAllocCtxFree.c)
 *     HalpLapDeleteSubtree @ 0x1404DB530 (HalpLapDeleteSubtree.c)
 */

__int64 __fastcall HalpLaFreeState(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  HalpLapDeleteSubtree(a1, *(_QWORD *)(a1 + 56));
  HalpMmAllocCtxFree(v2, *(_QWORD *)(a1 + 64));
  HalpMmAllocCtxFree(v3, *(_QWORD *)(a1 + 56));
  return HalpMmAllocCtxFree(v4, a1);
}
