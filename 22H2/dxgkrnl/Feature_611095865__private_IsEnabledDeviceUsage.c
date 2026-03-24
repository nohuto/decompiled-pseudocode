/*
 * XREFs of Feature_611095865__private_IsEnabledDeviceUsage @ 0x1C0026794
 * Callers:
 *     ?VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023C490 (-VmBusBlt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_611095865__private_IsEnabledFallback @ 0x1C00267CC (Feature_611095865__private_IsEnabledFallback.c)
 */

__int64 Feature_611095865__private_IsEnabledDeviceUsage()
{
  if ( (Feature_611095865__private_featureState & 0x10) != 0 )
    return Feature_611095865__private_featureState & 1;
  else
    return Feature_611095865__private_IsEnabledFallback((unsigned int)Feature_611095865__private_featureState, 3LL);
}
