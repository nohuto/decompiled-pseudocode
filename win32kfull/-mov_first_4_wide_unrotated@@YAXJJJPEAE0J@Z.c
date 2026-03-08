/*
 * XREFs of ?mov_first_4_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1C0304D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall mov_first_4_wide_unrotated(int a1, __int64 a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  int v5; // eax
  unsigned __int8 *v6; // rcx
  unsigned __int8 *v7; // rdx
  unsigned __int8 *v8; // r9
  unsigned __int8 *v9; // rcx
  unsigned __int8 v10; // al
  __int16 v11; // ax
  int v12; // eax

  v5 = 4 * a1;
  v6 = a5;
  v7 = &a4[v5];
  if ( ((unsigned __int8)a5 & 3) != 0 )
  {
    if ( ((unsigned __int8)a5 & 3) == 1 )
    {
LABEL_5:
      if ( a4 != v7 )
      {
        v8 = a4 + 2;
        v9 = a5 + 2;
        do
        {
          *(v9 - 2) = *(v8 - 2);
          *(v9 - 1) = *(v8 - 1);
          v10 = *v8;
          v8 += 4;
          *v9 = v10;
          v9[1] = *(v8 - 3);
          v9 += a3;
        }
        while ( v8 - 2 != v7 );
      }
      return;
    }
    if ( ((unsigned __int8)a5 & 3) != 2 )
    {
      if ( ((unsigned __int8)a5 & 3) != 3 )
        return;
      goto LABEL_5;
    }
    for ( ; a4 != v7; v6 += a3 )
    {
      *(_WORD *)v6 = *(_WORD *)a4;
      v11 = *((_WORD *)a4 + 1);
      a4 += 4;
      *((_WORD *)v6 + 1) = v11;
    }
  }
  else
  {
    for ( ; a4 != v7; v6 += a3 )
    {
      v12 = *(_DWORD *)a4;
      a4 += 4;
      *(_DWORD *)v6 = v12;
    }
  }
}
