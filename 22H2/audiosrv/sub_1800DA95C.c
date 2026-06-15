/*
 * XREFs of sub_1800DA95C @ 0x1800DA95C
 * Callers:
 *     sub_1800F1A50 @ 0x1800F1A50 (sub_1800F1A50.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall sub_1800DA95C(_OWORD *a1, _OWORD *a2)
{
  *a1 = *a2;
  a1[1] = *a2;
  EtwEventActivityIdControl(4LL, a1 + 1);
  return a1;
}
