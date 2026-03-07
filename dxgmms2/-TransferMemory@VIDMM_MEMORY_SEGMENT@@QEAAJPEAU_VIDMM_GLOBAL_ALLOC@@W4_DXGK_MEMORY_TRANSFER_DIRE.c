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
