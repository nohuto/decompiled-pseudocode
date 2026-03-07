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
