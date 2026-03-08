/*
 * XREFs of ?TransferMemory@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N4@Z @ 0x1C00FA340
 * Callers:
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z @ 0x1C00FA934 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_MDL@@_N@Z.c)
 *     ?TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C00FB3F8 (-TransferToSystem@VIDMM_MEMORY_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EPEAU_VIDMM_LOCAL_ALLOC@@_.c)
 * Callees:
 *     ?AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00E06A8 (-AllocateTemporaryResourcesForAllocation@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@PEA_N@Z @ 0x1C00FA464 (-TransferMemoryFast@VIDMM_MEMORY_SEGMENT@@IEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_.c)
 *     ?TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_DIRECTION@@PEAVVIDMM_SEGMENT@@T_LARGE_INTEGER@@@Z @ 0x1C00FA698 (-TransferMemorySlow@VIDMM_MEMORY_SEGMENT@@IEAAXPEAU_VIDMM_GLOBAL_ALLOC@@W4_DXGK_MEMORY_TRANSFER_.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_MEMORY_SEGMENT::TransferMemory(
        VIDMM_GLOBAL **this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _DXGK_MEMORY_TRANSFER_DIRECTION a3,
        struct VIDMM_SEGMENT *a4,
        union _LARGE_INTEGER a5,
        bool *a6,
        bool *a7)
{
  int v11; // edi
  int TemporaryResourcesForAllocation; // eax

  v11 = -1073741823;
  if ( *((_DWORD *)a2 + 14) )
  {
    TemporaryResourcesForAllocation = VIDMM_GLOBAL::AllocateTemporaryResourcesForAllocation(this[1], a2);
    v11 = TemporaryResourcesForAllocation;
    if ( TemporaryResourcesForAllocation >= 0 )
    {
      v11 = VIDMM_MEMORY_SEGMENT::TransferMemoryFast((VIDMM_MEMORY_SEGMENT *)this, a2, a3, a4, a5, a6);
      if ( v11 < 0 )
      {
        VIDMM_MEMORY_SEGMENT::TransferMemorySlow((VIDMM_MEMORY_SEGMENT *)this, a2, a3, a4, a5);
        v11 = 0;
        *a6 = 1;
        if ( a3 == DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL )
          *a7 = 1;
      }
    }
    else if ( (*(_BYTE *)(1616LL * *((unsigned int *)this + 95) + *((_QWORD *)this[1] + 5028) + 444) & 0x10) != 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 9LL, a2, TemporaryResourcesForAllocation, 0LL);
    }
  }
  return (unsigned int)v11;
}
