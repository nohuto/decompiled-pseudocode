/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x14021F6B4
 * Callers:
 *     SepIsSiblingTokenByPointer @ 0x1406953C8 (SepIsSiblingTokenByPointer.c)
 *     NtCompareTokens @ 0x140695A40 (NtCompareTokens.c)
 *     SeTokenCanImpersonate @ 0x1407AFBE0 (SeTokenCanImpersonate.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 */

void __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  KeLeaveCriticalRegion();
}
