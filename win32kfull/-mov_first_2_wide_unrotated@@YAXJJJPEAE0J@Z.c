void __fastcall mov_first_2_wide_unrotated(int a1, __int64 a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  int v5; // eax
  unsigned __int8 *v7; // rdx
  __int16 v8; // ax

  v5 = 2 * a1;
  v7 = &a4[v5];
  do
  {
    v8 = *(_WORD *)a4;
    a4 += 2;
    *(_WORD *)a5 = v8;
    a5 += a3;
  }
  while ( a4 != v7 );
}
