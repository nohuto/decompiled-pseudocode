__int64 __fastcall SmHpChunkFree(_DWORD *a1, unsigned __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rcx
  _WORD *v5; // rdi
  __int64 result; // rax
  int v7; // ecx

  v3 = *(unsigned int *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _BitScanReverse((unsigned int *)&v4, v3);
  v5 = (_WORD *)(*(_QWORD *)&a1[2 * v4] + 16 * (v3 ^ (unsigned int)(1 << v4)));
  *(_WORD *)a2 = v5[4];
  v5[4] = a2 - *v5;
  result = SmHpBufferUpdateFullness((__int64)a1, (__int64)v5, 1);
  v7 = (unsigned __int16)v5[5];
  if ( v7 == a1[137] )
  {
    result = (unsigned int)(a1[140] - v7);
    if ( (unsigned int)result >= a1[139] )
      result = SmHpBufferCleanup((__int64)a1, v5);
  }
  --a1[141];
  return result;
}
