/*
 * XREFs of sub_1405B32D0 @ 0x1405B32D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14094D63C @ 0x14094D63C (sub_14094D63C.c)
 */

__int64 __fastcall sub_1405B32D0(__int64 a1, int a2, int a3, int a4, __int64 a5, _BYTE *a6)
{
  *a6 = 1;
  return sub_14094D63C(a2, a3, a4, a5, *(_DWORD *)(a1 + 8));
}
