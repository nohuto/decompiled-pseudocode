/*
 * XREFs of ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ @ 0x1800F39D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HWND __fastcall CVisual::GetHwnd(CVisual *this)
{
  HWND result; // rax

  result = 0LL;
  if ( (*((_BYTE *)this + 100) & 0x40) != 0 )
    return (HWND)CVisual::GetTopLevelWindow(this);
  return result;
}
