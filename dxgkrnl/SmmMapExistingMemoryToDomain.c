/*
 * XREFs of SmmMapExistingMemoryToDomain @ 0x1C006E778
 * Callers:
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x1C03D11C0 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     SmmIommuSwitchToTranslation @ 0x1C03D14A4 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C0013C28 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z @ 0x1C006E8DC (-SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z.c)
 *     SmmMapNonPagedObjectToIommu @ 0x1C006E914 (SmmMapNonPagedObjectToIommu.c)
 *     SmmMapPagedObjectToIommu @ 0x1C006EAC0 (SmmMapPagedObjectToIommu.c)
 *     ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006EBA0 (-SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     SmmUnmapNonPagedObjectFromIommu @ 0x1C006ECF0 (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x1C006EE14 (SmmUnmapPagedObjectFromIommu.c)
 */

__int64 __fastcall SmmMapExistingMemoryToDomain(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *i; // rbx
  struct SYSMM_IOMMU *v4; // r12
  __int64 v5; // rbp
  KIRQL v6; // r15
  int v7; // edi
  _QWORD *v8; // rcx
  int v9; // eax
  _QWORD *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rsi
  unsigned __int64 LogicalAddress; // rax
  __int64 v15; // r9

  v1 = (_QWORD *)(a1 + 40);
  i = *(_QWORD **)(a1 + 40);
  v4 = (struct SYSMM_IOMMU *)(a1 + 64);
  v5 = 0LL;
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 36));
  if ( *(_DWORD *)(a1 + 28) )
  {
    while ( 1 )
    {
      v7 = SmmMapHardwareReservedRangeToIommu(
             (const struct SYSMM_HARDWARE_RESERVED_RANGE *)(*(_QWORD *)(a1 + 384) + 24 * v5),
             v4);
      if ( v7 < 0 )
        break;
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 28) )
        goto LABEL_4;
    }
LABEL_16:
    while ( 1 )
    {
      v1 = (_QWORD *)*v1;
      if ( v1 == i )
        break;
      v11 = i - 8;
      if ( (*((_DWORD *)i - 5) & 1) != 0 )
        SmmUnmapNonPagedObjectFromIommu(v11, i, v4);
      else
        SmmUnmapPagedObjectFromIommu(v11, i, v4);
    }
    if ( (_DWORD)v5 )
    {
      v12 = 0LL;
      v13 = (unsigned int)v5;
      do
      {
        LogicalAddress = SmmGetLogicalAddress(*(const struct SYSMM_LOGICAL_BLOCK **)(v12 + *(_QWORD *)(a1 + 384) + 16));
        SmmUnmapContiguousRangeFromIommu(
          v4,
          LogicalAddress,
          *(__int64 *)(v12 + v15) >> 12,
          *(_QWORD *)(v12 + v15 + 8),
          0);
        v12 += 24LL;
        --v13;
      }
      while ( v13 );
    }
    WdLogSingleEntry2(3LL, a1, v7);
  }
  else
  {
LABEL_4:
    for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
    {
      v8 = i - 8;
      if ( (*((_DWORD *)i - 5) & 1) != 0 )
        v9 = SmmMapNonPagedObjectToIommu(v8, i, v4);
      else
        v9 = SmmMapPagedObjectToIommu(v8, i, v4);
      v7 = v9;
      if ( v9 < 0 )
        goto LABEL_16;
    }
    v7 = 0;
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 36), v6);
  return (unsigned int)v7;
}
