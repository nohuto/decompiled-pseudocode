/*
 * XREFs of _wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_AppViewDataSourceScope_IApplicationViewCollection___&_IApplicationViewIconLoader___&_IImmersiveShellHookService___&_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice___std::nullptr_t_std::nullptr_t_std::nullptr_t__::_1_::dtor$0 @ 0x1803A9304
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x1803AAB08 (--1-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_enum_AppViewDataSourceScope_IApplicationViewCollection_____IApplicationViewIconLoader_____IImmersiveShellHookService_____Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice___std::nullptr_t_std::nullptr_t_std::nullptr_t__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 80) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 80) &= ~1u;
    return Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::~ComPtr<AppViewDataSourceAdapter>(*(_QWORD *)(a2 + 112));
  }
  return result;
}
