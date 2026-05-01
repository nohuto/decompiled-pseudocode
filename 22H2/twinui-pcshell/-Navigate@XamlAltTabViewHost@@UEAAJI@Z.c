/*
 * XREFs of ?Navigate@XamlAltTabViewHost@@UEAAJI@Z @ 0x180381880
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007D6B4 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803585F8 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18035AF9C (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18035C604 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPr_ea_18035C604.c)
 *     ?RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatcherPriority@234@PE$AAVDispatchedHandler@234@@Z @ 0x18036416C (-RunAsync@ICoreDispatcher@Core@UI@Windows@@UE$AAAPE$AAUIAsyncAction@Foundation@4@W4CoreDispatche.c)
 *     ?get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ @ 0x18037DFBC (-get@Dispatcher@IWindow@Xaml@UI@Windows@@UE$AAAPE$AAVCoreDispatcher@Core@45@XZ.c)
 *     Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_adedda421da4a00589298a86f7993fb7___ @ 0x18037E5F8 (Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_adedda421da4a00589298a86f7993fb7.c)
 *     _lambda_adedda421da4a00589298a86f7993fb7_::_lambda_adedda421da4a00589298a86f7993fb7_ @ 0x18037EE68 (_lambda_adedda421da4a00589298a86f7993fb7_--_lambda_adedda421da4a00589298a86f7993fb7_.c)
 *     ??1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ @ 0x18037F908 (--1NavigateAltTab@XamlSwitcherTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180382474 (-StartActivity@NavigateAltTab@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
__int64 __fastcall XamlAltTabViewHost::Navigate(XamlAltTabViewHost *this, int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r14
  int v5; // r12d
  bool v6; // bl
  int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rdi
  __int64 v13; // rax
  _QWORD *v15; // [rsp+28h] [rbp-440h]
  _BYTE v16[336]; // [rsp+50h] [rbp-418h] BYREF
  int v17; // [rsp+1A0h] [rbp-2C8h] BYREF
  __int64 v18; // [rsp+1A8h] [rbp-2C0h]
  _QWORD v19[40]; // [rsp+1B0h] [rbp-2B8h] BYREF
  _QWORD v20[40]; // [rsp+2F0h] [rbp-178h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != 0LL));
  v5 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v4, 1);
  v6 = *((_QWORD *)this + 21) != 0LL;
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v20,
    (__int64)"NavigateAltTab");
  v20[0] = &XamlSwitcherTelemetry::NavigateAltTab::`vftable';
  XamlSwitcherTelemetry::NavigateAltTab::StartActivity((XamlSwitcherTelemetry::NavigateAltTab *)v20, v6);
  v8 = *((_QWORD *)this + 21);
  if ( v8 && (unsigned int)(a2 - 5) <= 1 )
  {
    v9 = __abi_winrt_ptr_ctor(v8);
    v17 = a2;
    v18 = __abi_winrt_ptr_ctor(v9);
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v19,
      (__int64)v20);
    v19[0] = &XamlSwitcherTelemetry::NavigateAltTab::`vftable';
    v10 = Windows::UI::Xaml::IWindow::Dispatcher::get(*((_QWORD *)this + 21));
    v15 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v11 = lambda_adedda421da4a00589298a86f7993fb7_::_lambda_adedda421da4a00589298a86f7993fb7_(
            (__int64)v16,
            (__int64)&v17);
    v12 = Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_adedda421da4a00589298a86f7993fb7___(v15, v11);
    v13 = Windows::UI::Core::ICoreDispatcher::RunAsync(v10, 0LL, (__int64)v12);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    if ( v12 )
      (*(void (__fastcall **)(_QWORD *))(*v12 + 16LL))(v12);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab((XamlSwitcherTelemetry::NavigateAltTab *)v19);
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v20, v7);
  }
  XamlSwitcherTelemetry::NavigateAltTab::~NavigateAltTab((XamlSwitcherTelemetry::NavigateAltTab *)v20);
  if ( v5 >= 0 )
    LeaveCriticalSection(v4);
  return 0LL;
}
