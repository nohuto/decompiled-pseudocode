/*
 * XREFs of Feature_1834517816__private_IsEnabledDeviceUsage @ 0x1C0026A04
 * Callers:
 *     ?SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@@Z @ 0x1C0351710 (-SignalSynchronizationObjectFromCpu@@YAJPEAU_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGP.c)
 *     ?VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0393580 (-VmBusSignalSyncObject@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_1834517816__private_IsEnabledFallback @ 0x1C0026A3C (Feature_1834517816__private_IsEnabledFallback.c)
 */

__int64 Feature_1834517816__private_IsEnabledDeviceUsage()
{
  if ( (Feature_1834517816__private_featureState & 0x10) != 0 )
    return Feature_1834517816__private_featureState & 1;
  else
    return Feature_1834517816__private_IsEnabledFallback((unsigned int)Feature_1834517816__private_featureState, 3LL);
}
