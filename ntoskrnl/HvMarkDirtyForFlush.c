/*
 * XREFs of HvMarkDirtyForFlush @ 0x1402FF80C
 * Callers:
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     HvFoldBackDirtyData @ 0x140A1DD50 (HvFoldBackDirtyData.c)
 * Callees:
 *     HvpMarkDirty @ 0x1407D25D0 (HvpMarkDirty.c)
 */

__int64 __fastcall HvMarkDirtyForFlush(ULONG_PTR a1)
{
  return HvpMarkDirty(a1);
}
