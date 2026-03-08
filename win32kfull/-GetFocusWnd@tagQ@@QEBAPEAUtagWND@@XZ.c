/*
 * XREFs of ?GetFocusWnd@tagQ@@QEBAPEAUtagWND@@XZ @ 0x1C01AEEF4
 * Callers:
 *     xxxFreeWindow @ 0x1C0031C50 (xxxFreeWindow.c)
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall tagQ::GetFocusWnd(tagQ *this)
{
  return (struct tagWND *)*((_QWORD *)this + 15);
}
