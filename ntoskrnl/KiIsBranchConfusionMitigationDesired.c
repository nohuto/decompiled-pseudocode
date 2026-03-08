/*
 * XREFs of KiIsBranchConfusionMitigationDesired @ 0x14057187C
 * Callers:
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x14037E13C (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x14037E220 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiIsSrsoMitigationDesired @ 0x14040AD28 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsBranchConfusionMitigationDesired(__int64 a1, _QWORD *a2)
{
  if ( (KiFeatureSettings & 5) != 0 || *(_BYTE *)(a1 + 141) == 1 && (KiFeatureSettings & 0x40) == 0 && (*a2 & 0x10) == 0 )
    return 0LL;
  else
    return HIBYTE(KiFeatureSettings) & 1;
}
