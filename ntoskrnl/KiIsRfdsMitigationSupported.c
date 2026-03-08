/*
 * XREFs of KiIsRfdsMitigationSupported @ 0x14040ACEC
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x14037E220 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiIsRfdsMitigationSupported(__int64 a1, _QWORD *a2)
{
  return (*a2 >> 24) & 1LL;
}
