/*
 * XREFs of Feature_112499000__private_IsEnabledDeviceUsage @ 0x1C0026988
 * Callers:
 *     ?AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z @ 0x1C005790C (-AddMapping@HOSTVMMONITORMAPPING@@QEAAJPEAUHOST_VMMONITOR_MAPPING@1@@Z.c)
 * Callees:
 *     Feature_112499000__private_IsEnabledFallback @ 0x1C00269C0 (Feature_112499000__private_IsEnabledFallback.c)
 */

__int64 Feature_112499000__private_IsEnabledDeviceUsage()
{
  if ( (Feature_112499000__private_featureState & 0x10) != 0 )
    return Feature_112499000__private_featureState & 1;
  else
    return Feature_112499000__private_IsEnabledFallback((unsigned int)Feature_112499000__private_featureState, 3LL);
}
