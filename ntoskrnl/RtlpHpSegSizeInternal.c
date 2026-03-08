/*
 * XREFs of RtlpHpSegSizeInternal @ 0x1405B47A8
 * Callers:
 *     RtlpHpSizeHeapInternal @ 0x1405B4430 (RtlpHpSizeHeapInternal.c)
 * Callees:
 *     RtlpHpLfhSubsegmentSizeBlock @ 0x1405B49D8 (RtlpHpLfhSubsegmentSizeBlock.c)
 *     RtlpHpVsChunkSize @ 0x1405B4FE4 (RtlpHpVsChunkSize.c)
 */

unsigned __int64 __fastcall RtlpHpSegSizeInternal(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int *a5)
{
  unsigned __int64 v6; // rdx
  int v9; // eax
  signed __int32 v11[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = (a2 & *(_QWORD *)a1) + ((a2 - (a2 & *(_QWORD *)a1)) >> 5 << *(_BYTE *)(a1 + 8));
  if ( a3 <= v6 )
  {
    if ( a5 )
    {
      v9 = *(_WORD *)(a2 + 8) & 1;
      if ( v9 )
        _InterlockedOr(v11, 0);
      *a5 = v9;
    }
    return ((unsigned __int64)*(unsigned __int8 *)(a2 + 31) << *(_BYTE *)(a1 + 8)) - *(unsigned int *)(a2 + 4);
  }
  else if ( (*(_BYTE *)(a2 + 24) & 0xC) == 8 )
  {
    return RtlpHpLfhSubsegmentSizeBlock(*(_QWORD *)(a1 + 24), v6, a3, a5);
  }
  else
  {
    return RtlpHpVsChunkSize(*(_QWORD *)(a1 + 32), a3, a3, a5);
  }
}
