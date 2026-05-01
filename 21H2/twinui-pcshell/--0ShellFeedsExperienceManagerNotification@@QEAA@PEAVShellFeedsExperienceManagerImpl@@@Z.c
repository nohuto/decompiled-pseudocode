/*
 * XREFs of ??0ShellFeedsExperienceManagerNotification@@QEAA@PEAVShellFeedsExperienceManagerImpl@@@Z @ 0x1800B128C
 * Callers:
 *     ?RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@@Z @ 0x1800B781C (-RuntimeClassInitialize@ShellFeedsExperienceManagerImpl@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

ShellFeedsExperienceManagerNotification *__fastcall ShellFeedsExperienceManagerNotification::ShellFeedsExperienceManagerNotification(
        ShellFeedsExperienceManagerNotification *this,
        struct ShellFeedsExperienceManagerImpl *a2)
{
  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification,IWeakReferenceSource,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &ShellFeedsExperienceManagerNotification::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 6) = a2;
  *(_QWORD *)this = &ShellFeedsExperienceManagerNotification::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &ShellFeedsExperienceManagerNotification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::ShellFeeds::IShellFeedsExperienceManagerNotification,IWeakReferenceSource,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &ShellFeedsExperienceManagerNotification::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &ShellFeedsExperienceManagerNotification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  return this;
}
