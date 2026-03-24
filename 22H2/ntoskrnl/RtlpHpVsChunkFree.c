/*
 * XREFs of RtlpHpVsChunkFree @ 0x1402C07D0
 * Callers:
 *     RtlpHpVsContextFreeInternal @ 0x1402BF150 (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpVsChunkAlignSplit @ 0x1402BEFC0 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpVsChunkDecommit @ 0x1402BF280 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsChunkCoalesce @ 0x1402C0580 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsFreeChunkInsert @ 0x1402C08D0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x140318BD8 (RtlpHpVsSubsegmentCleanup.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(__int64 a1, __int64 a2, unsigned __int64 a3, char a4, _QWORD *a5)
{
  _QWORD *v5; // r12
  unsigned int i; // r14d
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebp
  unsigned int v17; // [rsp+68h] [rbp+10h] BYREF

  v5 = a5;
  v17 = 0;
  for ( i = 0; ; i = v15 )
  {
    v11 = RtlpHpVsChunkCoalesce(a1, a2, a3, &v17);
    v15 = v17;
    a3 = v11;
    if ( v17 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a2, v13, v14);
      return a2;
    }
    if ( v17 <= i || !(unsigned int)RtlpHpVsChunkDecommit(a1, a2, v11, a4, v5) )
      break;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((a3 + 32) & 0xFFF) != 0 )
  {
    if ( RtlpHpVsChunkAlignSplit(v12, a2, a3) )
      RtlpHpVsFreeChunkInsert(a1, a2);
  }
  RtlpHpVsFreeChunkInsert(a1, a2);
  return 0LL;
}
