void __fastcall or_all_2_wide_unrotated(int a1, __int64 a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  int v5; // eax
  unsigned __int8 *v6; // rcx
  unsigned __int8 *v7; // rdx
  __int16 v8; // ax
  __int16 v9; // ax

  v5 = 2 * a1;
  v6 = a5;
  v7 = &a4[v5];
  if ( ((unsigned __int8)a5 & 1) != 0 )
  {
    do
    {
      v9 = *(_WORD *)a4;
      a4 += 2;
      *(_WORD *)v6 |= v9;
      v6 += a3;
    }
    while ( a4 != v7 );
  }
  else
  {
    do
    {
      v8 = *(_WORD *)a4;
      a4 += 2;
      *(_WORD *)v6 |= v8;
      v6 += a3;
    }
    while ( a4 != v7 );
  }
}
