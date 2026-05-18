/*
 * XREFs of sub_1800DB5C0 @ 0x1800DB5C0
 * Callers:
 *     sub_1800DB520 @ 0x1800DB520 (sub_1800DB520.c)
 *     sub_1800DB530 @ 0x1800DB530 (sub_1800DB530.c)
 *     sub_1800DB540 @ 0x1800DB540 (sub_1800DB540.c)
 *     sub_1800DB550 @ 0x1800DB550 (sub_1800DB550.c)
 *     sub_1800DB560 @ 0x1800DB560 (sub_1800DB560.c)
 *     sub_1800DB570 @ 0x1800DB570 (sub_1800DB570.c)
 *     sub_1800DB580 @ 0x1800DB580 (sub_1800DB580.c)
 *     sub_1800DB590 @ 0x1800DB590 (sub_1800DB590.c)
 *     sub_1800DB5A0 @ 0x1800DB5A0 (sub_1800DB5A0.c)
 *     sub_1800DB5B0 @ 0x1800DB5B0 (sub_1800DB5B0.c)
 * Callees:
 *     sub_1800DB3C4 @ 0x1800DB3C4 (sub_1800DB3C4.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 */

_QWORD *__fastcall sub_1800DB5C0(_QWORD *a1, char a2)
{
  sub_1800DB3C4(a1);
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
