/*
 * XREFs of ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C002A460
 * Callers:
 *     ?SysMmMapIommuRange@@YAJPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x1C002A600 (-SysMmMapIommuRange@@YAJPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z.c)
 *     ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006E618 (-SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     SmmMapNonPagedObjectToIommu @ 0x1C006E914 (SmmMapNonPagedObjectToIommu.c)
 *     SmmMapPagedObjectToIommu @ 0x1C006EAC0 (SmmMapPagedObjectToIommu.c)
 *     SmmMapLockedPagesToIommu @ 0x1C007138C (SmmMapLockedPagesToIommu.c)
 * Callees:
 *     SmmMapIommu @ 0x1C002A438 (SmmMapIommu.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0042014 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     SmmIommuMapReferenced @ 0x1C006E404 (SmmIommuMapReferenced.c)
 */

__int64 __fastcall SmmMapMdlToIommu(struct SYSMM_IOMMU *a1, __int64 a2, struct _MDL *a3, unsigned __int8 a4)
{
  __int64 v4; // r15
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // r14
  int v11; // edx
  int v12; // ecx
  int v13; // r8d

  v4 = a4;
  if ( !a4 || (*((_DWORD *)a1 + 7) & 1) != 0 )
    v8 = SmmMapIommu((__int64)a1, a2, (__int64)a3);
  else
    v8 = SmmIommuMapReferenced(a1, a3);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = v8;
    WdLogSingleEntry5(2LL, a3, a2, a1, v4, v8);
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          v12,
          v11,
          v13,
          0,
          0,
          -1,
          (__int64)L"Failed to map MDL 0x%.16I64x to IOMMU at logical address 0x%.16I64x. pIommu=0x%.16I64x, Referenced=%u, Status=0x%.8x",
          a3,
          a2,
          a1,
          v4,
          v10);
    }
  }
  return v9;
}
