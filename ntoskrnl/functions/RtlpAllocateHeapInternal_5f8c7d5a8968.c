void *__fastcall RtlpAllocateHeapInternal(_DWORD *HeapHandle, unsigned __int64 a2, unsigned int a3, __int16 a4)
{
  unsigned __int64 v4; // rbx
  unsigned int v6; // eax
  void *v7; // rdi
  int v9; // r14d
  unsigned __int64 v10; // r15
  int v11; // ebp
  unsigned __int64 v12; // rcx
  __int64 v13; // r15
  __int64 Heap; // rax
  int v15; // r9d
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+88h] [rbp+20h]

  LOWORD(v19) = a4;
  v4 = a2;
  if ( HeapHandle[4] == -857879331 )
  {
    if ( a2 > 0x20000 )
      return 0LL;
    v6 = RtlpHpConvertFlagsToSegmentFlags(a3);
    return (void *)RtlpHpVsContextAllocate(HeapHandle + 16, (unsigned int)v4, (unsigned int)v4, HeapHandle[5] | v6);
  }
  v9 = HeapHandle[29] | a3;
  v10 = 0LL;
  v19 = 0;
  v18 = 0LL;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL || !(unsigned int)RtlpHpCheckAllocationSizeLimit(a2, HeapHandle, HeapHandle + 94) )
    goto LABEL_21;
  v11 = HeapHandle[36];
  if ( v11 )
  {
    if ( (v9 & 0x3C000102) != 0 )
    {
      v11 = 0;
    }
    else
    {
      if ( (_WORD)v11 != 1
        || (int)((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, unsigned __int64 *))CLFS_LSN_NULL_EXT)(
                  HeapHandle,
                  0LL,
                  1LL,
                  &v18) < 0 )
      {
        goto LABEL_21;
      }
      v12 = (v18 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      v4 += v12 + 16;
      v18 = v12 + 16;
    }
  }
  v13 = 1LL;
  if ( v4 )
    v13 = v4;
  v10 = (v13 + 23) & 0xFFFFFFFFFFFFFFF0uLL;
  Heap = RtlpAllocateHeap((_DWORD)HeapHandle);
  v7 = (void *)Heap;
  if ( !Heap )
    goto LABEL_22;
  if ( !v11 )
    return v7;
  v16 = Heap;
  v4 -= v18;
  v17 = RtlpSetupExtendedBlock((_DWORD)HeapHandle, v9, Heap, v15, v18, v11);
  v7 = (void *)v17;
  if ( (_WORD)v11 == 1
    && (int)((__int64 (__fastcall *)(_DWORD *, __int64, __int64, __int64))CLFS_LSN_NULL_EXT)(HeapHandle, v17, 2LL, v16) >= 0 )
  {
    return v7;
  }
  RtlFreeHeap(HeapHandle, 0, v7);
LABEL_21:
  v7 = 0LL;
LABEL_22:
  if ( (v9 & 4) != 0 )
  {
    if ( v10 )
      v4 = v10;
    RtlpAllocateHeapRaiseException(v4);
  }
  return v7;
}
