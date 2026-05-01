/*
 * XREFs of ??$FailedQueryWindowServiceForApplicationViewTabManager@AEAPEBDAEAPEAUHWND__@@AEBJ@TabViewManagerTraceLogging@@SAXAEAPEBDAEAPEAUHWND__@@AEBJ@Z @ 0x1802D2F64
 * Callers:
 *     ?TryGetApplicationViewTabManager@@YA?AV?$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate@Tabs@ComposableShell@Internal@Windows@@@@PEAUHWND__@@PEBD@Z @ 0x1802EDE54 (-TryGetApplicationViewTabManager@@YA-AV-$com_ptr_with_timeout@UIApplicationViewTabManagerPrivate.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x1800718B8 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180090164 (atexit.c)
 *     ?FailedQueryWindowServiceForApplicationViewTabManager_@TabViewManagerTraceLogging@@QEAAXPEBDPEAUHWND__@@J@Z @ 0x1802DE688 (-FailedQueryWindowServiceForApplicationViewTabManager_@TabViewManagerTraceLogging@@QEAAXPEBDPEAU.c)
 *     ?IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z @ 0x1802E1154 (-IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z.c)
 */

void __fastcall TabViewManagerTraceLogging::FailedQueryWindowServiceForApplicationViewTabManager<char const * &,HWND__ * &,long const &>(
        const char **a1,
        HWND *a2,
        int *a3)
{
  TabViewManagerTraceLogging *v6; // rcx
  LPVOID Context; // [rsp+20h] [rbp-28h] BYREF
  union _RTL_RUN_ONCE *v8; // [rsp+28h] [rbp-20h] BYREF
  int v9; // [rsp+30h] [rbp-18h]
  WINBOOL fPending; // [rsp+68h] [rbp+20h] BYREF

  if ( TabViewManagerTraceLogging::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( InitOnceBeginInitialize(&`TabViewManagerTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v8 = &`TabViewManagerTraceLogging::Instance'::`2'::wrapper;
        Context = &qword_180650D18;
        qword_180650D18 = (__int64)&TabViewManagerTraceLogging::`vftable';
        atexit(_lambda_b55becccc8b67eee49088d4c1be9735f_::_lambda_invoker_cdecl_);
        v9 = 0;
        wil::details::static_lazy<TabViewManagerTraceLogging>::Completer::~Completer((__int64)&v8);
      }
    }
    TabViewManagerTraceLogging::FailedQueryWindowServiceForApplicationViewTabManager_(v6, *a1, *a2, *a3);
  }
}
