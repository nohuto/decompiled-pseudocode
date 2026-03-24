/*
 * XREFs of Feature_309893433__private_IsEnabledDeviceUsage @ 0x1C00259A0
 * Callers:
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01140D0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0134CEC (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023EEA0 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_309893433__private_IsEnabledFallback @ 0x1C00259D8 (Feature_309893433__private_IsEnabledFallback.c)
 */

__int64 Feature_309893433__private_IsEnabledDeviceUsage()
{
  if ( (Feature_309893433__private_featureState & 0x10) != 0 )
    return Feature_309893433__private_featureState & 1;
  else
    return Feature_309893433__private_IsEnabledFallback((unsigned int)Feature_309893433__private_featureState, 3LL);
}
