/*
 * XREFs of wil::details::ScopeExitFn__lambda_cf0f852b8bb677f51c46d44d2ada76ce___::_ScopeExitFn__lambda_cf0f852b8bb677f51c46d44d2ada76ce___ @ 0x1803A29D8
 * Callers:
 *     _XamlLauncherState::OnStartFailedToGetForegroundImpl_::_1_::dtor$0 @ 0x1803A5546 (_XamlLauncherState--OnStartFailedToGetForegroundImpl_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnStartFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1803A1B34 (--$OnStartFailedToGetForeground@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTeleme.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_cf0f852b8bb677f51c46d44d2ada76ce___::_ScopeExitFn__lambda_cf0f852b8bb677f51c46d44d2ada76ce___(
        __int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnStartFailedToGetForeground<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
