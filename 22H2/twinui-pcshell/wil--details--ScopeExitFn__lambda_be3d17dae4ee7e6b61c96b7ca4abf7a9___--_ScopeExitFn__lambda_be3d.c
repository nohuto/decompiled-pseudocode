/*
 * XREFs of wil::details::ScopeExitFn__lambda_be3d17dae4ee7e6b61c96b7ca4abf7a9___::_ScopeExitFn__lambda_be3d17dae4ee7e6b61c96b7ca4abf7a9___ @ 0x180310228
 * Callers:
 *     _ViewEventDispatcher::_HandleWindowCreatedForExistingView_::_1_::dtor$0 @ 0x18031C088 (_ViewEventDispatcher--_HandleWindowCreatedForExistingView_--_1_--dtor$0.c)
 * Callees:
 *     ?NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18032F1C0 (-NavigateView@ViewManagerBridge@@UEAAXIW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windo.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_be3d17dae4ee7e6b61c96b7ca4abf7a9___::_ScopeExitFn__lambda_be3d17dae4ee7e6b61c96b7ca4abf7a9___(
        __int64 a1)
{
  __int64 result; // rax

  result = a1;
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return ViewManagerBridge::NavigateView(*(_QWORD *)(*(_QWORD *)a1 + 496LL), *(unsigned int *)(a1 + 8), 0LL);
  }
  return result;
}
