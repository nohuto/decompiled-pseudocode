_QWORD *__fastcall sub_14007E358(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdi
  _QWORD *v4; // rsi
  unsigned __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rbp
  unsigned __int64 v9; // r15
  int v10; // r12d
  __int64 v11; // r13
  _QWORD *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  void *v15; // rcx
  _OWORD *v16; // rbp
  _OWORD *v17; // rsi
  _OWORD *v18; // r14
  __int64 v19; // rax
  _QWORD *v20; // rcx

  v2 = 0LL;
  *a1 = off_1400D4D60;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = a2;
  a1[3] = 0LL;
  v5 = (a2[1] - *a2) / 56LL;
  if ( v5 )
  {
    v6 = 2 * v5;
    v7 = sub_14007E950(a1, 2 * v5);
    v8 = v7;
    if ( v7 )
    {
      if ( a1[1] )
      {
        v9 = v5;
        v10 = 0;
        if ( a1[2] < v5 )
          v9 = a1[2];
        if ( v9 )
        {
          _mm_lfence();
          v11 = -16 - v7;
          v12 = (_QWORD *)(v7 + 16);
          do
          {
            v13 = a1[1];
            v14 = (__int64)v12 + v11 + v13 + 16;
            *((_OWORD *)v12 - 1) = *(_OWORD *)((char *)v12 + v11 + v13);
            if ( v12 != (_QWORD *)v14 )
              sub_1400011A8(v12, *(_QWORD *)(v14 + 16), *(_QWORD *)(v14 + 24));
            ++v10;
            v12 += 7;
          }
          while ( v10 < v9 );
          v4 = a2;
          v6 = 2 * v5;
        }
        v15 = (void *)a1[1];
        if ( v15 )
          sub_1400A639C(v15);
      }
      a1[3] = v6;
      a1[1] = v8;
      a1[2] = v5;
    }
  }
  v16 = (_OWORD *)v4[1];
  v17 = (_OWORD *)*v4;
  if ( v17 != v16 )
  {
    v18 = v17 + 2;
    do
    {
      v19 = a1[1];
      *(_OWORD *)(v2 + v19) = *v17;
      v20 = (_QWORD *)(v2 + v19 + 16);
      if ( v20 != (_QWORD *)(v18 - 1) )
        sub_1400011A8(v20, *(_QWORD *)v18, *((_QWORD *)v18 + 1));
      v2 += 56LL;
      v17 = (_OWORD *)((char *)v17 + 56);
      v18 = (_OWORD *)((char *)v18 + 56);
    }
    while ( v17 != v16 );
  }
  return a1;
}
