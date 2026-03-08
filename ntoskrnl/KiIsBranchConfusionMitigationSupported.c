/*
 * XREFs of KiIsBranchConfusionMitigationSupported @ 0x1405718BC
 * Callers:
 *     KiIsKvaShadowNeededForBranchConfusion @ 0x14037E13C (KiIsKvaShadowNeededForBranchConfusion.c)
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x14037E220 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiIsSrsoMitigationDesired @ 0x14040AD28 (KiIsSrsoMitigationDesired.c)
 * Callees:
 *     KiIsHyperVCr3RspErrataPresent @ 0x140576E08 (KiIsHyperVCr3RspErrataPresent.c)
 */

__int64 __fastcall KiIsBranchConfusionMitigationSupported(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx

  if ( (*a2 & 4) == 0 )
    return 0LL;
  v2 = 0;
  if ( (_BYTE)KiKernelCetEnabled )
    return 0LL;
  LOBYTE(v2) = (unsigned int)KiIsHyperVCr3RspErrataPresent() == 0;
  return v2;
}
