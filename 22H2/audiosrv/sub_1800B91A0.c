/*
 * XREFs of sub_1800B91A0 @ 0x1800B91A0
 * Callers:
 *     sub_18000DF70 @ 0x18000DF70 (sub_18000DF70.c)
 *     sub_1800464D0 @ 0x1800464D0 (sub_1800464D0.c)
 *     sub_1800DAE90 @ 0x1800DAE90 (sub_1800DAE90.c)
 *     sub_1800DDCB0 @ 0x1800DDCB0 (sub_1800DDCB0.c)
 *     sub_1800F2D78 @ 0x1800F2D78 (sub_1800F2D78.c)
 *     sub_1800F3374 @ 0x1800F3374 (sub_1800F3374.c)
 *     sub_1800F3EAC @ 0x1800F3EAC (sub_1800F3EAC.c)
 *     sub_1800F43B0 @ 0x1800F43B0 (sub_1800F43B0.c)
 *     sub_1800F48E4 @ 0x1800F48E4 (sub_1800F48E4.c)
 *     sub_1800F4A10 @ 0x1800F4A10 (sub_1800F4A10.c)
 *     sub_1800F4D90 @ 0x1800F4D90 (sub_1800F4D90.c)
 *     sub_1800F51F4 @ 0x1800F51F4 (sub_1800F51F4.c)
 *     sub_1800FA43C @ 0x1800FA43C (sub_1800FA43C.c)
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 *     sub_1800FBC38 @ 0x1800FBC38 (sub_1800FBC38.c)
 *     sub_1800FC4C4 @ 0x1800FC4C4 (sub_1800FC4C4.c)
 *     sub_1800FC614 @ 0x1800FC614 (sub_1800FC614.c)
 *     sub_1800FD528 @ 0x1800FD528 (sub_1800FD528.c)
 *     sub_1800FE268 @ 0x1800FE268 (sub_1800FE268.c)
 *     sub_1800FE430 @ 0x1800FE430 (sub_1800FE430.c)
 *     sub_1800FEE8C @ 0x1800FEE8C (sub_1800FEE8C.c)
 *     sub_180111C9C @ 0x180111C9C (sub_180111C9C.c)
 *     sub_180112550 @ 0x180112550 (sub_180112550.c)
 *     sub_180113900 @ 0x180113900 (sub_180113900.c)
 *     sub_180113A88 @ 0x180113A88 (sub_180113A88.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

_QWORD *__fastcall sub_1800B91A0(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rcx

  v2 = *a2;
  if ( !*a2 )
    sub_1800B8610(-2147467259);
  *a2 = (_QWORD *)*v2;
  return v2 + 2;
}
