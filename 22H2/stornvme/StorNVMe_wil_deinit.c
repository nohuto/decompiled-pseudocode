/*
 * XREFs of StorNVMe_wil_deinit @ 0x1C00037B0
 * Callers:
 *     DriverEntry @ 0x1C00076D8 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 StorNVMe_wil_deinit()
{
  __int64 result; // rax

  if ( g_wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    g_wil_details_featureChangeNotification = 0LL;
  }
  g_wil_details_isFeatureStagingInitialized = 0;
  return result;
}
