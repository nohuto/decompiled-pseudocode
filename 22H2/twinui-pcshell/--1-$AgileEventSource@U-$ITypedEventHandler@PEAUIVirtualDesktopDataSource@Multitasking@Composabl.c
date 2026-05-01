/*
 * XREFs of ??1?$AgileEventSource@U?$ITypedEventHandler@PEAUIVirtualDesktopDataSource@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktopCollectionChangedEventArgs@2345@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAA@XZ @ 0x18022673C
 * Callers:
 *     ??_EShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAPEAXI@Z @ 0x1800B1BE0 (--_EShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAPEAXI@Z.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$1 @ 0x180242000 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$1.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$2 @ 0x180242010 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$2.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$3 @ 0x180242020 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$3.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$4 @ 0x180242033 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$4.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$5 @ 0x180242046 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$5.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$6 @ 0x180242059 (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$6.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$7 @ 0x18024206C (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$7.c)
 *     _CStartExperienceManager::CStartExperienceManager_::_1_::dtor$8 @ 0x18024207F (_CStartExperienceManager--CStartExperienceManager_--_1_--dtor$8.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$1 @ 0x1802D9317 (_TabViewManager--TabViewManager_--_1_--dtor$1.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$2 @ 0x1802D932A (_TabViewManager--TabViewManager_--_1_--dtor$2.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$3 @ 0x1802D933D (_TabViewManager--TabViewManager_--_1_--dtor$3.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$4 @ 0x1802D9350 (_TabViewManager--TabViewManager_--_1_--dtor$4.c)
 *     _TabViewManager::TabViewManager_::_1_::dtor$5 @ 0x1802D9363 (_TabViewManager--TabViewManager_--_1_--dtor$5.c)
 *     _ViewGroup::ViewGroup_::_1_::dtor$6 @ 0x180305868 (_ViewGroup--ViewGroup_--_1_--dtor$6.c)
 *     _VirtualDesktopDataSource::VirtualDesktopDataSource_::_1_::dtor$1 @ 0x1803E379D (_VirtualDesktopDataSource--VirtualDesktopDataSource_--_1_--dtor$1.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180095320 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>::~AgileEventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource *,Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs *>,Microsoft::WRL::InvokeModeOptions<2>>(
        __int64 *a1,
        volatile int *a2)
{
  __int64 v2; // r10
  __int64 v3; // r10

  v2 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    if ( !(unsigned int)Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(v2 + 12), a2) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
}
