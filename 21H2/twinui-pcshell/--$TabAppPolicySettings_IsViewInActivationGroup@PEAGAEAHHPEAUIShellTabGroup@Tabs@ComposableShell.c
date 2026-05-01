/*
 * XREFs of ??$TabAppPolicySettings_IsViewInActivationGroup@PEAGAEAHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@TabViewManagerTraceLogging@@SAX$$QEAPEAGAEAH$$QEAH$$QEAPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@AEAE@Z @ 0x1802F2ED0
 * Callers:
 *     ?IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@ApplicationModel@Windows@@PEAE@Z @ 0x1802F3A30 (-IsViewInActivationGroup@TabAppPolicySettings@@UEAAJHPEAUIActivatedEventArgs@Activation@Applicat.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x1800718B8 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ?IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z @ 0x1802E13C4 (-IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z.c)
 *     ?TabAppPolicySettings_IsViewInActivationGroup_@TabViewManagerTraceLogging@@QEAAXPEBGHHPEAUIShellTabGroup@Tabs@ComposableShell@Internal@Windows@@_N@Z @ 0x1802F3DF8 (-TabAppPolicySettings_IsViewInActivationGroup_@TabViewManagerTraceLogging@@QEAAXPEBGHHPEAUIShell.c)
 */

void __fastcall TabViewManagerTraceLogging::TabAppPolicySettings_IsViewInActivationGroup<unsigned short *,int &,int,Windows::Internal::ComposableShell::Tabs::IShellTabGroup *,unsigned char &>(
        const unsigned __int16 **a1,
        int *a2,
        int *a3,
        struct Windows::Internal::ComposableShell::Tabs::IShellTabGroup **a4,
        _BYTE *a5)
{
  TabViewManagerTraceLogging *v9; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+48h] [rbp-10h]

  if ( TabViewManagerTraceLogging::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`TabViewManagerTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v12 = &`TabViewManagerTraceLogging::Instance'::`2'::wrapper;
        Context = &qword_180650D20;
        qword_180650D20 = (__int64)&TabViewManagerTraceLogging::`vftable';
        atexit(_lambda_b55becccc8b67eee49088d4c1be9735f_::_lambda_invoker_cdecl_);
        v13 = 0;
        wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer((__int64)&v12);
      }
    }
    TabViewManagerTraceLogging::TabAppPolicySettings_IsViewInActivationGroup_(v9, *a1, *a2, *a3, *a4, *a5 != 0);
  }
}
