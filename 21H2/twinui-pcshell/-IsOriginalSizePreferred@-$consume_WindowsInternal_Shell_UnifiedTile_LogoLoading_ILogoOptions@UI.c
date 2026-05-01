/*
 * XREFs of ?IsOriginalSizePreferred@?$consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions@UILogoOptions@LogoLoading@UnifiedTile@Shell@WindowsInternal@winrt@@@impl@winrt@@QEBAX_N@Z @ 0x18013B2F8
 * Callers:
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x18014351C (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

void __fastcall winrt::impl::consume_WindowsInternal_Shell_UnifiedTile_LogoLoading_ILogoOptions<winrt::WindowsInternal::Shell::UnifiedTile::LogoLoading::ILogoOptions>::IsOriginalSizePreferred(
        _QWORD *a1,
        __int64 a2)
{
  unsigned int v2; // eax

  LOBYTE(a2) = 1;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 104LL))(*a1, a2);
  winrt::check_hresult(v2);
}
