/*
 * XREFs of HvMarkCellDirty @ 0x1408A7366
 * Callers:
 *     CmpCreateTombstone @ 0x140614A00 (CmpCreateTombstone.c)
 *     CmpCheckKey @ 0x1407B4B80 (CmpCheckKey.c)
 *     CmRenameKey @ 0x140A1170C (CmRenameKey.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A26B64 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1407D2460 (HvpMarkCellDirty.c)
 */

__int64 __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  return HvpMarkCellDirty(a1, a2, a3);
}
