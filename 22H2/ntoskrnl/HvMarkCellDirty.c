/*
 * XREFs of HvMarkCellDirty @ 0x1408AC1D6
 * Callers:
 *     CmpKeySecurityMarkDirtyForReferenceCountDecrement @ 0x140419344 (CmpKeySecurityMarkDirtyForReferenceCountDecrement.c)
 *     CmpCreateTombstone @ 0x140616EBC (CmpCreateTombstone.c)
 *     CmpCheckKey @ 0x1406E07C0 (CmpCheckKey.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14070CFC8 (CmpSetSecurityDescriptorInfo.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1407D1848 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A298C4 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x1407474B0 (HvpMarkCellDirty.c)
 */

__int64 __fastcall HvMarkCellDirty(ULONG_PTR a1, ULONG_PTR a2, char a3)
{
  return HvpMarkCellDirty(a1, a2, a3);
}
