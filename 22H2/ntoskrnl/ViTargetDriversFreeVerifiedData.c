/*
 * XREFs of ViTargetDriversFreeVerifiedData @ 0x1405CF39C
 * Callers:
 *     VfTargetDriversDisableVerifier @ 0x140ACC410 (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140ACC480 (VfTargetDriversEnableVerifier.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall ViTargetDriversFreeVerifiedData(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x44566656u);
}
