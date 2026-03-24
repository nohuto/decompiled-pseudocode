/*
 * XREFs of Feature_3088355641__private_IsEnabledDeviceUsage @ 0x1C0027C04
 * Callers:
 *     ?DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z @ 0x1C0156168 (-DxgkOpenSyncObjectFromNtHandle2Impl@@YAJPEAU_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2@@E@Z.c)
 * Callees:
 *     Feature_3088355641__private_IsEnabledFallback @ 0x1C0027C3C (Feature_3088355641__private_IsEnabledFallback.c)
 */

__int64 Feature_3088355641__private_IsEnabledDeviceUsage()
{
  if ( (Feature_3088355641__private_featureState & 0x10) != 0 )
    return Feature_3088355641__private_featureState & 1;
  else
    return Feature_3088355641__private_IsEnabledFallback((unsigned int)Feature_3088355641__private_featureState, 3LL);
}
