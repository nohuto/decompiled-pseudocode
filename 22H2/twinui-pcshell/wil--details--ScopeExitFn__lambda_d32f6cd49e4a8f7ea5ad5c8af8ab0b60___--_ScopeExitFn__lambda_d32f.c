/*
 * XREFs of wil::details::ScopeExitFn__lambda_d32f6cd49e4a8f7ea5ad5c8af8ab0b60___::_ScopeExitFn__lambda_d32f6cd49e4a8f7ea5ad5c8af8ab0b60___ @ 0x1803A2A28
 * Callers:
 *     _XamlLauncherState::OnCortanaShown_::_1_::dtor$0 @ 0x1801723B0 (_XamlLauncherState--OnCortanaShown_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180077390 (--$OnCortanaShown@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4I.c)
 */

char __fastcall wil::details::ScopeExitFn__lambda_d32f6cd49e4a8f7ea5ad5c8af8ab0b60___::_ScopeExitFn__lambda_d32f6cd49e4a8f7ea5ad5c8af8ab0b60___(
        __int64 a1)
{
  char result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaShown<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
