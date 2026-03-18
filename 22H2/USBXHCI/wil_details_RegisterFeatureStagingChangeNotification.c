/*
 * XREFs of wil_details_RegisterFeatureStagingChangeNotification @ 0x1C006D25C
 * Callers:
 *     wil_InitializeFeatureStaging @ 0x1C007E03C (wil_InitializeFeatureStaging.c)
 * Callees:
 *     wil_details_FeatureDescriptors_SkipPadding @ 0x1C001EE20 (wil_details_FeatureDescriptors_SkipPadding.c)
 */

_BYTE *wil_details_RegisterFeatureStagingChangeNotification()
{
  _QWORD *i; // rcx
  _BYTE *result; // rax
  __int64 v2; // r8

  for ( i = &Feature_USB4PowerImprovements__private_descriptor; ; i = result + 48 )
  {
    result = wil_details_FeatureDescriptors_SkipPadding(i);
    if ( !result )
      break;
    if ( !result[21] && !result[22] && !result[20] )
    {
      result = (_BYTE *)RtlRegisterFeatureConfigurationChangeNotification(
                          wil_details_OnFeatureConfigurationChange,
                          0LL,
                          v2,
                          &WPP_MAIN_CB.Queue.Wcb.CurrentIrp);
      if ( (_DWORD)result )
        WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
      return result;
    }
  }
  return result;
}
