/*
 * XREFs of wil::details::ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___::_ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___ @ 0x1804815E4
 * Callers:
 *     ?CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z @ 0x18048192C (-CommitResize@AppResizeView@@AEAAJAEBUCPoint@Geometry@@@Z.c)
 *     _AppResizeView::CommitResize_::_1_::dtor$0 @ 0x180481C79 (_AppResizeView--CommitResize_--_1_--dtor$0.c)
 * Callees:
 *     ?Cleanup@AppResizeView@@AEAAXXZ @ 0x1804818D4 (-Cleanup@AppResizeView@@AEAAXXZ.c)
 *     ?Hide@AppResizeView@@UEAAX_N@Z @ 0x180481CD0 (-Hide@AppResizeView@@UEAAX_N@Z.c)
 *     ?Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z @ 0x180482D08 (-Stop@TMAppResize@TabletModeTelemetry@@QEAAXW4ResizeDropLocation@@@Z.c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___::_ScopeExitFn__lambda_2f414e7590a7cfc0054ac9d9a62a1146___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[16] )
  {
    a1[16] = 0;
    AppResizeView::Hide((AppResizeView *)(*(_QWORD *)a1 + 24LL), 1);
    AppResizeView::Cleanup(*(AppResizeView **)a1);
    return TabletModeTelemetry::TMAppResize::Stop(*(_QWORD *)a1 + 152LL, **((unsigned int **)a1 + 1));
  }
  return result;
}
