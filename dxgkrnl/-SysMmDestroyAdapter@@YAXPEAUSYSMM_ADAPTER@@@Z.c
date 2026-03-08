/*
 * XREFs of ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D1DB8
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C01F5A64 (DpiFdoInitializeFdo.c)
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x1C020A220 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 *     DpiFdoHandleRemoveDevice @ 0x1C0396F80 (DpiFdoHandleRemoveDevice.c)
 *     DpiKsrStopAdapter @ 0x1C03A1DF4 (DpiKsrStopAdapter.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C0070254 (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SysMmCreateLiveDump@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z @ 0x1C0071B44 (-SysMmCreateLiveDump@@YAJK_K000T_WD_LIVEREPORT_FLAGS@@@Z.c)
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D0EBC (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03D1160 (-SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z.c)
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x1C03D2830 (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 */

void __fastcall SysMmDestroyAdapter(struct SYSMM_ADAPTER *a1)
{
  _QWORD *v1; // r9
  _QWORD *v3; // r8
  __int64 i; // rdi
  struct SYSMM_LOGICAL_BLOCK *v5; // rdx
  struct SYSMM_LOGICAL_ALLOCATOR *v6; // rcx
  char *v7; // rcx
  unsigned int j; // edi
  struct _IOMMU_DMA_DEVICE **v9; // rsi

  v1 = (_QWORD *)((char *)a1 + 40);
  if ( (_QWORD *)*v1 != v1 )
  {
    if ( (dword_1C013BCE0 & 0x20) != 0 )
      WdLogSingleEntry5(0LL, 484LL, 6LL, a1, v1, 0LL);
    else
      SysMmCreateLiveDump();
  }
  v3 = (_QWORD *)*((_QWORD *)a1 + 48);
  if ( v3 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 7); i = (unsigned int)(i + 1) )
    {
      v5 = (struct SYSMM_LOGICAL_BLOCK *)v3[3 * i + 2];
      if ( v5 )
      {
        SmmFreeLogicalAddress(*((struct SYSMM_LOGICAL_ALLOCATOR **)a1 + 46), v5);
        v3 = (_QWORD *)*((_QWORD *)a1 + 48);
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
  SmmDeinitializeIommu(a1);
  v6 = (struct SYSMM_LOGICAL_ALLOCATOR *)*((_QWORD *)a1 + 46);
  if ( v6 )
    SmmDestroyLogicalAllocator(v6);
  v7 = (char *)*((_QWORD *)a1 + 47);
  if ( v7 )
  {
    for ( j = 0; j < *((_DWORD *)a1 + 6); ++j )
    {
      v9 = (struct _IOMMU_DMA_DEVICE **)&v7[16 * j];
      if ( *v9 )
      {
        SmmIommuDeleteDevice(*v9);
        *v9 = 0LL;
        v7 = (char *)*((_QWORD *)a1 + 47);
      }
    }
    ExFreePoolWithTag(v7, 0);
  }
  operator delete(a1);
}
