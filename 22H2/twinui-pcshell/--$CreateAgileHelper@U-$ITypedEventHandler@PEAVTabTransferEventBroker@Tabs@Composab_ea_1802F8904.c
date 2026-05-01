/*
 * XREFs of ??$CreateAgileHelper@U?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@PEAVTabViewProvidedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@PEAVTabViewProvidedEventArgs@2345@@Foundation@Windows@@PEAPEAU345@@Z @ 0x1802F8904
 * Callers:
 *     ?add_TabViewProvided@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU?$ITypedEventHandler@PEAVTabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@PEAVTabViewProvidedEventArgs@2345@@Foundation@5@PEAUEventRegistrationToken@@@Z @ 0x1802FA540 (-add_TabViewProvided@TabTransferEventBroker@Tabs@ComposableShell@Internal@Windows@@UEAAJPEAU-$IT.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x180078D60 (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008FD44 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabViewProvidedEventArgs_____::_)(Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ITabViewProvidedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs____Microsoft::WRL::FtmBase___lambda_97cc703bb6b513e0893de78a7a46eca1___1_Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ITabViewProvidedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs____Microsoft::WRL::FtmBase___lambda_97cc703bb6b513e0893de78a7a46eca1___1_Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ITabViewProvidedEventArgs___ @ 0x1802F91C0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802F91C0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::ITypedEventHandler<Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker *,Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs *>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  int AgileReference; // ebx
  __int64 *v6; // rdi
  __int64 *v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  void *v10; // rax
  __int64 *v12; // [rsp+50h] [rbp+30h] BYREF
  __int64 *v13; // [rsp+58h] [rbp+38h] BYREF
  __int64 v14; // [rsp+60h] [rbp+40h] BYREF

  *a2 = 0LL;
  v12 = 0LL;
  v13 = (__int64 *)&v12;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::AgileRef>::operator Microsoft::WRL::AgileRef *(&v13);
  AgileReference = 0;
  v6 = v4;
  if ( a1 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_7872b1fb_501f_564a_8a25_8a51a11f3bb7, a1, v6);
  }
  else
  {
    v7 = (__int64 *)*v4;
    v14 = 0LL;
    *v6 = 0LL;
    v13 = v7;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  if ( AgileReference >= 0 )
  {
    v8 = v12;
    v12 = 0LL;
    v9 = 0LL;
    v13 = v8;
    v10 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v10 )
      v9 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker____Windows::Foundation::Internal::AggregateType_Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs___Windows::Internal::ComposableShell::Tabs::ITabViewProvidedEventArgs_____::___Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ITabViewProvidedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs____Microsoft::WRL::FtmBase___lambda_97cc703bb6b513e0893de78a7a46eca1___1_Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ITabViewProvidedEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::TabViewProvidedEventArgs____Microsoft::WRL::FtmBase___lambda_97cc703bb6b513e0893de78a7a46eca1___1_Windows::Internal::ComposableShell::Tabs::ITabTransferEventBroker___Windows::Internal::ComposableShell::Tabs::ITabViewProvidedEventArgs___(
             v10,
             &v13);
    v14 = v9;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    if ( v9 )
    {
      v14 = 0LL;
      *a2 = v9;
      AgileReference = 0;
    }
    else
    {
      AgileReference = -2147024882;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return (unsigned int)AgileReference;
}
