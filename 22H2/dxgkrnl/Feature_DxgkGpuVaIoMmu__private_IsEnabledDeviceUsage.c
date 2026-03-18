/*
 * XREFs of Feature_DxgkGpuVaIoMmu__private_IsEnabledDeviceUsage @ 0x1C0023FE8
 * Callers:
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C018C900 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ??0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C018F8F0 (--0DXGCONTEXT@@QEAA@PEAVDXGDEVICE@@IIU_D3DDDI_CREATECONTEXTFLAGS@@W4_D3DKMT_CLIENTHINT@@E@Z.c)
 *     DxgkLock2Internal @ 0x1C01D2AB0 (DxgkLock2Internal.c)
 *     DxgkInternalDeviceIoctl @ 0x1C01E30C0 (DxgkInternalDeviceIoctl.c)
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1C01E8F3C (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 *     ?Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z @ 0x1C01E9E80 (-Allocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJI@Z.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01FC874 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0211D70 (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x1C02183DC (-SysMmInitializeGlobal@@YAXXZ.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C0218E00 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 *     DpiFdoQuerySysMmAdapterCaps @ 0x1C021B1D4 (DpiFdoQuerySysMmAdapterCaps.c)
 *     SmmInitializeDmaDevices @ 0x1C021B2DC (SmmInitializeDmaDevices.c)
 *     DpQueryFeatureSupport @ 0x1C0228600 (DpQueryFeatureSupport.c)
 * Callees:
 *     Feature_DxgkGpuVaIoMmu__private_IsEnabledFallback @ 0x1C0024020 (Feature_DxgkGpuVaIoMmu__private_IsEnabledFallback.c)
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
