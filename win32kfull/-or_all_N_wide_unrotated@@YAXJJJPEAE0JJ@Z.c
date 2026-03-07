void __fastcall or_all_N_wide_unrotated(int a1, __int64 a2, int a3, char *a4, unsigned __int8 *a5, int a6, int a7)
{
  unsigned __int8 *v7; // rdx
  unsigned __int8 *v8; // r10
  int v9; // r8d
  unsigned __int8 *v10; // rcx
  char v11; // al

  v7 = a5;
  v8 = &a5[a3 * a1];
  v9 = a3 - a7;
  do
  {
    v10 = &v7[a7];
    do
    {
      v11 = *a4++;
      *v7++ |= v11;
    }
    while ( v7 != v10 );
    v7 += v9;
  }
  while ( v7 != v8 );
}
