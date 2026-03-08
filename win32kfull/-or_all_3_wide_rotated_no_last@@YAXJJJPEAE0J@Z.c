/*
 * XREFs of ?or_all_3_wide_rotated_no_last@@YAXJJJPEAE0J@Z @ 0x1C00D68B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall or_all_3_wide_rotated_no_last(int a1, char a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  unsigned __int8 *v5; // r11
  __int64 v6; // rbx
  unsigned __int8 *v7; // r10
  int v8; // eax
  int v9; // r8d
  unsigned int v10; // r8d

  v5 = &a4[2 * a1];
  v6 = a3;
  v7 = a5 + 2;
  do
  {
    v8 = a4[1];
    v9 = *a4;
    a4 += 2;
    v10 = (v8 | (unsigned int)(v9 << 8)) << 8 >> a2;
    *v7 |= v10;
    *(v7 - 2) |= BYTE2(v10);
    *(v7 - 1) |= BYTE1(v10);
    v7 += v6;
  }
  while ( a4 != v5 );
}
