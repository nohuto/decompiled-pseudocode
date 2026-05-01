/*
 * XREFs of ?TabShellHotKeyHandler_CreateInstance@@YAJPEAUIImmersiveWindowMessageService@@PEAUIApplicationViewCollection@@PEAUITabViewManager@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUITabController@5678@PEAUITitleBarController@@AEBU_GUID@@PEAPEAX@Z @ 0x180302CB4
 * Callers:
 *     ?CreateHotKeyHandler@TabViewManager@@AEAAJXZ @ 0x1802DCC54 (-CreateHotKeyHandler@TabViewManager@@AEAAJXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009645C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VTabShellHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabViewManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@6789@AEAPEAUITitleBarController@@@Details@WRL@Microsoft@@YAJPEAPEAVTabShellHotKeyHandler@@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIApplicationViewCollection@@AEAPEAUITabViewManager@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUITabController@89Internal@Windows@@AEAPEAUITitleBarController@@@Z @ 0x18030178C (--$MakeAndInitialize@VTabShellHotKeyHandler@@V1@AEAPEAUIImmersiveWindowMessageService@@AEAPEAUIA.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyReconnectAdapter@@UIMessageProxyListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180302B50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIMessageProxyRec.c)
 *     ?copy_to@?$com_ptr_t@VTabShellHotKeyHandler@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PEAPEAX@Z @ 0x180302F20 (-copy_to@-$com_ptr_t@VTabShellHotKeyHandler@@Uerr_exception_policy@wil@@@wil@@QEBAXAEBU_GUID@@PE.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabShellHotKeyHandler_CreateInstance(
        struct IImmersiveWindowMessageService *a1,
        struct IApplicationViewCollection *a2,
        struct ITabViewManager *a3,
        struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *a4,
        struct Windows::Internal::ComposableShell::Tabs::ITabController *a5,
        struct ITitleBarController *a6,
        const struct _GUID *a7,
        void **a8)
{
  void **v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  volatile int *v11; // rdx
  const char *v12; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IImmersiveWindowMessageService *v15; // [rsp+50h] [rbp+8h] BYREF
  struct IApplicationViewCollection *v16; // [rsp+58h] [rbp+10h] BYREF
  struct ITabViewManager *v17; // [rsp+60h] [rbp+18h] BYREF
  struct Windows::Internal::ComposableShell::Tabs::ITabDataModel *v18; // [rsp+68h] [rbp+20h] BYREF

  v18 = a4;
  v17 = a3;
  v16 = a2;
  v15 = a1;
  v8 = a8;
  *a8 = 0LL;
  a8 = 0LL;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<TabShellHotKeyHandler,TabShellHotKeyHandler,IImmersiveWindowMessageService * &,IApplicationViewCollection * &,ITabViewManager * &,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,Windows::Internal::ComposableShell::Tabs::ITabController * &,ITitleBarController * &>(
         (TabShellHotKeyHandler **)&a8,
         &v15,
         &v16,
         &v17,
         &v18,
         &a5,
         &a6);
  try
  {
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        311LL,
        (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
        (const char *)(unsigned int)v9);
    wil::com_ptr_t<TabShellHotKeyHandler,wil::err_exception_policy>::copy_to(&a8, v10, v8);
    if ( a8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IMessageProxyReconnectAdapter,IMessageProxyListener>::Release(
        (__int64)a8,
        v11);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x13B,
                           (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabshellhotkeyhandler.cpp",
                           v12);
  }
  return result;
}
