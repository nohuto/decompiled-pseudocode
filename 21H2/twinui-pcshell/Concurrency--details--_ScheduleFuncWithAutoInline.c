/*
 * XREFs of Concurrency::details::_ScheduleFuncWithAutoInline @ 0x180398004
 * Callers:
 *     ?_CancelAndRunContinuations@?$_Task_impl@E@details@Concurrency@@UEAA_N_N00AEBV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@std@@@Z @ 0x1803962F0 (-_CancelAndRunContinuations@-$_Task_impl@E@details@Concurrency@@UEAA_N_N00AEBV-$shared_ptr@U_Exc.c)
 *     ?_CancelAndRunContinuations@?$_Task_impl@_N@details@Concurrency@@UEAA_N_N00AEBV?$shared_ptr@U_ExceptionHolder@details@Concurrency@@@std@@@Z @ 0x1803964D0 (-_CancelAndRunContinuations@-$_Task_impl@_N@details@Concurrency@@UEAA_N_N00AEBV-$shared_ptr@U_Ex.c)
 *     ?_ScheduleContinuationTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x180397F44 (-_ScheduleContinuationTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandle.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800904EC (--2@YAPEAX_K@Z.c)
 *     ??0?$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z @ 0x1803942F0 (--0-$function@$$A6AXXZ@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_ScheduleFuncWithAutoInline(__int64 a1, int a2)
{
  void *v4; // rdi
  __int64 v5; // rcx

  v4 = operator new(0x40uLL);
  std::function<void (void)>::function<void (void)>((__int64)v4, a1);
  Concurrency::details::_TaskCollectionBaseImpl::_RunTask(v5, v4, a2);
}
