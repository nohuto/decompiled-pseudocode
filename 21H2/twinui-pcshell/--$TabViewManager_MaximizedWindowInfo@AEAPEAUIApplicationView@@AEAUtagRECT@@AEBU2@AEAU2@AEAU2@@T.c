/*
 * XREFs of ??$TabViewManager_MaximizedWindowInfo@AEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@AEAU2@AEAU2@@TabViewManagerTraceLogging@@SAXAEAPEAUIApplicationView@@AEAUtagRECT@@AEBU2@11@Z @ 0x1802D52C4
 * Callers:
 *     ?ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@@Z @ 0x1802EFF64 (-ViewPosChanged@TabViewManager@@AEAAJPEAUIApplicationView@@AEBUtagRECT@@W4TRACKED_WINDOW_STATE@@.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ @ 0x1800718B8 (--1Completer@-$static_lazy@VTabViewManagerTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x180090184 (atexit.c)
 *     ?IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z @ 0x1802E13C4 (-IsEnabled@TabViewManagerTraceLogging@@SA_NE_K@Z.c)
 *     ?TabViewManager_MaximizedWindowInfo_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@AEBUtagRECT@@111@Z @ 0x1802ECD1C (-TabViewManager_MaximizedWindowInfo_@TabViewManagerTraceLogging@@QEAAXPEAUIApplicationView@@AEBU.c)
 */

void __fastcall TabViewManagerTraceLogging::TabViewManager_MaximizedWindowInfo<IApplicationView * &,tagRECT &,tagRECT const &,tagRECT &,tagRECT &>(
        struct IApplicationView **a1,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        struct tagRECT *a5)
{
  TabViewManagerTraceLogging *v9; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-28h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v12; // [rsp+40h] [rbp-18h] BYREF
  int v13; // [rsp+48h] [rbp-10h]

  if ( TabViewManagerTraceLogging::IsEnabled((unsigned __int8)a1, (unsigned __int64)a2) )
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
    TabViewManagerTraceLogging::TabViewManager_MaximizedWindowInfo_(v9, *a1, a2, a3, a4, a5);
  }
}
