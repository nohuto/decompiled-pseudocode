__int64 __fastcall sub_140092C34(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  void *v4; // rcx
  __int64 v5; // rbp
  __int64 v6; // rsi
  int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rax
  void *v11; // rcx

  v2 = a2;
  if ( a2 )
  {
    v5 = 2 * a2;
    v6 = sub_140080A0C((__int64)a1, 2 * a2);
    if ( !v6 )
      return 3221225495LL;
    if ( a1[1] )
    {
      if ( a1[2] < v2 )
        v2 = a1[2];
      v8 = 0;
      if ( v2 )
      {
        v9 = 0LL;
        do
        {
          v10 = a1[1];
          ++v8;
          *(_QWORD *)(v9 + v6) = *(_QWORD *)(v9 + v10);
          *(_DWORD *)(v9 + v6 + 8) = *(_DWORD *)(v9 + v10 + 8);
          v9 += 12LL;
        }
        while ( v8 < v2 );
      }
      v11 = (void *)a1[1];
      if ( v11 )
        ExFreePool(v11);
    }
    a1[3] = v5;
    a1[1] = v6;
  }
  else
  {
    v4 = (void *)a1[1];
    if ( v4 )
    {
      ExFreePool(v4);
      a1[1] = 0LL;
    }
    a1[3] = 0LL;
    a1[2] = 0LL;
  }
  return 0LL;
}
