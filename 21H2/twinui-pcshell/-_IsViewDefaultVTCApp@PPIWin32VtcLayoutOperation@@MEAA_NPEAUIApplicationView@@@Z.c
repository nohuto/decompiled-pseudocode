/*
 * XREFs of ?_IsViewDefaultVTCApp@PPIWin32VtcLayoutOperation@@MEAA_NPEAUIApplicationView@@@Z @ 0x1800D9880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall PPIWin32VtcLayoutOperation::_IsViewDefaultVTCApp(
        PPIWin32VtcLayoutOperation *this,
        struct IApplicationView *a2)
{
  return PPISideBarHelpers::IsSideBarView(a2);
}
