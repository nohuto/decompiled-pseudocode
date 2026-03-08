/*
 * XREFs of ?or_all_N_wide_rotated_need_last@@YAXJJJPEAE0JJ@Z @ 0x1C0305050
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall or_all_N_wide_rotated_need_last(
        int a1,
        char a2,
        int a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5,
        int a6,
        int a7)
{
  unsigned __int8 *v7; // r10
  __int64 v9; // rbp
  unsigned __int8 *v10; // rdi
  char v11; // r11
  char v12; // r8
  unsigned __int8 *v13; // rsi
  char v14; // al
  unsigned __int8 *v15; // r10
  char v16; // r8
  char v17; // dl
  unsigned __int8 v18; // al

  v7 = a5;
  v9 = a3 - a7;
  v10 = &a5[a3 * a1];
  v11 = 8 - a2;
  do
  {
    v12 = *a4;
    v13 = &v7[a7];
    v14 = *a4++ >> a2;
    *v7 |= v14;
    v15 = v7 + 1;
    v16 = v12 << v11;
    do
    {
      v17 = *a4;
      v18 = *a4++;
      *v15++ |= v16 | (v18 >> a2);
      v16 = v17 << v11;
    }
    while ( v15 != v13 );
    v7 = &v15[v9];
  }
  while ( v7 != v10 );
}
