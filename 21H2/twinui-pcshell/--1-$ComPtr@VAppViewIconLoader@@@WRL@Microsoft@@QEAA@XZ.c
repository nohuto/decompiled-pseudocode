/*
 * XREFs of ??1?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@QEAA@XZ @ 0x1802268E0
 * Callers:
 *     _ShellFeedsExperienceManagerImpl::_RegisterMessages_::_1_::dtor$1 @ 0x1800B9755 (_ShellFeedsExperienceManagerImpl--_RegisterMessages_--_1_--dtor$1.c)
 *     _CortanaSharedExperienceManager::_RegisterMessages_::_1_::dtor$1 @ 0x18022CC19 (_CortanaSharedExperienceManager--_RegisterMessages_--_1_--dtor$1.c)
 *     ?_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ @ 0x180266900 (-_RegisterMessages@SearchAppExperienceManager@@AEAAJXZ.c)
 *     _SearchAppExperienceManager::_RegisterMessages_::_1_::dtor$1 @ 0x180266BA2 (_SearchAppExperienceManager--_RegisterMessages_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AppViewIconLoader_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_&_IApplicationView___Windows::UI::Xaml::Media::Imaging::IWriteableBitmap___IApplicationViewIconLoader____::_1_::dtor$1 @ 0x1803A90E5 (_Microsoft--WRL--Details--MakeAndInitialize_AppViewIconLoader_AppViewIconLoader_Win_ea_1803A90E5.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_&_IApplicationView___Windows::UI::Xaml::Media::Imaging::IWriteableBitmap___IApplicationViewIconLoader____::_1_::dtor$0 @ 0x1803A9460 (_wil--MakeAndInitializeOrThrow_AppViewIconLoader_Windows--Internal--ComposableShell--Multitaskin.c)
 *     _AppViewIconFactory::CreateImageSource_::_1_::dtor$3 @ 0x1803ABFFD (_AppViewIconFactory--CreateImageSource_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewIconLoader>::~ComPtr<AppViewIconLoader>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(a1);
}
