/*
 * XREFs of ?StartActivity@PortToHolographic@Win32BackedViewHostItemTelemetry@@QEAAXPEAUIWin32ApplicationView@@@Z @ 0x1802C1ED0
 * Callers:
 *     ?PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z @ 0x1802C0420 (-PortToHolographic@Win32BackedViewHostItem@Holographic@Shell@Internal@Windows@@UEAAJPEAE@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001CC08 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002F6D0 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x18008EE40 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ??$com_query_failfast@UIApplicationView@@AEAPEAUIWin32ApplicationView@@@wil@@YA?AV?$com_ptr_t@UIApplicationView@@Uerr_failfast_policy@wil@@@0@AEAPEAUIWin32ApplicationView@@@Z @ 0x1800C8260 (--$com_query_failfast@UIApplicationView@@AEAPEAUIWin32ApplicationView@@@wil@@YA-AV-$com_ptr_t@UI.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@44@Z @ 0x1801FC538 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U2@U2@@-$_tlgWriteTe.c)
 *     ?get@?$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedViewHostItemTelemetryProvider@@P6AXXZ@Z @ 0x1802C5ADC (-get@-$static_lazy@VWin32BackedViewHostItemTelemetryProvider@@@details@wil@@QEAAPEAVWin32BackedV.c)
 *     ?zInternalStart@?$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1802C7134 (-zInternalStart@-$ActivityBase@VWin32BackedViewHostItemTelemetryProvider@@$00$0CAAAAAAAAAAA@$04$.c)
 */

void __fastcall Win32BackedViewHostItemTelemetry::PortToHolographic::StartActivity(
        Win32BackedViewHostItemTelemetry::PortToHolographic *this,
        struct IWin32ApplicationView *a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  int (__fastcall *v5)(__int64, LPVOID *); // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  _DWORD *v8; // rbx
  const GUID *v9; // rax
  LPVOID pv; // [rsp+50h] [rbp-20h] BYREF
  HWND hWnd; // [rsp+58h] [rbp-18h] BYREF
  __int64 v12; // [rsp+60h] [rbp-10h] BYREF
  __int64 v13; // [rsp+68h] [rbp-8h] BYREF
  __int64 v14; // [rsp+98h] [rbp+28h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+38h] BYREF

  v14 = (__int64)a2;
  hWnd = 0LL;
  if ( (*(int (__fastcall **)(struct IWin32ApplicationView *, HWND *))(*(_QWORD *)a2 + 24LL))(a2, &hWnd) >= 0 )
  {
    pv = 0LL;
    v3 = wil::com_query_failfast<IApplicationView,IWin32ApplicationView * &>((__int64)&v15, &v14);
    v4 = *(_QWORD *)v3;
    v5 = *(int (__fastcall **)(__int64, LPVOID *))(**(_QWORD **)v3 + 136LL);
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    LOBYTE(v5) = v5(v4, &pv) >= 0;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v15);
    if ( (_BYTE)v5 )
    {
      wil::ActivityBase<Win32BackedViewHostItemTelemetryProvider,1,35184372088832,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStart(this);
      v7 = wil::details::static_lazy<Win32BackedViewHostItemTelemetryProvider>::get(
             v6,
             _lambda_ec1d4b054d630c017dce9880fb168525_::_lambda_invoker_cdecl_);
      v8 = *(_DWORD **)(v7 + 8);
      if ( *v8 > 5u && tlgKeywordOn(*(_QWORD *)(v7 + 8), 0x200000000000LL) )
      {
        LODWORD(v14) = IsWindowVisible(hWnd);
        LODWORD(v15) = (_DWORD)hWnd;
        v12 = (__int64)pv;
        LODWORD(v16) = GetCurrentThreadId();
        v13 = 0x2000000LL;
        v9 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          (__int64)v8,
          (unsigned __int8 *)dword_180582DDF,
          (const GUID *)(*((_QWORD *)this + 6) + 8LL),
          v9,
          (__int64)&v13,
          (__int64)&v16,
          (const WCHAR **)&v12,
          (__int64)&v15,
          (__int64)&v14);
      }
      if ( !*((_DWORD *)this + 8) )
        wil::details::ThreadFailureCallbackHolder::StartWatching((Win32BackedViewHostItemTelemetry::PortToHolographic *)((char *)this + 8));
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
}
