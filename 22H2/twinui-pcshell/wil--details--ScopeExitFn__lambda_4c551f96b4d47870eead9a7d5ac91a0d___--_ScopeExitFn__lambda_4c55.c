/*
 * XREFs of wil::details::ScopeExitFn__lambda_4c551f96b4d47870eead9a7d5ac91a0d___::_ScopeExitFn__lambda_4c551f96b4d47870eead9a7d5ac91a0d___ @ 0x1804E33E0
 * Callers:
 *     _CSingleViewShellExperience::OnViewDestroyedBase_::_1_::dtor$0 @ 0x1804E4324 (_CSingleViewShellExperience--OnViewDestroyedBase_--_1_--dtor$0.c)
 * Callees:
 *     ?ResetViews@CSingleViewShellExperience@@AEAAXXZ @ 0x1804E4584 (-ResetViews@CSingleViewShellExperience@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_4c551f96b4d47870eead9a7d5ac91a0d___::_ScopeExitFn__lambda_4c551f96b4d47870eead9a7d5ac91a0d___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    CSingleViewShellExperience::ResetViews(*(CSingleViewShellExperience **)a1);
  }
}
