/*
 * XREFs of sub_1800994CC @ 0x1800994CC
 * Callers:
 *     sub_18002D0E4 @ 0x18002D0E4 (sub_18002D0E4.c)
 *     sub_18002D660 @ 0x18002D660 (sub_18002D660.c)
 *     sub_18002D840 @ 0x18002D840 (sub_18002D840.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1800994CC(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // rax

  *a1 = a2;
  a1[2] = 1;
  a1[3] = 1;
  a1[5] = a5;
  a1[6] = a6;
  result = a1;
  a1[1] = a3;
  a1[4] = a4;
  return result;
}
