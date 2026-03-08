/*
 * XREFs of _MonitorFromWindow @ 0x1C012F60C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00AF050 (xxxCreateWindowEx.c)
 * Callees:
 *     ?_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z @ 0x1C00D2B90 (-_MonitorFromWindowInternal@@YAPEAUtagMONITOR@@PEAUtagWND@@KH@Z.c)
 */

struct tagMONITOR *__fastcall MonitorFromWindow(struct tagWND *a1, unsigned int a2)
{
  return _MonitorFromWindowInternal(a1, a2, 0);
}
