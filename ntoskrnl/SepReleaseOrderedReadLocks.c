/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x1402E9D34
 * Callers:
 *     SeTokenCanImpersonate @ 0x1406DA880 (SeTokenCanImpersonate.c)
 *     SepIsSiblingTokenByPointer @ 0x140776354 (SepIsSiblingTokenByPointer.c)
 *     NtCompareTokens @ 0x140776460 (NtCompareTokens.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
