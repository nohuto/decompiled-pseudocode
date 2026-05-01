/*
 * XREFs of ??0?$RuntimeClass@U?$Implements@U?$IVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@Collections@Foundation@Windows@@U?$IIterable@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@U?$IObservableVector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@@234@@WRL@Microsoft@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x180026ACC
 * Callers:
 *     ??0?$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayRegionIdEqualityPredicate@2345@UDisplayRegionIdLifetimeTraits@2345@U?$VectorOptions@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@$00$00$0A@@4Collections@Foundation@5@@Internal@Collections@Foundation@Windows@@QEAA@AEBUDisplayRegionIdEqualityPredicate@WindowingEnvironment@ApplicationModel@14@Upermission@01234@@Z @ 0x1800989C0 (--0-$Vector@UDisplayRegionId@WindowingEnvironment@ApplicationModel@Internal@Windows@@UDisplayReg.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>,Microsoft::WRL::FtmBase>(
        _QWORD *a1)
{
  __int64 *v1; // rsi
  LPUNKNOWN v3; // rbx
  __int64 v4; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  LPUNKNOWN v6; // rcx
  LPUNKNOWN v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v1 = a1 + 8;
  *a1 = &Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>::`vftable';
  a1[1] = &Windows::Foundation::Collections::IIterable<unsigned int>::`vftable';
  a1[2] = &Microsoft::WRL::ChainInterfaces<IVirtualDesktopPersistence2,IVirtualDesktopPersistence,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
  a1[5] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  a1[8] = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &v8) >= 0 )
  {
    v3 = v8;
    v4 = *v1;
    QueryInterface = v8->lpVtbl->QueryInterface;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, __int64 *))QueryInterface)(
      v3,
      &GUID_00000003_0000_0000_c000_000000000046,
      v1);
  }
  v6 = v8;
  if ( v8 )
  {
    v8 = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v6->lpVtbl->Release)(v6);
  }
  a1[10] = 1LL;
  *a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>,Microsoft::WRL::FtmBase>::`vftable';
  a1[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>'};
  a1[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>'};
  a1[4] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>,Microsoft::WRL::FtmBase>::`vftable'{for `IWeakReferenceSource'};
  a1[5] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::Implements<Windows::Foundation::Collections::IVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IIterable<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>,Windows::Foundation::Collections::IObservableVector<Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId>>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
