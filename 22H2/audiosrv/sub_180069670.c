/*
 * XREFs of sub_180069670 @ 0x180069670
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006954C @ 0x18006954C (sub_18006954C.c)
 *     sub_180069694 @ 0x180069694 (sub_180069694.c)
 */

__int64 sub_180069670()
{
  _QWORD *v0; // rax
  _QWORD *v1; // rax

  v0 = sub_18006954C();
  *v0 |= 4uLL;
  v1 = (_QWORD *)sub_180069694();
  *v1 |= 2uLL;
  return 0LL;
}
