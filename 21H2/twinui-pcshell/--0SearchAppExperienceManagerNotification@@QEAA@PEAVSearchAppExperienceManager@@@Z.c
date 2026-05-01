/*
 * XREFs of ??0SearchAppExperienceManagerNotification@@QEAA@PEAVSearchAppExperienceManager@@@Z @ 0x1802651EC
 * Callers:
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x180265D3C (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

SearchAppExperienceManagerNotification *__fastcall SearchAppExperienceManagerNotification::SearchAppExperienceManagerNotification(
        SearchAppExperienceManagerNotification *this,
        struct SearchAppExperienceManager *a2)
{
  *((_QWORD *)this + 5) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ISearchAppExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ISearchAppExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ISearchAppExperienceManagerNotification,IWeakReferenceSource,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ISearchAppExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ISearchAppExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 6) = a2;
  *(_QWORD *)this = &SearchAppExperienceManagerNotification::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &SearchAppExperienceManagerNotification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,TwinUI::Cortana::ISearchAppExperienceManagerNotification,IWeakReferenceSource,Windows::Foundation::IClosable>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,TwinUI::Cortana::ISearchAppExperienceManagerNotification,Windows::Foundation::IClosable>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &SearchAppExperienceManagerNotification::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Foundation::IClosable>'};
  return this;
}
