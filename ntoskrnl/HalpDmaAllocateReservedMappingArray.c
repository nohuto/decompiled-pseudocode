/*
 * XREFs of HalpDmaAllocateReservedMappingArray @ 0x140B8DE04
 * Callers:
 *     HalpDmaAllocateMappingResources @ 0x140B6124C (HalpDmaAllocateMappingResources.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 *     HalpDmaAllocateReservedMapping @ 0x140B61370 (HalpDmaAllocateReservedMapping.c)
 */

__int64 __fastcall HalpDmaAllocateReservedMappingArray(__int64 a1, unsigned int a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdi
  struct _SLIST_ENTRY *ReservedMapping; // rax
  __int64 v8; // rax

  if ( ((unsigned __int8)&stru_140D18A60 & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  qword_140D18A70 = 0LL;
  stru_140D18A60 = 0LL;
  qword_140C70858 = HalpMmAllocCtxAlloc(a1, 8LL * (unsigned int)a1);
  v4 = qword_140C70858;
  if ( qword_140C70858 )
  {
    v5 = 0;
    if ( a2 )
    {
      v6 = 0LL;
      do
      {
        ReservedMapping = (struct _SLIST_ENTRY *)HalpDmaAllocateReservedMapping(v3);
        v4 = qword_140C70858;
        *(_QWORD *)(v6 + qword_140C70858) = ReservedMapping;
        if ( !ReservedMapping )
          break;
        RtlpInterlockedPushEntrySList(&stru_140D18A60, ReservedMapping);
        v4 = qword_140C70858;
        ++v5;
        v8 = *(_QWORD *)(v6 + qword_140C70858);
        v6 += 8LL;
        *(_DWORD *)(v8 + 28) = 1;
      }
      while ( v5 < a2 );
      if ( v5 )
      {
        dword_140D18A78 = v5;
        return 0LL;
      }
    }
    HalpMmAllocCtxFree(v3, v4);
  }
  return 3221225626LL;
}
