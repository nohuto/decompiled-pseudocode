/*
 * XREFs of sub_1800FBEE0 @ 0x1800FBEE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FB1A4 @ 0x1800FB1A4 (sub_1800FB1A4.c)
 */

void __fastcall sub_1800FBEE0(PTP_CALLBACK_INSTANCE Instance, _QWORD *Context, PTP_WORK Work)
{
  sub_1800FB1A4((char *)Context[2], *((_DWORD *)Context + 2), (char *)*Context);
  sub_1800FA07C(Context);
}
