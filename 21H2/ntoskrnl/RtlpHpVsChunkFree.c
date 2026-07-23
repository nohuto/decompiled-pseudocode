/*
 * XREFs of RtlpHpVsChunkFree @ 0x14034AE90
 * Callers:
 *     RtlpHpVsContextFreeInternal @ 0x140349810 (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpVsSubsegmentCleanup @ 0x14023D958 (RtlpHpVsSubsegmentCleanup.c)
 *     RtlpHpVsChunkAlignSplit @ 0x140349680 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x140349940 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsChunkCoalesce @ 0x14034AC40 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14034AF90 (RtlpHpVsFreeChunkInsert.c)
 */

unsigned __int64 __fastcall RtlpHpVsChunkFree(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char a4,
        _QWORD *a5)
{
  _QWORD *v5; // r12
  unsigned int i; // r14d
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // ebp
  unsigned __int64 v14; // rax
  unsigned int v16; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v16 = 0;
  for ( i = 0; ; i = v13 )
  {
    v11 = RtlpHpVsChunkCoalesce(a1, a2, a3, &v16);
    v13 = v16;
    a3 = v11;
    if ( v16 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a2);
      return a2;
    }
    if ( v16 <= i || !(unsigned int)RtlpHpVsChunkDecommit(a1, a2, v11, a4, v5) )
      break;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((a3 + 32) & 0xFFF) != 0 )
  {
    v14 = RtlpHpVsChunkAlignSplit(v12, a2, a3);
    if ( v14 )
      RtlpHpVsFreeChunkInsert(a1, a2, v14);
  }
  RtlpHpVsFreeChunkInsert(a1, a2, a3);
  return 0LL;
}
