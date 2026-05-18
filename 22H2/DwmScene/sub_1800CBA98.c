/*
 * XREFs of sub_1800CBA98 @ 0x1800CBA98
 * Callers:
 *     sub_18002EBE0 @ 0x18002EBE0 (sub_18002EBE0.c)
 *     sub_18003156C @ 0x18003156C (sub_18003156C.c)
 * Callees:
 *     unknown_libname_98 @ 0x180010B7C (unknown_libname_98.c)
 */

__int64 *__fastcall sub_1800CBA98(__int64 *a1, int a2)
{
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  unknown_libname_98(a1, off_18020CA30[a2]);
  return a1;
}
