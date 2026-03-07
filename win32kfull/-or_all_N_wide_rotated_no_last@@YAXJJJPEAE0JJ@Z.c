void __fastcall or_all_N_wide_rotated_no_last(
        int a1,
        char a2,
        int a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        int a6,
        int a7)
{
  unsigned __int8 *v7; // r10
  __int64 v9; // rsi
  unsigned __int8 *v10; // rbx
  char v11; // di
  unsigned __int8 *v12; // r11
  char v13; // r8
  char v14; // dl
  unsigned __int8 v15; // al

  v7 = a5;
  v9 = a3 - a7;
  v10 = &a5[a3 * a1];
  v11 = 8 - a2;
  do
  {
    v12 = &v7[a7 - 1];
    v13 = 0;
    do
    {
      v14 = *a4;
      v15 = *a4++;
      *v7++ |= v13 | (v15 >> a2);
      v13 = v14 << v11;
    }
    while ( v7 != v12 );
    *v7 |= v13;
    v7 += v9 + 1;
  }
  while ( v7 != v10 );
}
