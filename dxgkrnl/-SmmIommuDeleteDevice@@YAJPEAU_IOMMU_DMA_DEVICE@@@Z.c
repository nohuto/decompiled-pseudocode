__int64 __fastcall SmmIommuDeleteDevice(struct _IOMMU_DMA_DEVICE *a1)
{
  if ( SmmUseIommuV3Interface() || SmmUseIommuV2Interface() )
    return ((__int64 (*)(void))qword_1C013BCA8)();
  else
    return 0LL;
}
