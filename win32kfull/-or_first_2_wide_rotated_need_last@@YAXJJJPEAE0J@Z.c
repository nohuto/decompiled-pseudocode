/*
 * XREFs of ?or_first_2_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1C03051F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall or_first_2_wide_rotated_need_last(int a1, char a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  unsigned __int8 *v6; // rbx
  __int64 v7; // rsi
  char v8; // di
  char v10; // dl
  unsigned __int8 v11; // r8
  char v12; // al

  v6 = &a4[2 * a1];
  v7 = a3;
  v8 = 8 - a2;
  do
  {
    v10 = *a4;
    v11 = a4[1];
    v12 = *a4 >> a2;
    a4 += 2;
    *a5 |= v12;
    a5[1] = (v10 << v8) | (v11 >> a2);
    a5 += v7;
  }
  while ( a4 != v6 );
}
