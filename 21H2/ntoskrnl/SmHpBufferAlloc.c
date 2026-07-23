/*
 * XREFs of SmHpBufferAlloc @ 0x140240754
 * Callers:
 *     SmHpChunkAlloc @ 0x14028822C (SmHpChunkAlloc.c)
 * Callees:
 *     SmBinaryArrayGrow @ 0x140240880 (SmBinaryArrayGrow.c)
 *     SmHpBufferUpdateFullness @ 0x1402882B8 (SmHpBufferUpdateFullness.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SmHpBufferAlloc(_DWORD *a1)
{
  _QWORD *PoolWithTag; // rsi
  __int64 v3; // rdx
  __int64 v4; // rbx
  _WORD *v5; // r9
  __int64 v6; // r8
  _WORD *v7; // rdx
  unsigned __int64 i; // rcx
  __int64 v10; // rcx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x42436D73u);
  if ( !PoolWithTag )
    return 0LL;
  v3 = (unsigned int)a1[136];
  if ( (_DWORD)v3 == -1 )
  {
    if ( a1[64] > a1[65] )
    {
      v4 = 0LL;
      goto LABEL_10;
    }
    v4 = SmBinaryArrayGrow(a1);
    if ( !v4 )
      goto LABEL_10;
    LODWORD(v3) = a1[64];
    a1[64] = v3 + 1;
  }
  else
  {
    _BitScanReverse((unsigned int *)&v10, v3);
    v4 = *(_QWORD *)&a1[2 * v10] + 16 * (v3 ^ (unsigned int)(1 << v10));
    a1[136] = *(_DWORD *)(v4 + 8);
  }
  v5 = (_WORD *)(v4 + 8);
  *(_OWORD *)PoolWithTag = 0LL;
  PoolWithTag[2] = 0LL;
  v6 = 0LL;
  *((_DWORD *)PoolWithTag + 4) = v3;
  PoolWithTag[1] = PoolWithTag;
  *PoolWithTag = PoolWithTag;
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_QWORD *)v4 = PoolWithTag;
  v7 = (_WORD *)((char *)PoolWithTag + (unsigned int)a1[70]);
  for ( i = (unsigned __int64)v7 + (unsigned int)a1[68];
        i <= (unsigned __int64)(PoolWithTag + 512);
        i += (unsigned int)a1[68] )
  {
    LOWORD(v6) = v6 + 1;
    *v5 = (_WORD)v7 - (_WORD)PoolWithTag;
    v5 = v7;
    v7 = (_WORD *)i;
  }
  *v5 = -1;
  SmHpBufferUpdateFullness(a1, v4, v6);
  PoolWithTag = 0LL;
LABEL_10:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return v4;
}
