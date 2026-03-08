/*
 * XREFs of Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0024530
 * Callers:
 *     DxgkLock2Internal @ 0x1C019DDA0 (DxgkLock2Internal.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C01B549C (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B8330 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     DxgkInternalDeviceIoctl @ 0x1C01D6220 (DxgkInternalDeviceIoctl.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1C01DC380 (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 *     ?Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z @ 0x1C01DCEF0 (-Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C02031F0 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C020A220 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x1C020CB8C (DpiFdoQuerySysMmAdapterCaps.c)
 *     SmmInitializeDmaDevices @ 0x1C020CC94 (SmmInitializeDmaDevices.c)
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x1C020CF44 (-SysMmInitializeGlobal@@YAXXZ.c)
 *     DpQueryFeatureSupport @ 0x1C021A040 (DpQueryFeatureSupport.c)
 * Callees:
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledFallback @ 0x1C0024568 (Feature_DxgkGpuVaIoMmu__private_IsEnabledFallback.c)
 */

__int64 Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage()
{
  if ( (Feature_DxgkGpuVaIoMmu__private_featureState & 0x10) != 0 )
    return Feature_DxgkGpuVaIoMmu__private_featureState & 1;
  else
    return Feature_DxgkGpuVaIoMmu__private_IsEnabledFallback(
             (unsigned int)Feature_DxgkGpuVaIoMmu__private_featureState,
             3LL);
}
