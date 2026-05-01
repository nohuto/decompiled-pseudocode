/*
 * XREFs of ??$CreateAgileHelper@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@YAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAPEAU345@@Z @ 0x180002700
 * Callers:
 *     ?Add@?$AgileEventSource@U?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAU?$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180002418 (-Add@-$AgileEventSource@U-$IEventHandler@PEAVAppMemoryUsageLimitChangingEventArgs@System@Windows.c)
 * Callees:
 *     ??B?$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ @ 0x1800026BC (--B-$ComPtrRef@VAgileRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVAgileRef@23@XZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs___Windows::System::IAppMemoryUsageLimitChangingEventArgs_____::_)(IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_19c629caca3fc168e565f554a8149559___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_19c629caca3fc168e565f554a8149559___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___ @ 0x1800027E0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IEven_ea_1800027E0.c)
 *     ?InternalRelease@?$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ @ 0x180008980 (-InternalRelease@-$ComPtr@UIAgileReference@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008C78 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18000A2A4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateAgileHelper<Windows::Foundation::IEventHandler<Windows::System::AppMemoryUsageLimitChangingEventArgs *>>(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rax
  int AgileReference; // ebx
  __int64 *v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rbx
  void *v9; // rax
  __int64 *v11; // rax
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
    Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(v4);
    AgileReference = RoGetAgileReference(0LL, &GUID_6030e7c3_f93f_5e9c_9ba2_9a018d2b09c0, a1, v6);
  }
  else
  {
    v11 = (__int64 *)*v4;
    v14 = 0LL;
    *v6 = 0LL;
    v13 = v11;
    Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v14);
  }
  if ( AgileReference >= 0 )
  {
    v7 = v12;
    v12 = 0LL;
    v8 = 0LL;
    v13 = v7;
    v9 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v9 )
      v8 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::System::AppMemoryUsageLimitChangingEventArgs___Windows::System::IAppMemoryUsageLimitChangingEventArgs_____::___IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_19c629caca3fc168e565f554a8149559___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::IEventHandler_Windows::System::AppMemoryUsageLimitChangingEventArgs____Microsoft::WRL::FtmBase___lambda_19c629caca3fc168e565f554a8149559___1_IInspectable___Windows::System::IAppMemoryUsageLimitChangingEventArgs___(
             v9,
             &v13);
    v14 = v8;
    Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v13);
    if ( v8 )
    {
      v14 = 0LL;
      *a2 = v8;
      AgileReference = 0;
    }
    else
    {
      AgileReference = -2147024882;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v14);
  }
  Microsoft::WRL::ComPtr<IAgileReference>::InternalRelease(&v12);
  return (unsigned int)AgileReference;
}
