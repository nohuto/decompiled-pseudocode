/*
 * XREFs of KiIsKvaShadowNeededForBranchConfusion @ 0x1403F2934
 * Callers:
 *     KiDetectKvaLeakage @ 0x14099CAB0 (KiDetectKvaLeakage.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A8B3C (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsBranchConfusionMitigationDesired @ 0x1403F2864 (KiIsBranchConfusionMitigationDesired.c)
 *     KiIsBranchConfusionMitigationSupported @ 0x1403F28C4 (KiIsBranchConfusionMitigationSupported.c)
 */

_BOOL8 __fastcall KiIsKvaShadowNeededForBranchConfusion(__int64 a1)
{
  __int64 v2; // rcx
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  KiDetectHardwareSpecControlFeatures(a1, 0, (__int64)&v4, 0LL);
  return (v4 & 0x8000) != 0
      && (unsigned int)KiIsBranchConfusionMitigationDesired(a1, &v4)
      && KiIsBranchConfusionMitigationSupported(v2, &v4);
}
