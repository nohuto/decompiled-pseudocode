/*
 * XREFs of ?ShouldShowInSwitchers@CClassicWindow@@UEBA_NXZ @ 0x18007A6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CClassicWindow::ShouldShowInSwitchers(CClassicWindow *this)
{
  return CClassicWindow::s_ShouldShowInSwitchers(*((unsigned int *)this + 18));
}
