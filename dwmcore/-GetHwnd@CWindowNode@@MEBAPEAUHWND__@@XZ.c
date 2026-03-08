/*
 * XREFs of ?GetHwnd@CWindowNode@@MEBAPEAUHWND__@@XZ @ 0x180106DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CWindowNode::GetHwnd(CWindowNode *this)
{
  return (HWND)*((_QWORD *)this + 88);
}
