char *__fastcall SmBinaryArrayGrow(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  unsigned int v4; // ecx
  unsigned int v5; // r15d
  char *v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbp
  char *Pool2; // rax

  v2 = 0LL;
  v3 = a1;
  _BitScanReverse((unsigned int *)&a1, a2);
  v5 = a2 ^ (1 << v4);
  if ( v4 < 0x20 )
  {
    v6 = *(char **)(v3 + 8 * a1);
    v7 = (unsigned int)a1;
    if ( v6 )
      return &v6[16 * v5];
    v8 = (unsigned int)(16 * (1 << a1));
    Pool2 = (char *)ExAllocatePool2(64LL, v8, 1094872435LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      memset(Pool2, 0, (unsigned int)v8);
      *(_QWORD *)(v3 + 8 * v7) = v6;
      return &v6[16 * v5];
    }
  }
  return (char *)v2;
}
