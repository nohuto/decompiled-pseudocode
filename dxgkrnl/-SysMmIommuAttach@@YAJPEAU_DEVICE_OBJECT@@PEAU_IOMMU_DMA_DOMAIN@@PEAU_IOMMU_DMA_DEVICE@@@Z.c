__int64 __fastcall SysMmIommuAttach(
        struct _DEVICE_OBJECT *a1,
        struct _IOMMU_DMA_DOMAIN *a2,
        struct _IOMMU_DMA_DEVICE *a3)
{
  struct _IOMMU_DMA_DOMAIN *v5; // rdx
  __int64 v6; // r8
  __int64 (__fastcall *v7)(struct _IOMMU_DMA_DOMAIN *, __int64); // rax
  struct _IOMMU_DMA_DOMAIN *v8; // rcx
  int v9; // eax
  bool v10; // zf
  unsigned int v11; // ebx

  if ( SmmUseIommuV3Interface() )
  {
    v7 = (__int64 (__fastcall *)(struct _IOMMU_DMA_DOMAIN *, __int64))qword_1C013BC10;
    v8 = v5;
LABEL_3:
    v9 = v7(v8, v6);
    goto LABEL_6;
  }
  v10 = !SmmUseIommuV2Interface();
  v8 = a2;
  v7 = (__int64 (__fastcall *)(struct _IOMMU_DMA_DOMAIN *, __int64))qword_1C013BC10;
  if ( !v10 )
    goto LABEL_3;
  v9 = qword_1C013BC10(a2, a1, 0LL, 1LL);
LABEL_6:
  v11 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry2(2LL, a2, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to attach IOMMU_DMA_DOMAIN 0x%.16I64x to DEVICE_OBJECT 0x%.16I64x",
      (__int64)a2,
      (__int64)a1,
      0LL,
      0LL,
      0LL);
  }
  return v11;
}
