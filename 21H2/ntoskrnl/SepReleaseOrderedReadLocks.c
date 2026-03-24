/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x140360024
 * Callers:
 *     SeTokenCanImpersonate @ 0x14065B420 (SeTokenCanImpersonate.c)
 *     SepIsSiblingTokenByPointer @ 0x140716B0C (SepIsSiblingTokenByPointer.c)
 *     NtCompareTokens @ 0x140717200 (NtCompareTokens.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
