/*
 * XREFs of SmHpBufferAlloc @ 0x1405C7CF4
 * Callers:
 *     SmHpChunkAlloc @ 0x1405C811C (SmHpChunkAlloc.c)
 * Callees:
 *     SmBinaryArrayGrow @ 0x1405C7B8C (SmBinaryArrayGrow.c)
 *     SmHpBufferUpdateFullness @ 0x1405C7FD0 (SmHpBufferUpdateFullness.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

char *__fastcall SmHpBufferAlloc(_DWORD *a1)
{
  _QWORD *Pool2; // rsi
  char *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // edx
  _WORD *v7; // r9
  __int64 v8; // r8
  _WORD *v9; // rdx
  unsigned __int64 i; // rcx

  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 4096LL, 1111715187LL);
  if ( !Pool2 )
    goto LABEL_2;
  v4 = (unsigned int)a1[136];
  if ( (_DWORD)v4 != -1 )
  {
    _BitScanReverse((unsigned int *)&v5, v4);
    v3 = (char *)(*(_QWORD *)&a1[2 * v5] + 16 * (v4 ^ (unsigned int)(1 << v5)));
    a1[136] = *((_DWORD *)v3 + 2);
    goto LABEL_8;
  }
  v6 = a1[64];
  if ( v6 > a1[65] )
  {
LABEL_2:
    v3 = 0LL;
    goto LABEL_12;
  }
  v3 = SmBinaryArrayGrow((__int64)a1, v6);
  if ( v3 )
  {
    LODWORD(v4) = a1[64];
    a1[64] = v4 + 1;
LABEL_8:
    v7 = v3 + 8;
    *(_OWORD *)Pool2 = 0LL;
    Pool2[2] = 0LL;
    v8 = 0LL;
    *((_DWORD *)Pool2 + 4) = v4;
    Pool2[1] = Pool2;
    *Pool2 = Pool2;
    *((_QWORD *)v3 + 1) = 0LL;
    *(_QWORD *)v3 = Pool2;
    v9 = (_WORD *)((char *)Pool2 + (unsigned int)a1[70]);
    for ( i = (unsigned __int64)v9 + (unsigned int)a1[68]; i <= (unsigned __int64)(Pool2 + 512); i += (unsigned int)a1[68] )
    {
      LOWORD(v8) = v8 + 1;
      *v7 = (_WORD)v9 - (_WORD)Pool2;
      v7 = v9;
      v9 = (_WORD *)i;
    }
    *v7 = -1;
    SmHpBufferUpdateFullness(a1, v3, v8);
    Pool2 = 0LL;
  }
LABEL_12:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  return v3;
}
