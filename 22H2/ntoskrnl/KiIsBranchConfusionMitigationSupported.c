/*
 * XREFs of KiIsBranchConfusionMitigationSupported @ 0x140573DE0
 * Callers:
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x140381DB0 (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381E90 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiIsSrsoMitigationDesired @ 0x140410240 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     KiIsHyperVCr3RspErrataPresent @ 0x140579318 (KiIsHyperVCr3RspErrataPresent.c)
 */

_BOOL8 __fastcall KiIsBranchConfusionMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 & 4) != 0 && (unsigned int)KiIsHyperVCr3RspErrataPresent() == 0;
}
