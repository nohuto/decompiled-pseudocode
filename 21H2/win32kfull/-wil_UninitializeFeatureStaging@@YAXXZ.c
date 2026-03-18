/*
 * XREFs of ?wil_UninitializeFeatureStaging@@YAXXZ @ 0x1C0377008
 * Callers:
 *     EditionBaseDriverUnloadUninitialize @ 0x1C0111F50 (EditionBaseDriverUnloadUninitialize.c)
 * Callees:
 *     <none>
 */

void wil_UninitializeFeatureStaging(void)
{
  if ( wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
}
