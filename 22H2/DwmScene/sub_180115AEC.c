/*
 * XREFs of sub_180115AEC @ 0x180115AEC
 * Callers:
 *     sub_1801160F8 @ 0x1801160F8 (sub_1801160F8.c)
 * Callees:
 *     unknown_libname_98 @ 0x180010B7C (unknown_libname_98.c)
 */

__int64 *__fastcall sub_180115AEC(__int64 a1, __int64 *a2)
{
  _BYTE *v3; // rdx

  v3 = *(_BYTE **)(a1 + 16);
  a2[2] = 0LL;
  a2[3] = 15LL;
  *(_BYTE *)a2 = 0;
  unknown_libname_98(a2, v3);
  return a2;
}
