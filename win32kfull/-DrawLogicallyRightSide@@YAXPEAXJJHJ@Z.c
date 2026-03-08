/*
 * XREFs of ?DrawLogicallyRightSide@@YAXPEAXJJHJ@Z @ 0x1C02238C0
 * Callers:
 *     ?DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z @ 0x1C0223998 (-DrawRoundedRectangularShadow@@YAXPEAXJJHJ@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DrawLogicallyRightSide(char *a1, int a2, int a3, int a4, int a5)
{
  int v6; // edx
  int v7; // r10d
  int v8; // eax
  __int64 v9; // r9
  __int64 v10; // r11
  char *v11; // r8
  char *v12; // rdx
  __int64 i; // rcx
  int v14; // eax
  char *v15; // rdx
  __int64 v16; // rcx

  v6 = 5 * a5;
  v7 = a3 - 5 * a5;
  if ( v7 > 10 )
  {
    v8 = -a2;
    if ( a4 )
    {
      v9 = (unsigned int)(v7 - 10);
      v10 = 4LL * v8;
      v11 = &a1[4 * v6 - 20 + 4 * a2 * (a3 - 11)];
      do
      {
        v12 = v11;
        for ( i = 16LL; i > -4; i -= 4LL )
        {
          v14 = *(_DWORD *)((char *)&xmmword_1C0322B28 + i);
          *(_DWORD *)v12 = v14;
          v12 += 4;
        }
        v11 += v10;
        --v9;
      }
      while ( v9 );
    }
    else
    {
      v15 = &a1[4 * (a2 * (a3 - 10) - (__int64)v6)];
      v16 = (unsigned int)(v7 - 10);
      do
      {
        *(_OWORD *)v15 = xmmword_1C0322B28;
        *((_DWORD *)v15 + 4) = 50331648;
        v15 += 4 * v8;
        --v16;
      }
      while ( v16 );
    }
  }
}
