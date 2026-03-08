/*
 * XREFs of ViTargetDriversFreeVerifiedData @ 0x1405CCEEC
 * Callers:
 *     VfTargetDriversDisableVerifier @ 0x140AC8410 (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140AC8480 (VfTargetDriversEnableVerifier.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ViTargetDriversFreeVerifiedData(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x44566656u);
}
