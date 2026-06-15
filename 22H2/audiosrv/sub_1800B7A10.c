/*
 * XREFs of sub_1800B7A10 @ 0x1800B7A10
 * Callers:
 *     sub_1800B8AE1 @ 0x1800B8AE1 (sub_1800B8AE1.c)
 *     sub_1800B8B70 @ 0x1800B8B70 (sub_1800B8B70.c)
 *     sub_1800C1F0A @ 0x1800C1F0A (sub_1800C1F0A.c)
 *     unknown_libname_76 @ 0x1800C2130 (unknown_libname_76.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B7A10(_QWORD *a1)
{
  __int64 result; // rax

  result = _o_free(*a1);
  *a1 = 0LL;
  return result;
}
