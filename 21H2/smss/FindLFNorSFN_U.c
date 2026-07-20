/*
 * XREFs of FindLFNorSFN_U @ 0x140010AE4
 * Callers:
 *     GetLongPathNameW @ 0x140010BF4 (GetLongPathNameW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindLFNorSFN_U(__int16 *a1, __int16 **a2, __int16 **a3)
{
  __int16 v5; // dx
  __int16 v6; // ax
  __int16 *i; // rdx
  __int16 v8; // ax
  __int64 v9; // rax
  int v10; // r9d
  __int64 v11; // r8
  int v12; // r10d
  __int64 result; // rax

  while ( 1 )
  {
    if ( !*a1 )
      return 0LL;
    v5 = *a1;
    do
    {
      if ( v5 != 92 )
      {
        v6 = v5;
        if ( v5 != 47 )
          break;
      }
      v6 = *++a1;
      v5 = *a1;
    }
    while ( *a1 );
    if ( !v6 )
      return 0LL;
    for ( i = a1 + 1; ; ++i )
    {
      v8 = *i;
      if ( !*i || v8 == 92 || v8 == 47 )
        break;
    }
    v9 = i - a1;
    if ( (_DWORD)v9 )
    {
      if ( (int)v9 <= 12 && *a1 != 46 )
        break;
    }
LABEL_27:
    result = 0LL;
    if ( !*i )
      return result;
    a1 = i + 1;
  }
  v10 = 0;
  v11 = 0LL;
  if ( (int)v9 > 0 )
  {
    v12 = v9 - 1;
    do
    {
      if ( a1[v11] == 46 )
      {
        if ( v10 || v12 > 3 )
          goto LABEL_27;
        v10 = 1;
      }
      if ( v11 >= 8 && !v10 )
        goto LABEL_27;
      --v12;
      ++v11;
    }
    while ( v11 < (int)v9 );
  }
  result = 1LL;
  if ( a2 )
  {
    if ( a3 )
    {
      *a2 = a1;
      *a3 = i;
    }
  }
  return result;
}
