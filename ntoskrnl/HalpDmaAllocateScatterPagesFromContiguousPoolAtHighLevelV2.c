/*
 * XREFs of HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x140513794
 * Callers:
 *     HalpDmaAllocateMapRegistersAtHighLevel @ 0x14050E094 (HalpDmaAllocateMapRegistersAtHighLevel.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14030CEE0 (RtlFindClearBitsAndSet.c)
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     HalpDmaIndexToTranslationEntry @ 0x1404540DE (HalpDmaIndexToTranslationEntry.c)
 */

__int64 __fastcall HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int *a4)
{
  int v4; // ebp
  ULONG v5; // ebx
  unsigned int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // r14
  ULONG ClearBitsAndSet; // ebx
  __int64 v13; // rax

  v4 = -1;
  v5 = 0;
  v6 = 0;
  v7 = 0LL;
  v8 = 0LL;
  while ( 1 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a2 + 24), 1u, v5);
    if ( ClearBitsAndSet == -1 )
      break;
    if ( ClearBitsAndSet != v4 )
    {
      if ( v4 == -1 )
        v4 = ClearBitsAndSet;
      v13 = HalpDmaIndexToTranslationEntry(a2, ClearBitsAndSet, 0LL);
      if ( (*(_QWORD *)(v13 + 48) & 0xFFFFFFFFFFFFF000uLL) != 0 )
      {
        if ( v7 )
          *(_QWORD *)(v8 + 8) = v13;
        else
          v7 = v13;
        ++v6;
        v8 = v13;
      }
      else
      {
        RtlClearBits(*(PRTL_BITMAP *)(a2 + 24), ClearBitsAndSet, 1u);
      }
      v5 = ClearBitsAndSet + 1;
      if ( v6 < a3 )
        continue;
    }
    *a4 = v6;
    return v7;
  }
  return 0LL;
}
