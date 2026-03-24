/*
 * XREFs of Feature_2505606457__private_IsEnabledDeviceUsage @ 0x1C0026740
 * Callers:
 *     ?VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00DAF90 (-VmBusSignalSyncObjectCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024FDF0 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C02927EC (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 * Callees:
 *     Feature_2505606457__private_IsEnabledFallback @ 0x1C0026778 (Feature_2505606457__private_IsEnabledFallback.c)
 */

__int64 Feature_2505606457__private_IsEnabledDeviceUsage()
{
  if ( (Feature_2505606457__private_featureState & 0x10) != 0 )
    return Feature_2505606457__private_featureState & 1;
  else
    return Feature_2505606457__private_IsEnabledFallback((unsigned int)Feature_2505606457__private_featureState, 3LL);
}
