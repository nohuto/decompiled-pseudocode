/*
 * XREFs of ?IsGpuVaIoMmuSupported@DXGADAPTER@@QEBAEXZ @ 0x1C000A168
 * Callers:
 *     ?IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ @ 0x1C0009C00 (-IsGpuVirtualAddressingSupported@DXGADAPTER@@QEBAEXZ.c)
 *     ?Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z @ 0x1C01B6E2C (-Initialize@DXGPROCESS_RENDER_ADAPTER_INFO@@QEAAJPEAVDXGPROCESS@@PEAVADAPTER_RENDER@@@Z.c)
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x1C01EDF54 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1C01B9800 (-SysMmQueryIommuState@@YAXPEBUSYSMM_ADAPTER@@PEATSYSMM_IOMMU_STATE@@@Z.c)
 */

bool __fastcall DXGADAPTER::IsGpuVaIoMmuSupported(DXGADAPTER *this)
{
  const struct SYSMM_ADAPTER *v1; // rcx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (const struct SYSMM_ADAPTER *)*((_QWORD *)this + 28);
  v3 = 0;
  SysMmQueryIommuState(v1, (union SYSMM_IOMMU_STATE *)&v3);
  return (v3 & 4) != 0;
}
