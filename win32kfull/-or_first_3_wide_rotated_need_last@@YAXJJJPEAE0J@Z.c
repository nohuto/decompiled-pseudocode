/*
 * XREFs of ?or_first_3_wide_rotated_need_last@@YAXJJJPEAE0J@Z @ 0x1C03052C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall or_first_3_wide_rotated_need_last(int a1, char a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  unsigned __int8 *v6; // r11
  __int64 v7; // rbx
  int v8; // eax
  int v9; // r8d
  unsigned int v10; // r8d

  v6 = &a4[3 * a1];
  v7 = a3;
  do
  {
    v8 = a4[2];
    v9 = (a4[1] | (*a4 << 8)) << 8;
    a4 += 3;
    v10 = (v8 | (unsigned int)v9) >> a2;
    a5[2] = v10;
    *a5 |= BYTE2(v10);
    a5[1] = BYTE1(v10);
    a5 += v7;
  }
  while ( a4 != v6 );
}
