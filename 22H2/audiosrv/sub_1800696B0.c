/*
 * XREFs of sub_1800696B0 @ 0x1800696B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006954C @ 0x18006954C (sub_18006954C.c)
 *     sub_180069694 @ 0x180069694 (sub_180069694.c)
 */

__int64 sub_1800696B0()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_18006954C();
  *v0 |= 0x18uLL;
  v1 = sub_180069694();
  *v1 |= 4uLL;
  return 0LL;
}
