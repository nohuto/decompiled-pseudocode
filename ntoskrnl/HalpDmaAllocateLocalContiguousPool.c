/*
 * XREFs of HalpDmaAllocateLocalContiguousPool @ 0x140930FF0
 * Callers:
 *     HalpDmaAllocateChildAdapterV2 @ 0x140821840 (HalpDmaAllocateChildAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x140822570 (HalpDmaAllocateChildAdapterV3.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     RtlSetAllBits @ 0x14028BD00 (RtlSetAllBits.c)
 *     MmFreePagesFromMdl @ 0x1402C0DB0 (MmFreePagesFromMdl.c)
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14039839C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     MmFreeContiguousMemory @ 0x1403BD6E0 (MmFreeContiguousMemory.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPool @ 0x140452D5A (HalpDmaAllocateContiguousPagesFromContiguousPool.c)
 *     HalpDmaAllocateContiguousMemory @ 0x14050DFA0 (HalpDmaAllocateContiguousMemory.c)
 *     HalpDmaReturnPageToSource @ 0x14050F064 (HalpDmaReturnPageToSource.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpDmaAllocateLocalContiguousPool(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // esi
  RTL_BITMAP *v5; // rax
  RTL_BITMAP *v6; // rbx
  char v8; // r15
  ULONG v9; // eax
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  bool v12; // zf
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rcx
  PVOID v16; // rbx
  __int64 v17; // r13
  void *v18; // rax
  __int64 v19; // rcx
  void *v20; // r12
  unsigned __int64 QuadPart; // r8
  __int64 v22; // rcx
  struct _MDL *v23; // rsi
  __int64 v24; // rcx
  __int64 ContiguousPagesFromContiguousPool; // rbx
  ULONG v26; // eax
  __int64 v27; // rdx
  _QWORD *v28; // r12
  unsigned __int64 v29; // r13
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rbx
  unsigned __int64 v33; // rbx
  PVOID BaseAddress; // [rsp+30h] [rbp-18h] BYREF
  PHYSICAL_ADDRESS v35; // [rsp+38h] [rbp-10h]
  int v36; // [rsp+90h] [rbp+48h]
  ULONG v37; // [rsp+90h] [rbp+48h]
  ULONG NumberToClear; // [rsp+98h] [rbp+50h]
  PMDL MemoryDescriptorList; // [rsp+A0h] [rbp+58h] BYREF
  PHYSICAL_ADDRESS v40; // [rsp+A8h] [rbp+60h] BYREF

  BaseAddress = 0LL;
  v40.QuadPart = 0LL;
  v2 = a2;
  MemoryDescriptorList = 0LL;
  v3 = (a2 + 31) & 0xFFFFFFE0;
  v5 = (RTL_BITMAP *)HalpMmAllocCtxAlloc(a1, ((unsigned __int64)v3 >> 3) + 16);
  v6 = v5;
  if ( !v5 )
    return 3221225626LL;
  v5->SizeOfBitMap = v3;
  v5->Buffer = &v5[1].SizeOfBitMap;
  RtlSetAllBits(v5);
  *(_QWORD *)(a1 + 24) = v6;
  v8 = 1;
LABEL_4:
  v9 = HalpDmaAllocateContiguousMemory(a1, v2, &BaseAddress, &v40, &MemoryDescriptorList);
  v11 = v9;
  NumberToClear = v9;
  if ( !v9 )
    goto LABEL_18;
  v12 = *(_BYTE *)(a1 + 153) == 0;
  v35 = v40;
  if ( v12 )
  {
    v10 = (unsigned __int64)v40.QuadPart >> 16;
    v13 = ((((unsigned __int64)v9 << 12) + v40.QuadPart - 1) >> 16) - ((unsigned __int64)v40.QuadPart >> 16);
  }
  else
  {
    v13 = 0;
  }
  v14 = HalpMmAllocCtxAlloc(v10, 24LL);
  v16 = BaseAddress;
  v17 = v14;
  if ( !v14 )
  {
LABEL_13:
    v23 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      if ( v16 )
        MmUnmapLockedPages(v16, MemoryDescriptorList);
      MmFreePagesFromMdl(v23);
      ExFreePoolWithTag(v23, 0);
    }
    else
    {
      MmFreeContiguousMemory(v16);
    }
LABEL_18:
    ContiguousPagesFromContiguousPool = HalpDmaAllocateContiguousPagesFromContiguousPool(a1);
    if ( !ContiguousPagesFromContiguousPool )
      goto LABEL_19;
    v11 = NumberToClear;
    v26 = 0;
    v27 = 0LL;
    v28 = 0LL;
    v24 = 0LL;
    v29 = ContiguousPagesFromContiguousPool;
    while ( 1 )
    {
      v37 = v26;
      if ( v26 >= NumberToClear )
      {
        RtlClearBits(*(PRTL_BITMAP *)(a1 + 24), 0, NumberToClear);
        goto LABEL_43;
      }
      if ( ContiguousPagesFromContiguousPool == v29 || v27 != ContiguousPagesFromContiguousPool - 72 )
      {
        v30 = (_QWORD *)HalpMmAllocCtxAlloc(v24, 24LL);
        v24 = (__int64)v30;
        if ( !v30 )
        {
          if ( v28 )
          {
            v31 = *(_QWORD **)(a1 + 48);
            if ( v31 )
            {
              do
              {
                v32 = (_QWORD *)*v31;
                HalpMmAllocCtxFree(v24, (__int64)v31);
                v31 = v32;
              }
              while ( v32 );
            }
          }
          if ( NumberToClear )
          {
            do
            {
              v33 = *(_QWORD *)(v29 + 8);
              HalpDmaReturnPageToSource(a1, v29);
              v29 = v33;
              --v11;
            }
            while ( v11 );
          }
LABEL_19:
          if ( v2 <= 1 )
          {
            HalpMmAllocCtxFree(v24, *(_QWORD *)(a1 + 24));
            return 3221225626LL;
          }
          v2 >>= 1;
          goto LABEL_4;
        }
        if ( v28 )
          *v28 = v30;
        else
          *(_QWORD *)(a1 + 48) = v30;
        *v30 = 0LL;
        v28 = v30;
        v30[1] = 0LL;
        v30[2] = ContiguousPagesFromContiguousPool;
      }
      ++*(_DWORD *)(v24 + 8);
      v27 = ContiguousPagesFromContiguousPool;
      *(_QWORD *)(ContiguousPagesFromContiguousPool + 48) &= 0xFFFFFFFFFFFFFFF3uLL;
      ContiguousPagesFromContiguousPool = *(_QWORD *)(ContiguousPagesFromContiguousPool + 8);
      v26 = v37 + 1;
    }
  }
  v36 = v13 + v11;
  v18 = (void *)HalpMmAllocCtxAlloc(v15, 72LL * (unsigned int)(v13 + v11));
  v20 = v18;
  if ( !v18 )
  {
LABEL_12:
    HalpMmAllocCtxFree(v19, v17);
    goto LABEL_13;
  }
  *(_QWORD *)v17 = 0LL;
  *(_DWORD *)(v17 + 12) = 0;
  memset(v18, 0, 72 * v11);
  QuadPart = v35.QuadPart;
  *(_DWORD *)(v17 + 8) = v36;
  *(_QWORD *)(v17 + 16) = v20;
  *(_DWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 48) = v17;
  *(_QWORD *)(a1 + 64) = v17;
  if ( !HalpDmaCommitContiguousMapBuffers(a1, (__int64)v16, QuadPart, v11) )
  {
    HalpMmAllocCtxFree(v22, *(_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL));
    goto LABEL_12;
  }
  if ( MemoryDescriptorList )
  {
    *(_QWORD *)(a1 + 328) = MemoryDescriptorList;
    *(_QWORD *)(a1 + 336) = v16;
  }
  else
  {
    *(_QWORD *)(a1 + 328) = v16;
    v8 = 0;
  }
  *(_BYTE *)(a1 + 344) = v8;
LABEL_43:
  *(_DWORD *)(a1 + 232) = v11;
  return 0LL;
}
