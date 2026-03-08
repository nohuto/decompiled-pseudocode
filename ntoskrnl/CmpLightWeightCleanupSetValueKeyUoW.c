/*
 * XREFs of CmpLightWeightCleanupSetValueKeyUoW @ 0x140A252DC
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x140A196A4 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x140A256EC (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x140A25BE0 (CmpLightWeightCommitSetValueKeyUoW.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x1402A4B0C (CmpFreeTransientPoolWithTag.c)
 *     HvFreeCell @ 0x1407A6A90 (HvFreeCell.c)
 */

void __fastcall CmpLightWeightCleanupSetValueKeyUoW(ULONG_PTR a1, unsigned int *a2)
{
  ULONG_PTR v4; // rdx

  if ( (*a2)-- == 1 )
  {
    v4 = a2[2];
    if ( (_DWORD)v4 != -1 )
      HvFreeCell(a1, v4);
    CmpFreeTransientPoolWithTag(a2, 0x77554D43u);
  }
}
