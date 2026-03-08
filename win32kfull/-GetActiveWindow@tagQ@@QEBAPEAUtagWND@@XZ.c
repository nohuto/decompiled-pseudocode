/*
 * XREFs of ?GetActiveWindow@tagQ@@QEBAPEAUtagWND@@XZ @ 0x1C012C650
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 *     xxxDestroyWindow @ 0x1C004B7F0 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall tagQ::GetActiveWindow(tagQ *this)
{
  return (struct tagWND *)*((_QWORD *)this + 16);
}
