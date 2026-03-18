/*
 * XREFs of RtlpHpVsChunkFree @ 0x14036E290
 * Callers:
 *     RtlpHpVsContextFreeInternal @ 0x14036E174 (RtlpHpVsContextFreeInternal.c)
 * Callees:
 *     RtlpHpVsChunkCoalesce @ 0x14034D5C0 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkAlignSplit @ 0x14034ED40 (RtlpHpVsChunkAlignSplit.c)
 *     RtlpHpVsFreeChunkInsert @ 0x14034F9E0 (RtlpHpVsFreeChunkInsert.c)
 *     RtlpHpVsChunkDecommit @ 0x14036E388 (RtlpHpVsChunkDecommit.c)
 *     RtlpHpVsSubsegmentCleanup @ 0x14036E8E0 (RtlpHpVsSubsegmentCleanup.c)
 */

__int64 __fastcall RtlpHpVsChunkFree(__int64 a1, __int64 a2, _WORD *a3, int a4, __int64 a5)
{
  __int64 v6; // r12
  unsigned int i; // r14d
  __int64 v11; // rcx
  _WORD *v12; // rax
  unsigned int v14; // [rsp+58h] [rbp+10h] BYREF

  v14 = 0;
  v6 = a5;
  for ( i = 0; ; i = v14 )
  {
    a3 = (_WORD *)RtlpHpVsChunkCoalesce(a1, a2, (unsigned __int64)a3, &v14);
    if ( v14 == *(unsigned __int16 *)(a2 + 32) )
    {
      RtlpHpVsSubsegmentCleanup(a1, a2);
      return a2;
    }
    if ( v14 <= i || !(unsigned int)RtlpHpVsChunkDecommit(a1, a2, (_DWORD)a3, a4, v6) )
      break;
  }
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((unsigned __int64)(a3 + 16) & 0xFFF) != 0 )
  {
    v12 = (_WORD *)RtlpHpVsChunkAlignSplit(v11, a2, (__int64)a3);
    if ( v12 )
      RtlpHpVsFreeChunkInsert((unsigned __int64 *)a1, a2, v12);
  }
  RtlpHpVsFreeChunkInsert((unsigned __int64 *)a1, a2, a3);
  return 0LL;
}
