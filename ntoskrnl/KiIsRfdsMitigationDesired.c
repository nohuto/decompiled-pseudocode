/*
 * XREFs of KiIsRfdsMitigationDesired @ 0x14040ACD4
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x14037E220 (KiOptimizeSpecCtrlSettingsWorker.c)
 * Callees:
 *     <none>
 */

_BOOL8 KiIsRfdsMitigationDesired()
{
  return (KiFeatureSettings & 0x8000000) == 0;
}
