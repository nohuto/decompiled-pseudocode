/*
 * XREFs of ?GetWindow@CInputQueue@@UEBAJPEAPEAUHWND__@@@Z @ 0x1C00D6530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputQueue::GetWindow(CInputQueue *this, HWND *a2)
{
  *a2 = (HWND)*((_QWORD *)this + 2);
  return 0LL;
}
