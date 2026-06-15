/*
 * XREFs of sub_1800CF858 @ 0x1800CF858
 * Callers:
 *     sub_180006430 @ 0x180006430 (sub_180006430.c)
 *     sub_18002B5E0 @ 0x18002B5E0 (sub_18002B5E0.c)
 *     sub_180056A7C @ 0x180056A7C (sub_180056A7C.c)
 *     sub_18006473C @ 0x18006473C (sub_18006473C.c)
 *     sub_1800CFB48 @ 0x1800CFB48 (sub_1800CFB48.c)
 *     sub_1800CFC78 @ 0x1800CFC78 (sub_1800CFC78.c)
 *     sub_180106720 @ 0x180106720 (sub_180106720.c)
 *     sub_1801067C4 @ 0x1801067C4 (sub_1801067C4.c)
 *     sub_180107514 @ 0x180107514 (sub_180107514.c)
 *     sub_180107670 @ 0x180107670 (sub_180107670.c)
 *     sub_180107EE4 @ 0x180107EE4 (sub_180107EE4.c)
 *     sub_180108014 @ 0x180108014 (sub_180108014.c)
 *     sub_18010826C @ 0x18010826C (sub_18010826C.c)
 *     sub_180108310 @ 0x180108310 (sub_180108310.c)
 *     sub_18011B7C0 @ 0x18011B7C0 (sub_18011B7C0.c)
 *     sub_18011E8C8 @ 0x18011E8C8 (sub_18011E8C8.c)
 *     sub_18011EA28 @ 0x18011EA28 (sub_18011EA28.c)
 *     sub_1801395A4 @ 0x1801395A4 (sub_1801395A4.c)
 *     sub_180139610 @ 0x180139610 (sub_180139610.c)
 *     sub_180139D74 @ 0x180139D74 (sub_180139D74.c)
 *     sub_180139E98 @ 0x180139E98 (sub_180139E98.c)
 *     sub_180139FC0 @ 0x180139FC0 (sub_180139FC0.c)
 *     sub_18013A0F0 @ 0x18013A0F0 (sub_18013A0F0.c)
 *     sub_18013A194 @ 0x18013A194 (sub_18013A194.c)
 *     sub_18013F4D0 @ 0x18013F4D0 (sub_18013F4D0.c)
 *     sub_180140070 @ 0x180140070 (sub_180140070.c)
 *     sub_180141244 @ 0x180141244 (sub_180141244.c)
 *     sub_1801427B4 @ 0x1801427B4 (sub_1801427B4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800CF858(__int64 a1, __int64 a2)
{
  double v2; // xmm1_8
  unsigned __int64 v3; // rax
  double v4; // xmm1_8
  unsigned __int64 v5; // rcx
  int v6; // eax
  unsigned int *v7; // rdx
  __int64 result; // rax

  if ( a2 < 0 )
    v2 = (double)(int)(a2 & 1 | ((unsigned __int64)a2 >> 1)) + (double)(int)(a2 & 1 | ((unsigned __int64)a2 >> 1));
  else
    v2 = (double)(int)a2;
  v3 = 0LL;
  v4 = v2 / *(float *)(a1 + 20);
  if ( v4 >= 9.223372036854776e18 )
  {
    v4 = v4 - 9.223372036854776e18;
    if ( v4 < 9.223372036854776e18 )
      v3 = 0x8000000000000000uLL;
  }
  v5 = v3 + (unsigned int)(int)v4;
  v6 = 0;
  if ( v5 > 0xFFFFFFFF )
  {
    LODWORD(v5) = -1;
    goto LABEL_10;
  }
  if ( (unsigned int)v5 > 0x11 )
  {
LABEL_10:
    v7 = dword_18016F900;
    do
    {
      ++v6;
      ++v7;
    }
    while ( (unsigned int)v5 > *v7 );
  }
  result = dword_18016F900[v6];
  if ( (_DWORD)result == -1 )
    return (unsigned int)v5;
  return result;
}
