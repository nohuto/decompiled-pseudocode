/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x1402A4F54
 * Callers:
 *     SeTokenCanImpersonate @ 0x140650240 (SeTokenCanImpersonate.c)
 *     SepIsSiblingTokenByPointer @ 0x1406C515C (SepIsSiblingTokenByPointer.c)
 *     NtCompareTokens @ 0x1406C5850 (NtCompareTokens.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
