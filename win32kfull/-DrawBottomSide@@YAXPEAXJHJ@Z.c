/*
 * XREFs of ?DrawBottomSide@@YAXPEAXJHJ@Z @ 0x1C0223810
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C0223998 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawBottomSide(char *a1, int a2, int a3, int a4)
{
  int v6; // edx
  int v7; // r9d
  __int64 v8; // r11
  __int64 v9; // rbx
  __int128 *v10; // rdx
  __int64 v11; // rcx
  char *v12; // rdi
  int v13; // eax
  int v14; // eax
  __int128 *v15; // rdx
  __int64 v16; // r11
  __int64 v17; // rcx
  char *v18; // rdi
  int v19; // eax

  v6 = 5 * a4;
  v7 = a2 * (5 * a4 - 1);
  if ( a3 )
  {
    v8 = v6;
    v9 = a2 - 10;
    v10 = &xmmword_1C0322B28;
    do
    {
      if ( v8 < v9 )
      {
        v11 = v9 - v8;
        v12 = &a1[4 * v8 + 4 * v7];
        v13 = *(_DWORD *)v10;
        while ( v11 )
        {
          *(_DWORD *)v12 = v13;
          v12 += 4;
          --v11;
        }
      }
      v7 -= a2;
      v10 = (__int128 *)((char *)v10 + 4);
    }
    while ( (__int64)v10 < (__int64)&unk_1C0322B3C );
  }
  else
  {
    v14 = a2 - v6;
    v15 = &xmmword_1C0322B28;
    v16 = v14;
    do
    {
      if ( v16 > 10 )
      {
        v17 = v16 - 10;
        v18 = &a1[4 * v7 + 40];
        v19 = *(_DWORD *)v15;
        while ( v17 )
        {
          *(_DWORD *)v18 = v19;
          v18 += 4;
          --v17;
        }
      }
      v7 -= a2;
      v15 = (__int128 *)((char *)v15 + 4);
    }
    while ( (__int64)v15 < (__int64)&unk_1C0322B3C );
  }
}
