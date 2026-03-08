/*
 * XREFs of ?mov_first_3_wide_unrotated@@YAXJJJPEAE0J@Z @ 0x1C0304D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall mov_first_3_wide_unrotated(int a1, __int64 a2, int a3, unsigned __int8 *a4, unsigned __int8 *a5)
{
  __int64 v5; // r11
  unsigned __int8 *v6; // r10
  unsigned __int8 *v7; // r8
  unsigned __int8 v8; // cl
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // al

  v5 = a3;
  v6 = &a4[3 * a1];
  v7 = a5 + 2;
  do
  {
    v8 = a4[1];
    v9 = a4[2];
    v10 = *a4;
    a4 += 3;
    *(v7 - 2) = v10;
    *(v7 - 1) = v8;
    *v7 = v9;
    v7 += v5;
  }
  while ( a4 != v6 );
}
