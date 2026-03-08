/*
 * XREFs of HalpDmaInitializeMasterAdapter @ 0x140B60FAC
 * Callers:
 *     HalpDmaInit @ 0x140B60E78 (HalpDmaInit.c)
 * Callees:
 *     RtlSetAllBits @ 0x14028BD00 (RtlSetAllBits.c)
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpDmaCommitContiguousMapBuffers @ 0x14039839C (HalpDmaCommitContiguousMapBuffers.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140B610F0 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140B8DED8 (HalpDmaFreeTranslationBuffer.c)
 */

__int64 __fastcall HalpDmaInitializeMasterAdapter(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char a7)
{
  unsigned int v8; // ebp
  SIZE_T v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 TranslationBuffer; // rax
  __int64 v17; // rax
  void *v18; // rbp
  __int64 v20; // rdx

  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 168) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 160;
  v8 = (a6 + 31) & 0xFFFFFFE0;
  *(_QWORD *)(a1 + 184) = a1 + 176;
  *(_QWORD *)(a1 + 176) = a1 + 176;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v10 = a3;
  *(_DWORD *)(a1 + 16) = 1634550856;
  *(_BYTE *)(a1 + 152) = 1;
  *(_BYTE *)(a1 + 153) = a7;
  v12 = HalpMmAllocCtxAlloc(a1, (unsigned __int64)v8 >> 3);
  if ( v12 )
  {
    v13 = HalpMmAllocCtxAlloc(v11, 16LL);
    *(_QWORD *)(a1 + 24) = v13;
    if ( v13 )
    {
      *(_DWORD *)v13 = v8;
      *(_QWORD *)(v13 + 8) = v12;
      RtlSetAllBits(*(PRTL_BITMAP *)(a1 + 24));
      if ( !(_DWORD)v10 )
        return 0LL;
      TranslationBuffer = HalpDmaAllocateTranslationBuffer(v15, a1 + 64);
      *(_QWORD *)(a1 + 48) = TranslationBuffer;
      if ( TranslationBuffer )
      {
        v17 = MmMapIoSpaceEx(a2, (unsigned int)v10, 4u);
        v18 = (void *)v17;
        if ( v17 )
        {
          if ( HalpDmaCommitContiguousMapBuffers(a1, v17, a2, ((unsigned int)v10 >> 12) + ((v10 & 0xFFF) != 0)) )
          {
            *(_DWORD *)(a1 + 212) = (unsigned int)v10 >> 13;
            return 0LL;
          }
          MmUnmapIoSpace(v18, v10);
        }
        HalpDmaFreeTranslationBuffer(*(_QWORD *)(a1 + 48));
      }
    }
    HalpMmAllocCtxFree(v14, v12);
  }
  v20 = *(_QWORD *)(a1 + 24);
  if ( v20 )
    HalpMmAllocCtxFree(v11, v20);
  return 3221225626LL;
}
