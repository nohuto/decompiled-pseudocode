__int64 __fastcall MiNodeLargeFreeZeroPages(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // r11
  __int64 v4; // r15
  __int64 *v5; // r9
  __int64 v7; // r10
  _QWORD *v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8

  v3 = 0LL;
  v4 = a3;
  v5 = MiLargePageSizes;
  v7 = 0LL;
  v8 = a1;
  v9 = 3LL;
  do
  {
    if ( a2 == 4 )
    {
      if ( (_DWORD)v4 == 2 )
        v11 = *v8 + v8[1];
      else
        v11 = a1[v4 + v7];
    }
    else
    {
      v10 = v7 + 4 * (a2 + 4 * v4);
      v11 = a1[v10 + 6]
          + a1[v10 + 7]
          + a1[v10 + 9]
          + a1[v10 + 38]
          + a1[v10 + 39]
          + a1[v10 + 41]
          + a1[v10 + 8]
          + a1[v10 + 40];
    }
    v12 = v11 * *v5++;
    v8 += 134;
    v3 += v12;
    v7 += 134LL;
    --v9;
  }
  while ( v9 );
  return v3;
}
