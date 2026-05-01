/*
 * XREFs of _anonymous_namespace_::GetWicBitmapFromStreamReference @ 0x180149E1C
 * Callers:
 *     _anonymous_namespace_::GetLogoFileFromContent @ 0x18014978C (_anonymous_namespace_--GetLogoFileFromContent.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800869A0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?check_hresult@winrt@@YAXUhresult@1@@Z @ 0x18009A6DC (-check_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??1?$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ @ 0x1800A130C (--1-$com_ptr@UIWeakReferenceSource@impl@winrt@@@winrt@@QEAA@XZ.c)
 *     ??$as@UIUnknown@@@IUnknown@Foundation@Windows@winrt@@QEBA?AU?$com_ptr@UIUnknown@@@3@XZ @ 0x1800E5A14 (--$as@UIUnknown@@@IUnknown@Foundation@Windows@winrt@@QEBA-AU-$com_ptr@UIUnknown@@@3@XZ.c)
 *     ??$wait_for_completed@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YAXAEBU?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@1@I@Z @ 0x1800F40CC (--$wait_for_completed@U-$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Win.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncOperation@U?$IAsyncOperation@UIRandomAccessStreamWithContentType@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@UIRandomAccessStreamWithContentType@Streams@Storage@34@@impl@winrt@@QEBA?AUIRandomAccessStreamWithContentType@Streams@Storage@Windows@3@XZ @ 0x1800F5E10 (-GetResults@-$consume_Windows_Foundation_IAsyncOperation@U-$IAsyncOperation@UIRandomAccessStream.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA?AW4AsyncStatus@Foundation@Windows@3@XZ @ 0x1800FE1E0 (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UIRandomAccessStreamReference.c)
 *     ?Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ @ 0x18013DC5C (-Provider@PinManagerTelemetry@@SAQEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ @ 0x18049EFEC (-unconditional_release_ref@-$com_ptr@UIGraphicsCaptureItemInterop@@@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=12
__int64 (__fastcall ***__fastcall anonymous_namespace_::GetWicBitmapFromStreamReference(
        __int64 (__fastcall ***a1)(_QWORD, __int64 *, _QWORD **),
        __int64 *a2))(_QWORD, __int64 *, _QWORD **)
{
  HRESULT v4; // eax
  wil::details::in1diag3 *v5; // rcx
  unsigned int v6; // eax
  _QWORD *v7; // rax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  const struct _tlgProvider_t *v15; // rax
  __int64 (__fastcall **v16)(_QWORD, __int64 *, _QWORD **); // rax
  __int64 v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall **v20)(_QWORD, __int64 *, _QWORD **); // [rsp+48h] [rbp-38h] BYREF
  int v21[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v22; // [rsp+58h] [rbp-28h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-20h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, __int64 *, _QWORD **); // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v24 = a1;
  v19[1] = (__int64)a2;
  ppv = 0LL;
  v4 = CoCreateInstance(&CLSID_WICImagingFactory2, 0LL, 1u, &GUID_ec5ec8a9_c395_4314_9c77_54d7a935ff70, &ppv);
  v5 = retaddr;
  if ( v4 < 0 )
    goto LABEL_15;
  v18 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a2 + 48LL))(*a2, &v18);
  winrt::check_hresult(v6);
  v19[0] = v18;
  if ( !(unsigned int)winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamReference>>::Status((__int64)v19) )
    winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>>((__int64)v19);
  winrt::impl::consume_Windows_Foundation_IAsyncOperation<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>,winrt::Windows::Storage::Streams::IRandomAccessStreamWithContentType>::GetResults(
    v19,
    (winrt *)&v24);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(v19);
  v22 = 0LL;
  v7 = winrt::Windows::Foundation::IUnknown::as<IUnknown>(&v24, &v18);
  v8 = CreateStreamOverRandomAccessStream(*v7, &GUID_0000000c_0000_0000_c000_000000000046, &v22);
  v9 = retaddr;
  if ( v8 < 0 )
    goto LABEL_16;
  if ( v18 )
    winrt::com_ptr<IGraphicsCaptureItemInterop>::unconditional_release_ref(&v18);
  *(_QWORD *)v21 = 0LL;
  v10 = *(_QWORD *)ppv;
  *(_QWORD *)v21 = 0LL;
  v11 = (*(__int64 (__fastcall **)(LPVOID, __int64, GUID *, _QWORD, int *))(v10 + 32))(
          ppv,
          v22,
          &GUID_VendorMicrosoftBuiltIn,
          0LL,
          v21);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_17:
    wil::details::in1diag3::Throw_Hr(
      v12,
      120LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  v20 = 0LL;
  v13 = **(_QWORD **)v21;
  v20 = 0LL;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(v13 + 104))(*(_QWORD *)v21, 0LL, &v20);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      122LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v14);
LABEL_15:
    wil::details::in1diag3::Throw_Hr(
      v5,
      112LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v4);
LABEL_16:
    wil::details::in1diag3::Throw_Hr(
      v9,
      116LL,
      (__int64)"pcshell\\twinui\\pinmanager\\lib\\NotificationPinConsentPrompt.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_17;
  }
  v15 = PinManagerTelemetry::Provider((__int64)retaddr);
  if ( *(_DWORD *)v15 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v15,
      byte_1805A1E5A,
      0LL);
  v16 = v20;
  v20 = 0LL;
  *a1 = v16;
  if ( *(_QWORD *)v21 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v21 + 16LL))(*(_QWORD *)v21);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v22);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>((__int64 *)&v24);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&ppv);
  winrt::com_ptr<winrt::impl::IWeakReferenceSource>::~com_ptr<winrt::impl::IWeakReferenceSource>(a2);
  return a1;
}
