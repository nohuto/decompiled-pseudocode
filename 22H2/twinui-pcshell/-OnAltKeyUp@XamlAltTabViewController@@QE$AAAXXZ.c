/*
 * XREFs of ?OnAltKeyUp@XamlAltTabViewController@@QE$AAAXXZ @ 0x180390148
 * Callers:
 *     ?AltTabHookProc@AltTabWindowHook@@CA_JH_K_J@Z @ 0x18038F940 (-AltTabHookProc@AltTabWindowHook@@CA_JH_K_J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803585F8 (--0-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ??1?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180358964 (--1-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Destroy@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1803593B4 (-Destroy@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18035AF9C (-Stop@-$ActivityBase@VXamlSwitcherLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18035BE6C (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_2e36a2b14ac9c065e7d81a4387bad0af___ @ 0x18038E5D4 (CreationThreadDispatcher--RunAsync__lambda_2e36a2b14ac9c065e7d81a4387bad0af___.c)
 *     ?StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180390894 (-StartActivity@OnAltKeyUp@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall XamlAltTabViewController::OnAltKeyUp(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // edx
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rbx
  int v8; // eax
  int v9[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+28h] [rbp-D8h]
  __int64 v11; // [rsp+30h] [rbp-D0h]
  __int64 v12; // [rsp+38h] [rbp-C8h]
  __int64 v13; // [rsp+40h] [rbp-C0h]
  _QWORD v14[40]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  v2 = *(_QWORD *)(a1 + 56);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v14,
    (__int64)"OnAltKeyUp");
  v14[0] = &XamlSwitcherTelemetry::OnAltKeyUp::`vftable';
  XamlSwitcherTelemetry::OnAltKeyUp::StartActivity((XamlSwitcherTelemetry::OnAltKeyUp *)v14, v2 != 0);
  if ( !*(_BYTE *)(a1 + 160) && *(_QWORD *)(a1 + 56) )
  {
    v4 = __abi_winrt_ptr_ctor(a1);
    v11 = v4;
    v5 = __abi_winrt_ptr_ctor(a1);
    v12 = v5;
    v6 = __abi_winrt_ptr_ctor(v4);
    v13 = v6;
    v7 = *(_QWORD *)(a1 + 88);
    *(_QWORD *)v9 = __abi_winrt_ptr_ctor(v5);
    v10 = __abi_winrt_ptr_ctor(v6);
    v8 = CreationThreadDispatcher::RunAsync__lambda_2e36a2b14ac9c065e7d81a4387bad0af___(v7, v9);
    if ( v8 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        139LL,
        (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlalttabviewcontroller.cpp",
        (const char *)(unsigned int)v8);
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v14, v3);
  v14[0] = &XamlSwitcherTelemetry::OnAltKeyUp::`vftable';
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v14);
  wil::ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<XamlSwitcherLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v14);
}
