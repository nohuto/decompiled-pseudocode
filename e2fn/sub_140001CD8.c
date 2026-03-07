void __fastcall sub_140001CD8(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rbp
  __int64 v6; // rax
  __int64 Pool2; // rax
  __int64 v8; // r14
  __int64 v9; // r8
  void *v10; // rcx
  __int64 v11; // rax

  if ( a1[4] >= a2 )
  {
    if ( a1[3] > a2 )
    {
      v11 = a1[2];
      a1[3] = a2;
      *(_WORD *)(v11 + 2 * a2) = 0;
    }
  }
  else
  {
    _mm_lfence();
    v4 = a1[4];
    v5 = 64LL;
    if ( v4 <= 2 * a2 + 2 )
      v4 = 2 * a2 + 2;
    if ( v4 > 0x40 )
      v5 = v4;
    v6 = 2 * v5;
    if ( !is_mul_ok(v5, 2uLL) )
      v6 = -1LL;
    Pool2 = ExAllocatePool2(64LL, v6, 1802728562LL);
    v8 = Pool2;
    if ( Pool2 )
    {
      v9 = a1[3];
      a1[4] = v5;
      if ( v9 )
      {
        sub_1400B6980(Pool2, a1[2], 2 * v9);
        *(_WORD *)(v8 + 2LL * a1[3]) = 0;
      }
      *(_WORD *)(v8 + 2LL * a1[4] - 2) = 0;
      v10 = (void *)a1[2];
      if ( v10 )
        ExFreePool(v10);
      a1[3] = a2;
      a1[2] = v8;
    }
  }
}
