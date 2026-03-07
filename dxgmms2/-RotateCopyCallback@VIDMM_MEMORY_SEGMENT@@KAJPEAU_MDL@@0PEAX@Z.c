// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateCopyCallback(struct _MDL *a1, struct _MDL *a2, char *a3)
{
  __int64 v5; // rdi
  unsigned __int64 ByteCount; // r15
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  __int64 v10; // rbp
  __int64 LogicalAddress; // rax
  int v12; // eax
  unsigned int v13; // ebp
  struct _VIDMM_GLOBAL_ALLOC *v14; // rdx

  v5 = *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL);
  if ( (*(_BYTE *)(1616LL * (*(_DWORD *)(*(_QWORD *)a3 + 68LL) & 0x3F) + *(_QWORD *)(v5 + 40224) + 444) & 0x10) == 0 )
    return 3221225473LL;
  ByteCount = a1->ByteCount;
  if ( VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)v5) )
  {
    *((_QWORD *)a3 + 4) += ByteCount;
  }
  else
  {
    v9 = 0LL;
    if ( *(_BYTE *)(v5 + 40179) )
    {
      v10 = *((_QWORD *)a3 + 4);
      LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(v8 + 528));
      v9 = LogicalAddress;
      if ( LogicalAddress )
        v9 = v10 + LogicalAddress;
      v12 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(v5 + 24) + 224LL), v9, a1, 0);
      v13 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry2(3LL, *(_QWORD *)a3, v12);
        return v13;
      }
    }
    VIDMM_GLOBAL::MemoryTransfer(
      (VIDMM_GLOBAL *)v5,
      *(struct _VIDMM_GLOBAL_ALLOC **)a3,
      ByteCount,
      *((_QWORD *)a3 + 4),
      *((struct VIDMM_SEGMENT **)a3 + 1),
      (union _LARGE_INTEGER *)a3 + 2,
      0LL,
      0LL,
      0LL,
      a1,
      *(struct _DXGK_TRANSFERFLAGS *)(a3 + 24));
    v14 = *(struct _VIDMM_GLOBAL_ALLOC **)a3;
    *((_QWORD *)a3 + 4) += ByteCount;
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)v5, v14);
    if ( VIDMM_GLOBAL::IsTdrPending((VIDMM_GLOBAL *)v5)
      && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 744LL) + 3036LL) & 4) != 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 4LL, 0LL, 10LL, 0LL);
    }
    if ( *(_BYTE *)(v5 + 40179) )
      SysMmUnmapIommuRange(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(v5 + 24) + 224LL), v9, a1, 0);
  }
  return 0LL;
}
