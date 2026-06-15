/*
 * XREFs of sub_1800D4FB4 @ 0x1800D4FB4
 * Callers:
 *     sub_180079C00 @ 0x180079C00 (sub_180079C00.c)
 *     sub_180079DE0 @ 0x180079DE0 (sub_180079DE0.c)
 *     unknown_libname_65 @ 0x18007CC76 (unknown_libname_65.c)
 * Callees:
 *     sub_1800D542C @ 0x1800D542C (sub_1800D542C.c)
 */

__int64 __fastcall sub_1800D4FB4(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return sub_1800D542C(v1);
  return result;
}
