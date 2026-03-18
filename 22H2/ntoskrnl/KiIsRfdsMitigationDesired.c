/*
 * XREFs of KiIsRfdsMitigationDesired @ 0x1404101EC
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381E90 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsRfdsMitigationDesired()
{
  return (KiFeatureSettings & 0x8000000) == 0;
}
