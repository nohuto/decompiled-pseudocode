/*
 * XREFs of sub_18011CF00 @ 0x18011CF00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018900 @ 0x180018900 (sub_180018900.c)
 */

_QWORD *__fastcall sub_18011CF00(_QWORD *a1, __int64 a2)
{
  sub_180018900((__int64)a1, a2);
  *a1 = &Spectre::Utils::CancelledException::`vftable';
  return a1;
}
