/*
 * XREFs of ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C00205A8
 * Callers:
 *     SmmInitializeDmaDevices @ 0x1C020CC94 (SmmInitializeDmaDevices.c)
 *     ?SysMmInitializeGlobal@@YAXXZ @ 0x1C020CF44 (-SysMmInitializeGlobal@@YAXXZ.c)
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D0EBC (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03D1160 (-SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     SmmIommuDeleteDomain @ 0x1C03D1194 (SmmIommuDeleteDomain.c)
 *     SmmIommuSwitchToTranslation @ 0x1C03D14A4 (SmmIommuSwitchToTranslation.c)
 *     ?SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D17F8 (-SmmUnblockDevice@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z @ 0x1C03D19B0 (-SysMmDisableIommu@@YAJPEAUSYSMM_ADAPTER@@W4SYSMM_IOMMU_ENABLEMENT_REASON@@@Z.c)
 *     ?SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03D1C54 (-SysMmIommuAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03D1D18 (-SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 * Callees:
 *     <none>
 */

bool SmmUseIommuV2Interface(void)
{
  return dword_1C013BBF8 == 2;
}
