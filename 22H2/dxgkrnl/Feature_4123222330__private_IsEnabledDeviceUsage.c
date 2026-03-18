/*
 * XREFs of Feature_4123222330__private_IsEnabledDeviceUsage @ 0x1C0026C80
 * Callers:
 *     ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0380CA0 (-VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0381350 (-VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_4123222330__private_IsEnabledFallback @ 0x1C0026CB8 (Feature_4123222330__private_IsEnabledFallback.c)
 */

__int64 Feature_4123222330__private_IsEnabledDeviceUsage()
{
  if ( (Feature_4123222330__private_featureState & 0x10) != 0 )
    return Feature_4123222330__private_featureState & 1;
  else
    return Feature_4123222330__private_IsEnabledFallback((unsigned int)Feature_4123222330__private_featureState, 3LL);
}
