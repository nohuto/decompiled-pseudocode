__int64 __fastcall SmmMapHardwareReservedRangeToIommu(const struct SYSMM_LOGICAL_BLOCK **a1, struct SYSMM_IOMMU *a2)
{
  __int64 LogicalAddress; // rax
  struct _MDL *v3; // r8
  SIZE_T v4; // r9
  struct SYSMM_IOMMU *v5; // r10

  LogicalAddress = SmmGetLogicalAddress(a1[2]);
  return SmmMapContiguousRangeToIommu(v5, LogicalAddress, v3, v4, 0);
}
