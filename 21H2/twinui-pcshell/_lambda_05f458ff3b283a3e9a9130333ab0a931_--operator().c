/*
 * XREFs of _lambda_05f458ff3b283a3e9a9130333ab0a931_::operator() @ 0x18035FFD8
 * Callers:
 *     _lambda_05f458ff3b283a3e9a9130333ab0a931_::_lambda_invoker_cdecl_ @ 0x18035F080 (_lambda_05f458ff3b283a3e9a9130333ab0a931_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180065834 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009647C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18035C0D0 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035C13C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z @ 0x18035D290 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z.c)
 *     Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_47949b86cac825ad79df017cffdf46fe___ @ 0x18035F090 (Windows--UI--Xaml--ApplicationInitializationCallback--ApplicationInitializationCallback__lambda_.c)
 *     wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___ @ 0x18035F820 (wil--details--ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___--ScopeExitFn__lambda_d1cc8.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_ @ 0x18035FC0C (_lambda_d1cc878f49256a12ed651bb70f914db7_--__lambda_d1cc878f49256a12ed651bb70f914db7_.c)
 *     _lambda_d1cc878f49256a12ed651bb70f914db7_::operator() @ 0x1803602AC (_lambda_d1cc878f49256a12ed651bb70f914db7_--operator().c)
 *     _WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_scalar_deleting_destructor_ @ 0x180360494 (_WindowsInternal--ComposableShell--Desktop--XamlExplorerHostApp--CreateView_--_2_--_ea_180360494.c)
 *     ?StartInCoreWindowHostingMode@IFrameworkApplicationStaticsPrivate@Xaml@UI@Windows@@UE$AAAXVWindowCreationParameters@234@PE$AAVApplicationInitializationCallback@234@@Z @ 0x1803617D8 (-StartInCoreWindowHostingMode@IFrameworkApplicationStaticsPrivate@Xaml@UI@Windows@@UE$AAAXVWindo.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall lambda_05f458ff3b283a3e9a9130333ab0a931_::operator()(__int64 a1, _DWORD *a2)
{
  int v3; // r15d
  _QWORD *v4; // rcx
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rbx
  int ActivationFactory; // eax
  __int64 (__fastcall ***v9)(_QWORD, __int64, __int64 *); // rsi
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+30h] [rbp-98h]
  __int128 v15; // [rsp+40h] [rbp-88h] BYREF
  int v16; // [rsp+50h] [rbp-78h]
  _QWORD v17[3]; // [rsp+60h] [rbp-68h] BYREF
  char v18; // [rsp+78h] [rbp-50h]
  __int64 (__fastcall ***v19)(_QWORD, __int64, __int64 *); // [rsp+80h] [rbp-48h]
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-40h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v15 = *(_OWORD *)a2;
  v3 = a2[4];
  wil::details::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___::ScopeExitFn__lambda_d1cc878f49256a12ed651bb70f914db7___(
    (__int64)v17,
    (__int64)(a2 + 6));
  WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::CreateView_::_2_::ThreadData::_scalar_deleting_destructor_(a2);
  try
  {
    v4 = Platform::Details::Heap::Allocate(0x18uLL, 0x130uLL);
    v5 = Windows::UI::Xaml::ApplicationInitializationCallback::ApplicationInitializationCallback__lambda_47949b86cac825ad79df017cffdf46fe___(v4);
    v6 = __abi_winrt_ptr_ctor((__int64)v5);
    v13[1] = v6;
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
    v13[0] = 0LL;
    v21 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.UI.Xaml.Application",
      0x1Cu,
      0x1Bu);
    v7 = v21;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    ActivationFactory = RoGetActivationFactory(v7, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v13);
    if ( ActivationFactory < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        70LL,
        (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostapp.cpp",
        (const char *)(unsigned int)ActivationFactory);
    v9 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))__abi_winrt_ptr_ctor(v13[0]);
    v19 = v9;
    v10 = __abi_winrt_cast_to(0, v9, (__int64)&_uuidof__AUIFrameworkApplicationStaticsPrivate_Xaml_UI_Windows__);
    v14 = v10;
    v11 = __abi_winrt_ptr_ctor(v10);
    v14 = v11;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    v16 = v3;
    Windows::UI::Xaml::IFrameworkApplicationStaticsPrivate::StartInCoreWindowHostingMode(v11, &v15, v6);
    v18 = 0;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v9 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v9)[2])(v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v18 )
    {
      v18 = 0;
      lambda_d1cc878f49256a12ed651bb70f914db7_::operator()(v17);
    }
    lambda_d1cc878f49256a12ed651bb70f914db7_::__lambda_d1cc878f49256a12ed651bb70f914db7_(v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return 0xFFFFFFFFLL;
  }
  return result;
}
