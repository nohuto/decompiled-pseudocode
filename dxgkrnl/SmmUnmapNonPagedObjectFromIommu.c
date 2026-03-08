/*
 * XREFs of SmmUnmapNonPagedObjectFromIommu @ 0x1C006ECF0
 * Callers:
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C0013274 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmClosePhysicalObject @ 0x1C0013468 (SmmClosePhysicalObject.c)
 *     SmmMapExistingMemoryToDomain @ 0x1C006E778 (SmmMapExistingMemoryToDomain.c)
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C0013C28 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006EBA0 (-SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C006ECC4 (-SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 */

void __fastcall SmmUnmapNonPagedObjectFromIommu(__int64 a1, __int64 a2, struct SYSMM_IOMMU *a3)
{
  char v3; // bl
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 LogicalAddress; // rax
  unsigned __int64 v11; // rsi
  int v12; // edx
  PHYSICAL_ADDRESS v13; // r8

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 44) & 1) == 0 )
  {
    WdLogSingleEntry1(1LL, 1359LL);
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
          L"pPhysicalObject->Flags.NonPaged == 1",
          1359LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a2 + 24));
  v11 = LogicalAddress;
  if ( (*(_DWORD *)(a1 + 44) & 0x200) != 0 || (dword_1C013BCE0 & 4) != 0 )
    v3 = 1;
  v12 = *(_DWORD *)(a1 + 44) & 0x1E;
  switch ( v12 )
  {
    case 4:
      SmmUnmapMdlFromIommu(a3, LogicalAddress, *(struct _MDL **)(a1 + 8), v3);
      return;
    case 10:
      v13.QuadPart = (unsigned __int64)MmGetPhysicalAddress(*(PVOID *)(a1 + 8)).QuadPart >> 12;
      break;
    case 6:
      v13.QuadPart = *(_QWORD *)(a1 + 8) >> 12;
      break;
    default:
      return;
  }
  SmmUnmapContiguousRangeFromIommu(a3, v11, (struct _MDL *)v13.QuadPart, *(_QWORD *)a1, v3);
}
