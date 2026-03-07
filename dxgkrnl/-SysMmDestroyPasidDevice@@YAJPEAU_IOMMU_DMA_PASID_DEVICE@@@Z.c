__int64 __fastcall SysMmDestroyPasidDevice(struct _IOMMU_DMA_PASID_DEVICE *a1)
{
  if ( SmmUseIommuV3Interface() )
    return ((__int64 (*)(void))qword_1C013BCB8)();
  else
    return 3221225485LL;
}
