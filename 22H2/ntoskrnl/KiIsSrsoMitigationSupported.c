/*
 * XREFs of KiIsSrsoMitigationSupported @ 0x1404102E8
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381E90 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsSrsoMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 >> 2) & 1LL;
}
