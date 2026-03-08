/*
 * XREFs of SmmDetachDomainFromAllDevices @ 0x1C03D0F74
 * Callers:
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D0EBC (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmSwapDomains @ 0x1C03D1710 (SmmSwapDomains.c)
 * Callees:
 *     ?SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03D1D18 (-SysMmIommuDetach@@YAXPEAU_DEVICE_OBJECT@@PEAU_IOMMU_DMA_DOMAIN@@PEAU_IOMMU_DMA_DEVICE@@@Z.c)
 */

void __fastcall SmmDetachDomainFromAllDevices(__int64 a1, struct _IOMMU_DMA_DOMAIN *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rcx

  for ( i = 0; i < *(_DWORD *)(a1 + 24); ++i )
  {
    v5 = *(_QWORD *)(a1 + 376) + 16LL * i;
    SysMmIommuDetach(*(struct _DEVICE_OBJECT **)(v5 + 8), a2, *(struct _IOMMU_DMA_DEVICE **)v5);
  }
}
