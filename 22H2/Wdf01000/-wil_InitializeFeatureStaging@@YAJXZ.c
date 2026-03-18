/*
 * XREFs of ?wil_InitializeFeatureStaging@@YAJXZ @ 0x1C00C80AC
 * Callers:
 *     DriverEntry @ 0x1C002DDE0 (DriverEntry.c)
 * Callees:
 *     ?wil_details_EvaluateFeatureDependencies@@YAXXZ @ 0x1C00BC0AC (-wil_details_EvaluateFeatureDependencies@@YAXXZ.c)
 *     ?wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z @ 0x1C00BC25C (-wil_details_RegisterFeatureStagingChangeNotification@@YAJPEA_K@Z.c)
 *     ?wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ @ 0x1C00C80F0 (-wil_details_PopulateInitialConfiguredFeatureStates@@YAJXZ.c)
 */

__int64 __fastcall wil_InitializeFeatureStaging()
{
  unsigned int v0; // ebx
  unsigned __int64 initialChangeStamp; // [rsp+30h] [rbp+8h] BYREF

  initialChangeStamp = RtlQueryFeatureConfigurationChangeStamp();
  v0 = wil_details_PopulateInitialConfiguredFeatureStates();
  wil_details_EvaluateFeatureDependencies();
  if ( !v0 )
    return (unsigned int)wil_details_RegisterFeatureStagingChangeNotification(&initialChangeStamp);
  return v0;
}
