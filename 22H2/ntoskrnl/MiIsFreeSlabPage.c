/*
 * XREFs of MiIsFreeSlabPage @ 0x140553278
 * Callers:
 *     MiIsPageSecured @ 0x14030C4B8 (MiIsPageSecured.c)
 *     MiFreeSlabEntries @ 0x140312360 (MiFreeSlabEntries.c)
 * Callees:
 *     MiIsPfnFromSlabAllocation @ 0x140283570 (MiIsPfnFromSlabAllocation.c)
 */

_BOOL8 __fastcall MiIsFreeSlabPage(__int64 a1)
{
  __int64 v1; // r8

  return MiIsPfnFromSlabAllocation(a1) && (*(_BYTE *)(v1 + 34) & 7) == 5 && *(_QWORD *)(v1 + 8) >= 0xFFFFFFFFFFFFFFFEuLL;
}
