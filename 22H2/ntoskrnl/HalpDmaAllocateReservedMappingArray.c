/*
 * XREFs of HalpDmaAllocateReservedMappingArray @ 0x140A8C8F4
 * Callers:
 *     HalpDmaAllocateMappingResources @ 0x140A65DA8 (HalpDmaAllocateMappingResources.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     HalpMmAllocCtxFree @ 0x140378ED0 (HalpMmAllocCtxFree.c)
 *     HalpMmAllocCtxAlloc @ 0x14037C4B8 (HalpMmAllocCtxAlloc.c)
 *     RtlpInterlockedPushEntrySList @ 0x140406FF0 (RtlpInterlockedPushEntrySList.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A65ECC (HalpDmaAllocateReservedMapping.c)
 */

__int64 __fastcall HalpDmaAllocateReservedMappingArray(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  _SLIST_ENTRY *ReservedMapping; // rax
  __int64 v8; // rax

  if ( ((unsigned __int8)&stru_140CF6860 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  qword_140CF6870 = 0LL;
  stru_140CF6860 = 0LL;
  qword_140C53F28 = HalpMmAllocCtxAlloc(a1, 8LL * (unsigned int)a1);
  v4 = qword_140C53F28;
  if ( qword_140C53F28 )
  {
    v5 = 0;
    if ( a2 )
    {
      v6 = 0LL;
      do
      {
        ReservedMapping = (_SLIST_ENTRY *)HalpDmaAllocateReservedMapping(v3);
        v4 = qword_140C53F28;
        *(_QWORD *)(v6 + qword_140C53F28) = ReservedMapping;
        if ( !ReservedMapping )
          break;
        RtlpInterlockedPushEntrySList(&stru_140CF6860, ReservedMapping);
        v4 = qword_140C53F28;
        ++v5;
        v8 = *(_QWORD *)(v6 + qword_140C53F28);
        v6 += 8LL;
        *(_DWORD *)(v8 + 28) = 1;
      }
      while ( v5 < a2 );
      if ( v5 )
      {
        dword_140CF6878 = v5;
        return 0LL;
      }
    }
    HalpMmAllocCtxFree(v3, v4);
  }
  return 3221225626LL;
}
