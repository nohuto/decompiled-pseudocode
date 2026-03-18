/*
 * XREFs of or_all_4_wide_unrotated @ 0x1C013A700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall or_all_4_wide_unrotated(int a1, __int64 a2, int a3, char *a4, __int64 a5)
{
  int v5; // eax
  _WORD *v6; // rcx
  char *v7; // rdx
  __int64 result; // rax
  char *v9; // r9
  _BYTE *v10; // rcx
  char v11; // al

  v5 = 4 * a1;
  v6 = (_WORD *)a5;
  v7 = &a4[v5];
  result = a5 & 3;
  if ( (a5 & 3) != 0 )
  {
    result = (unsigned int)(result - 1);
    if ( !(_DWORD)result )
    {
LABEL_5:
      if ( a4 != v7 )
      {
        v9 = a4 + 2;
        v10 = (_BYTE *)(a5 + 2);
        do
        {
          *(v10 - 2) |= *(v9 - 2);
          *(v10 - 1) |= *(v9 - 1);
          v11 = *v9;
          v9 += 4;
          *v10 |= v11;
          v10[1] |= *(v9 - 3);
          v10 += a3;
          result = (__int64)(v9 - 2);
        }
        while ( v9 - 2 != v7 );
      }
      return result;
    }
    result = (unsigned int)(result - 1);
    if ( (_DWORD)result )
    {
      if ( (_DWORD)result != 1 )
        return result;
      goto LABEL_5;
    }
    for ( ; a4 != v7; v6 = (_WORD *)((char *)v6 + a3) )
    {
      *v6 |= *(_WORD *)a4;
      result = *((unsigned __int16 *)a4 + 1);
      a4 += 4;
      v6[1] |= result;
    }
  }
  else
  {
    for ( ; a4 != v7; v6 = (_WORD *)((char *)v6 + a3) )
    {
      result = *(unsigned int *)a4;
      a4 += 4;
      *(_DWORD *)v6 |= result;
    }
  }
  return result;
}
