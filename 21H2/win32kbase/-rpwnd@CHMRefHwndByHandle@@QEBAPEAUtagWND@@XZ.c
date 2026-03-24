/*
 * XREFs of ?rpwnd@CHMRefHwndByHandle@@QEBAPEAUtagWND@@XZ @ 0x1C0081620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct tagWND *__fastcall CHMRefHwndByHandle::rpwnd(CHMRefHwndByHandle *this)
{
  return (struct tagWND *)*((_QWORD *)this + 1);
}
