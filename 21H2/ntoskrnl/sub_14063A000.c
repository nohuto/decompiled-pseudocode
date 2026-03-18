/*
 * XREFs of sub_14063A000 @ 0x14063A000
 * Callers:
 *     <none>
 * Callees:
 *     sub_1409F992C @ 0x1409F992C (sub_1409F992C.c)
 */

__int64 __fastcall sub_14063A000(__int64 a1, int a2, int a3, int a4, __int64 a5, _BYTE *a6)
{
  *a6 = 1;
  return sub_1409F992C(a2, a3, a4, a5, *(_DWORD *)(a1 + 8));
}
