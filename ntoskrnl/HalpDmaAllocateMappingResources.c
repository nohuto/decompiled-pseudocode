/*
 * XREFs of HalpDmaAllocateMappingResources @ 0x140B6124C
 * Callers:
 *     HalpDmaInit @ 0x140B60E78 (HalpDmaInit.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x1402A7240 (KeQueryMaximumProcessorCountEx.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     MmFreeMappingAddress @ 0x14086B720 (MmFreeMappingAddress.c)
 *     HalpDmaAllocateReservedMapping @ 0x140B61370 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140B8DE04 (HalpDmaAllocateReservedMappingArray.c)
 */

__int64 HalpDmaAllocateMappingResources()
{
  __int64 MaximumProcessorCount; // rdi
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // r8
  __int64 v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 ReservedMapping; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int ReservedMappingArray; // ebx
  __int64 v24; // rcx

  MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v1 = MaximumProcessorCount;
  qword_140C70850 = HalpMmAllocCtxAlloc(v2, 8 * MaximumProcessorCount);
  if ( !qword_140C70850 )
    return 3221225626LL;
  v4 = HalpMmAllocCtxAlloc(v3, 4144 * MaximumProcessorCount);
  v7 = v4;
  if ( !v4 )
  {
    v17 = qword_140C70850;
LABEL_14:
    HalpMmAllocCtxFree(v5, v17);
    return 3221225626LL;
  }
  if ( (_DWORD)MaximumProcessorCount )
  {
    v6 = (_QWORD *)qword_140C70850;
    v5 = v4 + 32;
    do
    {
      *(_QWORD *)v5 = 0LL;
      v8 = (_QWORD *)(v5 - 32);
      *(_DWORD *)(v5 + 12) = 0;
      *v8 = 0LL;
      *(_DWORD *)(v5 - 24) = 131128;
      *(_DWORD *)(v5 + 8) = 4096;
      v5 += 4144LL;
      *v6++ = v8;
      --v1;
    }
    while ( v1 );
  }
  qword_140D12B90 = 0LL;
  v9 = 4LL;
  if ( (unsigned int)MaximumProcessorCount <= 4 )
  {
    qword_140C70858 = HalpMmAllocCtxAlloc(v5, 8 * MaximumProcessorCount);
    if ( qword_140C70858 )
    {
      v11 = 0;
      if ( !(_DWORD)MaximumProcessorCount )
      {
LABEL_12:
        byte_140C70848 = 1;
        return 0LL;
      }
      v12 = 0LL;
      while ( 1 )
      {
        ReservedMapping = HalpDmaAllocateReservedMapping();
        v15 = qword_140C70858;
        *(_QWORD *)(v12 + qword_140C70858) = ReservedMapping;
        if ( !ReservedMapping )
          break;
        ++v11;
        v12 += 8LL;
        if ( v11 >= (unsigned int)MaximumProcessorCount )
          goto LABEL_12;
      }
      if ( v11 )
      {
        v18 = 0LL;
        v19 = v11;
        do
        {
          v20 = *(_QWORD *)(v18 + v15);
          MmFreeMappingAddress(*(PVOID *)(v20 + 16), 0x446C6148u);
          HalpMmAllocCtxFree(v21, v20);
          v15 = qword_140C70858;
          v18 += 8LL;
          --v19;
        }
        while ( v19 );
      }
      HalpMmAllocCtxFree(v14, v15);
      v9 = (unsigned int)MaximumProcessorCount;
      goto LABEL_21;
    }
    HalpMmAllocCtxFree(v10, qword_140C70850);
    v17 = v7;
    goto LABEL_14;
  }
LABEL_21:
  ReservedMappingArray = HalpDmaAllocateReservedMappingArray((unsigned int)MaximumProcessorCount, v9, v6);
  if ( ReservedMappingArray < 0 )
  {
    HalpMmAllocCtxFree(v22, qword_140C70850);
    HalpMmAllocCtxFree(v24, v7);
  }
  return (unsigned int)ReservedMappingArray;
}
