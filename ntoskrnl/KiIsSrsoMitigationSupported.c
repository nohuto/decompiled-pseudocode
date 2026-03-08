/*
 * XREFs of KiIsSrsoMitigationSupported @ 0x14040ADD0
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x14037E220 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsSrsoMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 >> 2) & 1LL;
}
