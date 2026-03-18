/*
 * XREFs of ?GetFocusWnd@tagQ@@QEBAPEAUtagWND@@XZ @ 0x1C01ADD04
 * Callers:
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall tagQ::GetFocusWnd(tagQ *this)
{
  return (struct tagWND *)*((_QWORD *)this + 15);
}
