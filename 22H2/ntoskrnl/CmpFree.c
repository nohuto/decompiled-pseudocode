/*
 * XREFs of CmpFree @ 0x1407099B0
 * Callers:
 *     <none>
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x1407099D8 (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
