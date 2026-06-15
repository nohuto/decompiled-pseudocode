/*
 * XREFs of sub_180138CA4 @ 0x180138CA4
 * Callers:
 *     sub_180139B30 @ 0x180139B30 (sub_180139B30.c)
 *     sub_18013BAA8 @ 0x18013BAA8 (sub_18013BAA8.c)
 * Callees:
 *     sub_180057300 @ 0x180057300 (sub_180057300.c)
 */

__int64 __fastcall sub_180138CA4(__int64 a1, __int64 a2, __int64 a3, int a4, _OWORD *a5, int a6)
{
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = off_180146580;
  *(_DWORD *)(a1 + 940) = a4;
  *(_OWORD *)(a1 + 944) = *a5;
  *(_DWORD *)(a1 + 960) = a6;
  sub_180057300((_WORD *)(a1 + 16), 201LL, a2);
  sub_180057300((_WORD *)(a1 + 418), 261LL, a3);
  return a1;
}
