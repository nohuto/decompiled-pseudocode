/*
 * XREFs of HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2 @ 0x140513708
 * Callers:
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x1404FF010 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14030CEE0 (RtlFindClearBitsAndSet.c)
 *     HalpDmaLinkContiguousTranslations @ 0x140454118 (HalpDmaLinkContiguousTranslations.c)
 */

__int64 __fastcall HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2(__int64 a1, __int64 a2, ULONG a3)
{
  int v3; // edi
  ULONG v5; // r8d
  ULONG ClearBitsAndSet; // eax
  ULONG v8; // ebx
  __int64 result; // rax
  __int64 v10; // r8
  ULONG i; // edx

  v3 = -1;
  v5 = 0;
LABEL_2:
  ClearBitsAndSet = RtlFindClearBitsAndSet(*(PRTL_BITMAP *)(a2 + 24), a3, v5);
  v8 = ClearBitsAndSet;
  if ( ClearBitsAndSet == -1 || ClearBitsAndSet == v3 )
    return 0LL;
  if ( v3 == -1 )
    v3 = ClearBitsAndSet;
  result = HalpDmaLinkContiguousTranslations(a2, ClearBitsAndSet, a3);
  v10 = result;
  for ( i = 0; i < a3; ++i )
  {
    if ( (*(_QWORD *)(v10 + 48) & 0xFFFFFFFFFFFFF000uLL) == 0 )
    {
      v5 = v8 + i + 1;
      goto LABEL_2;
    }
    v10 = *(_QWORD *)(v10 + 8);
  }
  return result;
}
