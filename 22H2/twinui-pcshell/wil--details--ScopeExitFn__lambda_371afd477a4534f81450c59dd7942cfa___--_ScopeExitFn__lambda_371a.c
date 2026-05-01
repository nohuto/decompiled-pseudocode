/*
 * XREFs of wil::details::ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___::_ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___ @ 0x18037F888
 * Callers:
 *     _XamlAltTabViewHost::Show_::_1_::dtor$4 @ 0x18038230E (_XamlAltTabViewHost--Show_--_1_--dtor$4.c)
 *     ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1803FC250 (-Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@.c)
 * Callees:
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x180380B90 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___::_ScopeExitFn__lambda_371afd477a4534f81450c59dd7942cfa___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(*(_QWORD *)a1);
  }
  return result;
}
