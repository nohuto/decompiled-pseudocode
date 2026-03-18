/*
 * XREFs of ?GetActiveWindow@tagQ@@QEBAPEAUtagWND@@XZ @ 0x1C0138C4C
 * Callers:
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall tagQ::GetActiveWindow(tagQ *this)
{
  return (struct tagWND *)*((_QWORD *)this + 16);
}
