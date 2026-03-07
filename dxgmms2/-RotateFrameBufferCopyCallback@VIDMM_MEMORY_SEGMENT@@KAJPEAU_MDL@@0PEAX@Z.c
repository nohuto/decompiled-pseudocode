__int64 __fastcall VIDMM_MEMORY_SEGMENT::RotateFrameBufferCopyCallback(struct _MDL *a1, struct _MDL *a2, char *a3)
{
  __int64 v5; // rbp
  unsigned __int64 v7; // rdi
  unsigned __int64 *v8; // r14
  unsigned __int64 v9; // rbx
  __int64 LogicalAddress; // rax
  int v11; // eax
  unsigned int v12; // ebx
  unsigned __int64 ByteCount; // rbx
  struct _VIDMM_GLOBAL_ALLOC *v14; // rdx

  v5 = *(_QWORD *)(*((_QWORD *)a3 + 1) + 8LL);
  if ( (*(_BYTE *)(1616LL * (*(_DWORD *)(*(_QWORD *)a3 + 68LL) & 0x3F) + *(_QWORD *)(v5 + 40224) + 444) & 0x10) == 0 )
    return 3221225473LL;
  v7 = 0LL;
  v8 = (unsigned __int64 *)(a3 + 32);
  if ( !*(_BYTE *)(v5 + 40179) )
    goto LABEL_8;
  v9 = *v8;
  LogicalAddress = SysMmGetLogicalAddress(*(void *const *)(*(_QWORD *)a3 + 528LL));
  v7 = LogicalAddress;
  if ( LogicalAddress )
    v7 = v9 + LogicalAddress;
  v11 = SysMmMapIommuRange(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(v5 + 24) + 224LL), v7, a2, 0);
  v12 = v11;
  if ( v11 < 0 )
  {
    WdLogSingleEntry2(3LL, *(_QWORD *)a3, v11);
    return v12;
  }
  else
  {
LABEL_8:
    ByteCount = a2->ByteCount;
    VIDMM_GLOBAL::MemoryTransfer(
      (VIDMM_GLOBAL *)v5,
      *(struct _VIDMM_GLOBAL_ALLOC **)a3,
      ByteCount,
      *v8,
      0LL,
      0LL,
      a2,
      *((struct VIDMM_SEGMENT **)a3 + 1),
      (union _LARGE_INTEGER *)a3 + 2,
      0LL,
      *(struct _DXGK_TRANSFERFLAGS *)(a3 + 24));
    v14 = *(struct _VIDMM_GLOBAL_ALLOC **)a3;
    *v8 += ByteCount;
    VIDMM_GLOBAL::WaitForAllPagingEngines((VIDMM_GLOBAL *)v5, v14);
    if ( *(_BYTE *)(v5 + 40179) )
      SysMmUnmapIommuRange(*(struct SYSMM_ADAPTER **)(*(_QWORD *)(v5 + 24) + 224LL), v7, a2, 0);
    return 0LL;
  }
}
