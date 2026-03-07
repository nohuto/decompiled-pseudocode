_QWORD *__fastcall sub_14000CF40(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned __int64 v7; // rdx
  int v8; // r8d
  __int64 v9; // rcx
  __int64 v10; // rax
  __int128 v11; // xmm1
  void *v12; // rcx
  _OWORD *v13; // rdx
  _OWORD *i; // rcx
  __int64 v15; // rax
  __int128 v16; // xmm1

  v2 = 0LL;
  *a1 = off_1400D4D58;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  v5 = (__int64)(a2[1] - *a2) >> 5;
  if ( v5 )
  {
    v6 = sub_14000D244(a1, 2 * v5);
    if ( v6 )
    {
      if ( a1[1] )
      {
        v7 = v5;
        v8 = 0;
        if ( a1[2] < v5 )
          v7 = a1[2];
        if ( v7 )
        {
          v9 = 0LL;
          do
          {
            v10 = a1[1];
            ++v8;
            *(_OWORD *)(v9 + v6) = *(_OWORD *)(v9 + v10);
            v11 = *(_OWORD *)(v9 + v10 + 16);
            v9 += 32LL;
            *(_OWORD *)(v9 + v6 - 16) = v11;
          }
          while ( v8 < v7 );
        }
        v12 = (void *)a1[1];
        if ( v12 )
          ExFreePool(v12);
      }
      a1[3] = 2 * v5;
      a1[1] = v6;
      a1[2] = v5;
    }
  }
  v13 = (_OWORD *)a2[1];
  for ( i = (_OWORD *)*a2; i != v13; i += 2 )
  {
    v15 = a1[1];
    *(_OWORD *)(v2 + v15) = *i;
    v2 += 32LL;
    v16 = i[1];
    *(_OWORD *)(v2 + v15 - 16) = v16;
  }
  return a1;
}
