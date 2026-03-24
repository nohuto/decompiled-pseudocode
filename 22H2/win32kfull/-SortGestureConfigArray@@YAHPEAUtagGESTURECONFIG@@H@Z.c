/*
 * XREFs of ?SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z @ 0x1C012B2C0
 * Callers:
 *     SetGestureConfigSettings @ 0x1C012B144 (SetGestureConfigSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SortGestureConfigArray(struct tagGESTURECONFIG *a1, int a2)
{
  __int64 v2; // r10
  int i; // r8d
  __int64 v5; // rdx
  int v6; // ebx
  char *v8; // rsi
  __int64 v9; // xmm1_8
  int v10; // r13d
  int v11; // r14d
  __int64 j; // rdi
  __int64 v13; // rbp
  __int64 v14; // xmm0_8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  _DWORD *k; // rdx
  __int64 v19; // [rsp+0h] [rbp-38h]

  v2 = a2;
  if ( a2 > 0 )
  {
    for ( i = 1; i < a2 / 9; i = 3 * i + 1 )
      ;
    while ( i > 0 )
    {
      v5 = i;
      v6 = i;
      if ( i < v2 )
      {
        v8 = (char *)a1 + 12 * i;
        do
        {
          v9 = *(_QWORD *)v8;
          v10 = *((_DWORD *)v8 + 2);
          v11 = v6 - i;
          v19 = *(_QWORD *)v8;
          for ( j = v5 - i; j >= 0; *((_DWORD *)a1 + v15 + 2) = *((_DWORD *)a1 + v13 + 2) )
          {
            v13 = 3 * j;
            if ( *((_DWORD *)a1 + 3 * j) <= (unsigned int)v19 )
              break;
            v14 = *(_QWORD *)((char *)a1 + 12 * j);
            v15 = 3 * (i + j);
            v11 -= i;
            j -= i;
            *(_QWORD *)((char *)a1 + 4 * v15) = v14;
          }
          if ( v6 != v11 + i )
          {
            v16 = 3 * (i + j);
            *(_QWORD *)((char *)a1 + 4 * v16) = v9;
            *((_DWORD *)a1 + v16 + 2) = v10;
          }
          ++v6;
          ++v5;
          v8 += 12;
        }
        while ( v5 < v2 );
      }
      i /= 3;
    }
    if ( *(_DWORD *)a1 || (_DWORD)v2 == 1 )
    {
      if ( v2 <= 1 )
        return 1LL;
      v17 = 1LL;
      for ( k = (_DWORD *)((char *)a1 + 12); *k != *(k - 3); k += 3 )
      {
        if ( ++v17 >= v2 )
          return 1LL;
      }
    }
  }
  return 0LL;
}
