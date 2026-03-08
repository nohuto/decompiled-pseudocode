/*
 * XREFs of EditionWakeThreadForInput @ 0x1C0037660
 * Callers:
 *     <none>
 * Callees:
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1C00388C0 (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 */

void __fastcall EditionWakeThreadForInput(__int64 a1, unsigned int a2)
{
  WakeSomeone(*(struct tagQ **)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 16LL) + 432LL), 0LL, a2, 0LL);
}
