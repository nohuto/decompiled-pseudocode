/*
 * XREFs of ??$MakeAndInitialize@VViewSizePreferencesChangedEventArgsImpl@@V1@AEAUSize@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAVViewSizePreferencesChangedEventArgsImpl@@AEAUSize@Foundation@Windows@@@Z @ 0x1800C7CFC
 * Callers:
 *     ??$MakeAndInitialize@VViewSizePreferencesChangedEventArgsImpl@@V1@AEAUSize@Foundation@Windows@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@@012@AEAUSize@Foundation@Windows@@@Z @ 0x1800C7E00 (--$MakeAndInitialize@VViewSizePreferencesChangedEventArgsImpl@@V1@AEAUSize@Foundati_ea_1800C7E00.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180096EFC (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?InternalAddRef@?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEBAXXZ @ 0x1800C912C (-InternalAddRef@-$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C9178 (-InternalRelease@-$ComPtr@VViewSizePreferencesChangedEventArgsImpl@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801B5BE0 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIWeakReferenceSource@@VFtmBase.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<ViewSizePreferencesChangedEventArgsImpl,ViewSizePreferencesChangedEventArgsImpl,Windows::Foundation::Size &>(
        _QWORD *a1,
        _QWORD *a2)
{
  unsigned int v2; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rbx
  _QWORD *v7; // rsi
  _QWORD *v9; // [rsp+40h] [rbp+8h] BYREF
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v5;
  v6 = v5;
  if ( v5 )
  {
    v7 = v5 + 1;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,IWeakReferenceSource,Microsoft::WRL::FtmBase>(v5 + 1);
    v6[7] = 1LL;
    *v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
    v6[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::Holographic::IViewSizePreferencesChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_BYTE *)v6 + 72) = 0;
    *v6 = &ViewSizePreferencesChangedEventArgsImpl::`vftable';
    v9 = v6;
    *v7 = &ViewSizePreferencesChangedEventArgsImpl::`vftable'{for `IWeakReferenceSource'};
    v6[2] = &ViewSizePreferencesChangedEventArgsImpl::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v6[8] = *a2;
    v10 = 0LL;
    Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgsImpl>::InternalAddRef(&v9);
    *a1 = v6;
    Microsoft::WRL::ComPtr<ViewSizePreferencesChangedEventArgsImpl>::InternalRelease(&v9);
  }
  else
  {
    v2 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
  return v2;
}
