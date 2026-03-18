/*
 * XREFs of Feature_Servicing_CleanUpDisplayedPrimary__private_IsEnabledDeviceUsage @ 0x1C0024CD8
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173F88 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C02BC360 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     Feature_Servicing_CleanUpDisplayedPrimary__private_IsEnabledFallback @ 0x1C0024D10 (Feature_Servicing_CleanUpDisplayedPrimary__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_CleanUpDisplayedPrimary__private_IsEnabledDeviceUsage()
{
  if ( (Feature_Servicing_CleanUpDisplayedPrimary__private_featureState & 0x10) != 0 )
    return Feature_Servicing_CleanUpDisplayedPrimary__private_featureState & 1;
  else
    return Feature_Servicing_CleanUpDisplayedPrimary__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_CleanUpDisplayedPrimary__private_featureState,
             3LL);
}
