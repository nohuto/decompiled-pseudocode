/*
 * XREFs of KiIsTsaMitigationDesired @ 0x140410324
 * Callers:
 *     KiOptimizeSpecCtrlSettingsWorker @ 0x140381E90 (KiOptimizeSpecCtrlSettingsWorker.c)
 *     KiIsKvaShadowNeededForTsa @ 0x140410184 (KiIsKvaShadowNeededForTsa.c)
 * Callees:
 *     <none>
 */

__int64 KiIsTsaMitigationDesired()
{
  if ( (KiFeatureSettings & 5) != 0 )
    return 0LL;
  else
    return ((unsigned int)KiFeatureSettings >> 30) & 1;
}
