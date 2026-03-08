/*
 * XREFs of ?or_all_1_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1C00DE650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall or_all_1_wide_rotated_need_last(int a1, char a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  __int64 v5; // r11
  unsigned __int8 *v6; // r10
  char v8; // al

  v5 = a3;
  v6 = &a4[a1];
  do
  {
    v8 = *a4++ >> a2;
    *a5 |= v8;
    a5 += v5;
  }
  while ( a4 != v6 );
}
