/*
 * XREFs of ??1?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x1803AAB08
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_AppViewDataSourceScope_IApplicationViewCollection___&_IApplicationViewIconLoader___&_IImmersiveShellHookService___&_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice___std::nullptr_t_std::nullptr_t_std::nullptr_t__::_1_::dtor$0 @ 0x1803A9304 (_wil--MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_AppViewDataSourceScope_IApplication.c)
 *     _AppViewDataSourceAdapter_CreateInstance_::_1_::dtor$1 @ 0x1803ABA41 (_AppViewDataSourceAdapter_CreateInstance_--_1_--dtor$1.c)
 *     _AppViewDataSourceAdapter_CreateInstance_::_1_::dtor$1_0 @ 0x1803ABC12 (_AppViewDataSourceAdapter_CreateInstance_--_1_--dtor$1_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::~ComPtr<AppViewDataSourceAdapter>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(a1);
}
