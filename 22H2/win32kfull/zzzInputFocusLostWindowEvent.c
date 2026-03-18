/*
 * XREFs of zzzInputFocusLostWindowEvent @ 0x1C0131018
 * Callers:
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     ?zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z @ 0x1C013A930 (-zzzInputFocusLostWindowEventImpl@@YAXPEAUtagWND@@PEAUtagQ@@W4INPUTFOCUSEVENTSOURCE@@@Z.c)
 */

__int64 __fastcall zzzInputFocusLostWindowEvent(__int64 a1, unsigned int a2)
{
  return zzzInputFocusLostWindowEventImpl(a1, gpqForeground, a2);
}
