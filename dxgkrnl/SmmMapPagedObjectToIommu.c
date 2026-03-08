/*
 * XREFs of SmmMapPagedObjectToIommu @ 0x1C006EAC0
 * Callers:
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C0013274 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmMapExistingMemoryToDomain @ 0x1C006E778 (SmmMapExistingMemoryToDomain.c)
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C0013C28 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C002A460 (-SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall SmmMapPagedObjectToIommu(__int64 a1, __int64 a2, struct SYSMM_IOMMU *a3)
{
  unsigned int v3; // ebx
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 LogicalAddress; // rdx

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 44) & 1) != 0 )
  {
    WdLogSingleEntry1(1LL, 1257LL);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v8,
          v7,
          v9,
          0LL,
          2,
          -1,
          L"pPhysicalObject->Flags.NonPaged == 0",
          1257LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a2 + 24));
    if ( (*(_DWORD *)(a1 + 44) & 0x200) != 0 || (dword_1C013BCE0 & 4) != 0 )
      LOBYTE(v3) = 1;
    return (unsigned int)SmmMapMdlToIommu(a3, LogicalAddress, *(struct _MDL **)(a1 + 56), v3);
  }
  return v3;
}
