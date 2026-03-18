/*
 * XREFs of Feature_41457977__private_IsEnabledDeviceUsage @ 0x1C0024DC0
 * Callers:
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018ABF8 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C01B9800 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037AF60 (-VmBusCreateNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     Feature_41457977__private_IsEnabledFallback @ 0x1C0024DF8 (Feature_41457977__private_IsEnabledFallback.c)
 */

__int64 Feature_41457977__private_IsEnabledDeviceUsage()
{
  if ( (Feature_41457977__private_featureState & 0x10) != 0 )
    return Feature_41457977__private_featureState & 1;
  else
    return Feature_41457977__private_IsEnabledFallback((unsigned int)Feature_41457977__private_featureState, 3LL);
}
