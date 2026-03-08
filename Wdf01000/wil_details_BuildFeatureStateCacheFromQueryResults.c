/*
 * XREFs of wil_details_BuildFeatureStateCacheFromQueryResults @ 0x1C00B0070
 * Callers:
 *     wil_details_UpdateFeatureConfiguredStates @ 0x1C00B029C (wil_details_UpdateFeatureConfiguredStates.c)
 *     wil_details_PopulateInitialConfiguredFeatureStates @ 0x1C00BD1B8 (wil_details_PopulateInitialConfiguredFeatureStates.c)
 * Callees:
 *     <none>
 */

void __fastcall wil_details_BuildFeatureStateCacheFromQueryResults(
        int queryStatus,
        const _RTL_FEATURE_CONFIGURATION *featureConfiguration,
        wil_details_FeatureStateCache *result)
{
  unsigned int v3; // edx

  if ( queryStatus == -2147483614 || queryStatus == -1073741275 )
  {
    result->exchange64 = 0LL;
    goto LABEL_8;
  }
  result->exchange64 = 0LL;
  if ( !queryStatus )
  {
    v3 = (8 * (*((_DWORD *)featureConfiguration + 1) & 0xB0 | (4 * (*((_DWORD *)featureConfiguration + 1) & 0x40)))) | 0x206;
    goto LABEL_9;
  }
  if ( queryStatus != 279 )
  {
LABEL_8:
    v3 = 518;
    goto LABEL_9;
  }
  v3 = (8 * (*((_DWORD *)featureConfiguration + 1) & 0x80)) | 0x206;
LABEL_9:
  result->exchange = v3;
}
