/*
 * XREFs of _lambda_01817d008a5b624f885df37ad7067736_::operator() @ 0x1800D7AE0
 * Callers:
 *     _lambda_01817d008a5b624f885df37ad7067736_::_lambda_invoker_cdecl_ @ 0x1800D7680 (_lambda_01817d008a5b624f885df37ad7067736_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z @ 0x18040BE7C (-IsOperableWindow@TabletModePositionerHelpers@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall lambda_01817d008a5b624f885df37ad7067736_::operator()(
        __int64 a1,
        TabletModePositionerHelpers *a2,
        TabletModePositionerHelpers ***a3)
{
  HWND v5; // rdx
  TabletModePositionerHelpers **v6; // rax

  if ( !IsWindowVisible((HWND)a2) || TabletModePositionerHelpers::IsOperableWindow(a2, v5) )
    return 1LL;
  if ( GetPropA((HWND)a2, "CALL_MONITOR") )
  {
    v6 = *a3;
LABEL_7:
    *v6 = a2;
    return !**a3 || !*a3[1];
  }
  if ( GetPropA((HWND)a2, "SHARING_TOOLBAR") )
  {
    v6 = a3[1];
    goto LABEL_7;
  }
  return !**a3 || !*a3[1];
}
