/*
 * XREFs of sub_180047200 @ 0x180047200
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800361D0 @ 0x1800361D0 (sub_1800361D0.c)
 */

__int64 __fastcall sub_180047200(__int64 a1)
{
  __int64 result; // rax

  sub_1800361D0((__int64 *)(a1 + 24));
  result = _o_free(*(_QWORD *)(a1 + 8));
  *(_QWORD *)(a1 + 8) = 0LL;
  return result;
}
