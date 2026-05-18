/*
 * XREFs of sub_1800AA0C8 @ 0x1800AA0C8
 * Callers:
 *     sub_1800A8530 @ 0x1800A8530 (sub_1800A8530.c)
 * Callees:
 *     sub_1800ACEA0 @ 0x1800ACEA0 (sub_1800ACEA0.c)
 *     sub_1800AD708 @ 0x1800AD708 (sub_1800AD708.c)
 */

_QWORD *__fastcall sub_1800AA0C8(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  if ( (unsigned __int8)sub_1800AD708() )
    sub_1800ACEA0(a1);
  result = a2;
  *a2 = *(_QWORD *)(a1 + 1596);
  return result;
}
