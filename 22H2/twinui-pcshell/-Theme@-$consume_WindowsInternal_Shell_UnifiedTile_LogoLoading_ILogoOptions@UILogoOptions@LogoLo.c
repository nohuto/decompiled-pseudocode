/*
 * XREFs of ?Theme@?$consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions@UILogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBAXAEBW4TileThemeSelector@VisualCache@UnifiedTile@Shell@WindowsInternal@3@@Z @ 0x180142F64
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1801433AC (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::ILogoOptions>::Theme(
        _QWORD *a1,
        unsigned int *a2)
{
  unsigned int v2; // eax

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 120LL))(*a1, *a2);
  winrt::check_hresult(v2);
}
