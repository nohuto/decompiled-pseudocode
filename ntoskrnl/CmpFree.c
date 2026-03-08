/*
 * XREFs of CmpFree @ 0x1407A58E0
 * Callers:
 *     <none>
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x1407A5908 (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
