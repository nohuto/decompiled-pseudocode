/*
 * XREFs of RtlpHpSegSizeInternal @ 0x1405952F8
 * Callers:
 *     RtlpHpSizeHeapInternal @ 0x140594D5C (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x140595388 (RtlpHpLfhSubsegmentSizeBlock.c)
 *     RtlpHpVsChunkSize @ 0x140595964 (RtlpHpVsChunkSize.c)
 */

unsigned __int64 __fastcall RtlpHpSegSizeInternal(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  unsigned __int64 v5; // r10
  int v8; // eax
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v5 = (a2 & *(_QWORD *)a1) + ((a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
  if ( a3 <= v5 )
  {
    if ( a5 )
    {
      v8 = *(_WORD *)(a2 + 8) & 1;
      if ( v8 )
        _InterlockedOr(v10, 0);
      *a5 = v8;
    }
    return ((unsigned __int64)*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 8)) - *(unsigned int *)(a2 + 4);
  }
  else if ( (*(_BYTE *)(a2 + 24) & 0xC) == 8 )
  {
    return RtlpHpLfhSubsegmentSizeBlock(*(_QWORD *)(a1 + 24), v5, a3, a5);
  }
  else
  {
    return RtlpHpVsChunkSize(*(_QWORD *)(a1 + 32), a3, a3, a5);
  }
}
