/*
 * XREFs of wil_UninitializeFeatureStaging @ 0x1C00DBF8C
 * Callers:
 *     DxgkUnload @ 0x1C0261ED0 (DxgkUnload.c)
 *     DriverEntry @ 0x1C03072C8 (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 wil_UninitializeFeatureStaging()
{
  __int64 result; // rax

  if ( wil_details_featureChangeNotification )
  {
    result = RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
  return result;
}
