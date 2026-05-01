/*
 * XREFs of ?OnSystemKeyPressedComplete@ViewManagerBridge@@UEAAJIW4SystemKey@Navigation@@_N@Z @ 0x180330EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180064728 (-Stop@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProvid.c)
 *     ??0?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18007CBA4 (--0-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ??1?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18007CC78 (--1-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Destroy@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18007CCFC (-Destroy@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     __security_check_cookie @ 0x18008FA50 (__security_check_cookie.c)
 *     ?ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18031A3F0 (-ViewOperationRequestComplete@ViewEventDispatcher@@QEAAXIW4ViewOperationRequestType@@W4AppReques.c)
 *     ?StartActivity@OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@QEAAXKK_N@Z @ 0x1803337C8 (-StartActivity@OnSystemKeyPressedComplete@ViewManagerInteropTraceLogging@@QEAAXKK_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewManagerBridge::OnSystemKeyPressedComplete(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int8 a4)
{
  unsigned int v4; // edi
  _QWORD v9[40]; // [rsp+20h] [rbp-178h] BYREF

  v4 = a4;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v9,
    (__int64)"OnSystemKeyPressedComplete");
  v9[0] = &ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::`vftable';
  ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::StartActivity(
    (ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete *)v9,
    a2,
    a3,
    v4);
  if ( a3 == 1 )
    ViewEventDispatcher::ViewOperationRequestComplete(*(RTL_SRWLOCK **)(a1 + 48), a2, 0, v4);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v9, 0);
  v9[0] = &ViewManagerInteropTraceLogging::OnSystemKeyPressedComplete::`vftable';
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<ViewManagerInteropLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
  return 0LL;
}
