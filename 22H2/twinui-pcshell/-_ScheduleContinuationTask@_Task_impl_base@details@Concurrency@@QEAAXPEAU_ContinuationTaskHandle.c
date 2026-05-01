/*
 * XREFs of ?_ScheduleContinuationTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x180397C74
 * Callers:
 *     ?_RunContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x1803978E8 (-_RunContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@.c)
 *     ?_ScheduleContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x180397AA8 (-_ScheduleContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x1800D7938 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     Concurrency::details::_ScheduleFuncWithAutoInline @ 0x180397D34 (Concurrency--details--_ScheduleFuncWithAutoInline.c)
 *     ?_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningMode@23@@Z @ 0x180397DA4 (-_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningM.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(
        Concurrency::details::_Task_impl_base *this,
        struct Concurrency::details::_ContinuationTaskHandleBase *a2)
{
  __int64 v4; // r8
  __int64 v5; // rdx
  _QWORD v6[8]; // [rsp+20h] [rbp-58h] BYREF

  Concurrency::details::_TaskEventLogger::_LogScheduleTask(
    (Concurrency::details::_Task_impl_base *)((char *)this + 352),
    1);
  v4 = *((unsigned int *)a2 + 9);
  if ( *((_QWORD *)a2 + 2) )
  {
    if ( (_DWORD)v4 != -1 )
    {
      LODWORD(v4) = 16;
      *((_DWORD *)a2 + 9) = 16;
    }
    v6[0] = &std::_Func_impl_no_alloc<_lambda_713ee8bbd6b08550d59c52695cab5ce3_,void,>::`vftable';
    v6[1] = a2;
    v6[7] = v6;
    Concurrency::details::_ScheduleFuncWithAutoInline(v6, (unsigned int)v4);
    std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
      (__int64)v6,
      v5);
  }
  else
  {
    Concurrency::details::_Task_impl_base::_ScheduleTask(this, a2, v4);
  }
}
