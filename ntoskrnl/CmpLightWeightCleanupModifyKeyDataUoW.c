/*
 * XREFs of CmpLightWeightCleanupModifyKeyDataUoW @ 0x140A25254
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x140A196A4 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitAddKeyUoW @ 0x140A25314 (CmpLightWeightCommitAddKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140A254B8 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140A25828 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightCreateModificationData @ 0x140A25D48 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareAddKeyUoW @ 0x140A26040 (CmpLightWeightPrepareAddKeyUoW.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A262F8 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A266F0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     CmpFreeIndexByCell @ 0x140A207B4 (CmpFreeIndexByCell.c)
 */

void __fastcall CmpLightWeightCleanupModifyKeyDataUoW(ULONG_PTR BugCheckParameter2, unsigned int *a2)
{
  ULONG_PTR v5; // rdx
  ULONG_PTR v6; // rdx

  if ( (*a2)-- == 1 )
  {
    v5 = a2[3];
    if ( (_DWORD)v5 != -1 )
      CmpFreeIndexByCell(BugCheckParameter2, v5);
    v6 = a2[4];
    if ( (_DWORD)v6 != -1 )
      CmpFreeIndexByCell(BugCheckParameter2, v6);
    CmpFreeTransientPoolWithTag(a2, 0x77554D43u);
  }
}
