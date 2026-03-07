__int64 __fastcall sub_14007EAE0(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  void *v4; // rcx
  __int64 v5; // r12
  char *v6; // rbp
  int v8; // r14d
  char *v9; // rsi
  __int64 v10; // rax
  char *v11; // rdx
  void *v12; // rcx

  v2 = a2;
  if ( a2 )
  {
    v5 = 2 * a2;
    v6 = (char *)sub_14007E950((__int64)a1, 2 * a2);
    if ( !v6 )
      return 3221225495LL;
    if ( a1[1] )
    {
      if ( a1[2] < v2 )
        v2 = a1[2];
      v8 = 0;
      if ( v2 )
      {
        _mm_lfence();
        v9 = v6 + 16;
        do
        {
          v10 = a1[1];
          v11 = (char *)(v9 - v6 + v10);
          *((_OWORD *)v9 - 1) = *(_OWORD *)&v9[-16LL - (_QWORD)v6 + v10];
          if ( v9 != v11 )
            sub_1400011A8(v9, *((_QWORD *)v11 + 2), *((_QWORD *)v11 + 3));
          ++v8;
          v9 += 56;
        }
        while ( v8 < v2 );
      }
      v12 = (void *)a1[1];
      if ( v12 )
        sub_1400A639C(v12);
    }
    a1[3] = v5;
    a1[1] = v6;
  }
  else
  {
    v4 = (void *)a1[1];
    if ( v4 )
    {
      sub_1400A639C(v4);
      a1[1] = 0LL;
    }
    a1[3] = 0LL;
    a1[2] = 0LL;
  }
  return 0LL;
}
