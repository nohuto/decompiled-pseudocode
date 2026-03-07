bool __fastcall DXGADAPTER::IsGpuVaIoMmuSupported(DXGADAPTER *this)
{
  const struct SYSMM_ADAPTER *v1; // rcx
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = (const struct SYSMM_ADAPTER *)*((_QWORD *)this + 28);
  v3 = 0;
  SysMmQueryIommuState(v1, (union SYSMM_IOMMU_STATE *)&v3);
  return (v3 & 4) != 0;
}
