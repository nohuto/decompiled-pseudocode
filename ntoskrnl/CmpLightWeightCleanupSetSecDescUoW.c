/*
 * XREFs of CmpLightWeightCleanupSetSecDescUoW @ 0x140A252A8
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x140A196A4 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140A25A40 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x140A26B64 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpDereferenceSecurityNode @ 0x140243994 (CmpDereferenceSecurityNode.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpLightWeightCleanupSetSecDescUoW(_QWORD *P)
{
  ULONG_PTR v1; // rdx

  v1 = *(unsigned int *)P;
  if ( (_DWORD)v1 != -1 )
    CmpDereferenceSecurityNode(P[1], v1);
  ExFreePoolWithTag(P, 0x77554D43u);
}
