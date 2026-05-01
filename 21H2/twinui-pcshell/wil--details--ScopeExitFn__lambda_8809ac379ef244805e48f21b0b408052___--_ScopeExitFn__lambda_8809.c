/*
 * XREFs of wil::details::ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___::_ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___ @ 0x1803A2C08
 * Callers:
 *     _XamlLauncherState::ShowCortanaFromOpenStart_::_1_::dtor$0 @ 0x180172584 (_XamlLauncherState--ShowCortanaFromOpenStart_--_1_--dtor$0.c)
 * Callees:
 *     ??$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1800775A0 (--$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___::_ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___(
        __int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::ShowCortanaFromOpenStart<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
