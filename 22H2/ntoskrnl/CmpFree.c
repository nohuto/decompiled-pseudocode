/*
 * XREFs of CmpFree @ 0x14068C410
 * Callers:
 *     <none>
 * Callees:
 *     CmpReleaseGlobalQuota @ 0x1406574DC (CmpReleaseGlobalQuota.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall CmpFree(PVOID P, unsigned int a2)
{
  CmpReleaseGlobalQuota(a2);
  ExFreePoolWithTag(P, 0);
}
