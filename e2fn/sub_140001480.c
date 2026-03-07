__int64 __fastcall sub_140001480(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 Pool2; // rax
  __int64 v12; // r14
  __int64 v14; // r8
  void *v15; // rcx
  __int64 v16; // rax

  if ( !a3 || !a2 )
    return 3221225485LL;
  v6 = a1[3];
  v7 = v6 + a3;
  if ( a1[4] <= (unsigned __int64)(v6 + a3) )
  {
    _mm_lfence();
    v8 = a1[4];
    v9 = 64LL;
    if ( v8 <= 2 * v7 )
      v8 = 2 * v7;
    if ( v8 > 0x40 )
      v9 = v8;
    v10 = 2 * v9;
    if ( !is_mul_ok(v9, 2uLL) )
      v10 = -1LL;
    Pool2 = ExAllocatePool2(64LL, v10, 1802728562LL);
    v12 = Pool2;
    if ( !Pool2 )
      return 3221225495LL;
    v14 = a1[3];
    if ( v14 )
      sub_1400B6980(Pool2, a1[2], 2 * v14);
    sub_1400B6980(v12 + 2LL * a1[3], a2, 2 * a3);
    v15 = (void *)a1[2];
    if ( v15 )
      ExFreePool(v15);
    a1[3] = 0LL;
    a1[2] = v12;
    a1[4] = v9;
  }
  else
  {
    sub_1400B6980(a1[2] + 2 * v6, a2, 2 * a3);
  }
  v16 = a1[2];
  a1[3] = v7;
  *(_WORD *)(v16 + 2 * v7) = 0;
  return 0LL;
}
