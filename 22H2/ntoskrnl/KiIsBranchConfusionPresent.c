/*
 * XREFs of KiIsBranchConfusionPresent @ 0x1403F28F0
 * Callers:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403A8B3C (KiDetectHardwareSpecControlFeatures.c)
 *     KeOptimizeSpecCtrlSettings @ 0x1403C7210 (KeOptimizeSpecCtrlSettings.c)
 *     KiIsSrsoMitigationDesired @ 0x1403F2A58 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403A5310 (HviIsAnyHypervisorPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionPresent(__int64 a1)
{
  return *(_BYTE *)(a1 + 141) == 1
      && (KeFeatureBits2 & 0x1000000) == 0
      && (HviIsAnyHypervisorPresent() || *(_BYTE *)(a1 + 64) != 25);
}
