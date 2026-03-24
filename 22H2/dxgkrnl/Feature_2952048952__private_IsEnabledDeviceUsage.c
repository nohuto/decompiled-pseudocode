/*
 * XREFs of Feature_2952048952__private_IsEnabledDeviceUsage @ 0x1C0027E58
 * Callers:
 *     ?DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC_OBJECT_CLIENTHINT@@HPEAX@Z @ 0x1C0117F20 (-DxgkCreateSynchronizationObjectImpl@@YAJPEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@U_VIDSCH_SYNC.c)
 * Callees:
 *     Feature_2952048952__private_IsEnabledFallback @ 0x1C0027E90 (Feature_2952048952__private_IsEnabledFallback.c)
 */

__int64 Feature_2952048952__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2952048952__private_featureState & 0x10) != 0 )
    return Feature_2952048952__private_featureState & 1;
  else
    return Feature_2952048952__private_IsEnabledFallback((unsigned int)Feature_2952048952__private_featureState, 3LL);
}
