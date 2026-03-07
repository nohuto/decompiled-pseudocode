__int64 __fastcall SysMmUnmapLogicalAddressRange(struct SYSMM_ADAPTER *a1, struct _IOMMU_DMA_DOMAIN *a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // r10
  __int64 v4; // r11

  if ( !SmmUseIommuV3Interface() )
    return 3221225485LL;
  if ( !v3 )
  {
    WdLogSingleEntry1(1LL, 1176LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"The domain cannot be NULL", 1176LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  return ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64))qword_1C013BC40)(v3, v4, v2 >> 12);
}
