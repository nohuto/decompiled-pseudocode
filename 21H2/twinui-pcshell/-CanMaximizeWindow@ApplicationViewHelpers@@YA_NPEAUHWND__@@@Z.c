/*
 * XREFs of ?CanMaximizeWindow@ApplicationViewHelpers@@YA_NPEAUHWND__@@@Z @ 0x1804E1420
 * Callers:
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18040BE7C (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 *     ?IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z @ 0x18044BAD0 (-IsOperableView@Win32ViewOperationPolicy@@QEAA_NPEAUIApplicationView@@@Z.c)
 *     ?CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1804E13F4 (-CanMaximizeView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ApplicationViewHelpers::CanMaximizeWindow(ApplicationViewHelpers *this, HWND a2)
{
  return ((unsigned int)GetWindowLongPtrW((HWND)this, -16) >> 16) & 1;
}
