/*
 * XREFs of ??$Make@VClientWindowReadyForPresentationEventArgs@@AEB_N@Details@WRL@Microsoft@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@12@AEB_N@Z @ 0x1800462D0
 * Callers:
 *     ??$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x1800CB538 (--$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA-AV-$ComPtr@VClientWindo.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD64 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make<ClientWindowReadyForPresentationEventArgs,bool const &>(
        _QWORD *a1,
        char *a2)
{
  _QWORD *v4; // rbx
  char v5; // r15
  __int64 *v6; // r14
  LPUNKNOWN v7; // rdi
  __int64 v8; // rcx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbp
  LPUNKNOWN v10; // rcx
  LPUNKNOWN ppunkMarshal; // [rsp+40h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v5 = *a2;
    ppunkMarshal = 0LL;
    v6 = v4 + 5;
    v4[2] = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    v4[5] = 0LL;
    if ( CoCreateFreeThreadedMarshaler(0LL, &ppunkMarshal) >= 0 )
    {
      v7 = ppunkMarshal;
      v8 = *v6;
      QueryInterface = ppunkMarshal->lpVtbl->QueryInterface;
      if ( *v6 )
      {
        *v6 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
      ((void (__fastcall *)(LPUNKNOWN, GUID *, _QWORD *))QueryInterface)(
        v7,
        &GUID_00000003_0000_0000_c000_000000000046,
        v4 + 5);
    }
    v10 = ppunkMarshal;
    if ( ppunkMarshal )
    {
      ppunkMarshal = 0LL;
      ((void (__fastcall *)(LPUNKNOWN))v10->lpVtbl->Release)(v10);
    }
    v4[7] = 1LL;
    *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable';
    v4[1] = &ClientWindowReadyForPresentationEventArgs::`vftable'{for `IWeakReferenceSource'};
    v4[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_BYTE *)v4 + 64) = v5;
    *v4 = &ClientWindowReadyForPresentationEventArgs::`vftable';
    v4[1] = &ClientWindowReadyForPresentationEventArgs::`vftable'{for `IWeakReferenceSource'};
    v4[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<1>,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( *a1 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 16LL))(*a1);
    *a1 = v4;
  }
  return a1;
}
