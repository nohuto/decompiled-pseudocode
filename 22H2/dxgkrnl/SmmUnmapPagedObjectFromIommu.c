/*
 * XREFs of SmmUnmapPagedObjectFromIommu @ 0x1C006FA44
 * Callers:
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C0012A94 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmClosePhysicalObject @ 0x1C0012C88 (SmmClosePhysicalObject.c)
 *     SmmMapExistingMemoryToDomain @ 0x1C006F3A8 (SmmMapExistingMemoryToDomain.c)
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C0013448 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0043074 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C006F8F4 (-SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 */

void __fastcall SmmUnmapPagedObjectFromIommu(__int64 a1, __int64 a2, struct SYSMM_IOMMU *a3)
{
  char v3; // bl
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 LogicalAddress; // rax

  v3 = 0;
  if ( (*(_DWORD *)(a1 + 44) & 1) != 0 )
  {
    WdLogSingleEntry1(1LL, 1438LL);
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
          1438LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( *(_DWORD *)(a1 + 48) )
  {
    LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(a2 + 24));
    if ( (*(_DWORD *)(a1 + 44) & 0x200) != 0 || (dword_1C0140CD0 & 4) != 0 )
      v3 = 1;
    SmmUnmapMdlFromIommu(a3, LogicalAddress, *(struct _MDL **)(a1 + 56), v3);
  }
}
