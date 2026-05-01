/*
 * XREFs of wil::details::ScopeExitFn__lambda_63bc7e020bf25f22692fce9b8da16835___::_ScopeExitFn__lambda_63bc7e020bf25f22692fce9b8da16835___ @ 0x1803A2B90
 * Callers:
 *     _XamlLauncherState::ShowStartView_::_1_::dtor$1 @ 0x180172902 (_XamlLauncherState--ShowStartView_--_1_--dtor$1.c)
 * Callees:
 *     ??$ShowStartView@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180077180 (--$ShowStartView@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_63bc7e020bf25f22692fce9b8da16835___::_ScopeExitFn__lambda_63bc7e020bf25f22692fce9b8da16835___(
        __int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::ShowStartView<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
