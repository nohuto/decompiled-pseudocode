/*
 * XREFs of ?_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningMode@23@@Z @ 0x180398074
 * Callers:
 *     ??R_lambda_713ee8bbd6b08550d59c52695cab5ce3_@@QEBAXXZ @ 0x180394F28 (--R_lambda_713ee8bbd6b08550d59c52695cab5ce3_@@QEBAXXZ.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_f25c37099038263181b5186a3fa41b37_@@X$$V@std@@EEAAXXZ @ 0x180397590 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_f25c37099038263181b5186a3fa41b37_@@X$$V@std@@EEAAXXZ.c)
 *     ?_ScheduleContinuationTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x180397F44 (-_ScheduleContinuationTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ?_RunChoreBridge@_TaskProcHandle@details@Concurrency@@SAXPEAX@Z @ 0x180397B70 (-_RunChoreBridge@_TaskProcHandle@details@Concurrency@@SAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Concurrency::details::_Task_impl_base::_ScheduleTask(
        Concurrency::details::_Task_impl_base *a1,
        void *a2,
        int a3)
{
  void (__fastcall ***v3)(_QWORD, void (__fastcall *)(void *), void *); // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  void **v6; // [rsp+58h] [rbp+20h] BYREF

  try
  {
    if ( a3 == -1 )
    {
      Concurrency::details::_TaskProcHandle::_RunChoreBridge(a2);
    }
    else
    {
      v3 = (void (__fastcall ***)(_QWORD, void (__fastcall *)(void *), void *))*((_QWORD *)a1 + 38);
      if ( v3 )
      {
        (**v3)(v3, Concurrency::details::_TaskProcHandle::_RunChoreBridge, a2);
      }
      else
      {
        v6 = &Concurrency::details::_DefaultPPLTaskScheduler::`vftable';
        ((void (__fastcall *)(void ***, void (__fastcall *)(void *), void *))Concurrency::details::_DefaultPPLTaskScheduler::`vftable')(
          &v6,
          Concurrency::details::_TaskProcHandle::_RunChoreBridge,
          a2);
      }
    }
  }
  catch ( Concurrency::task_canceled )
  {
    return;
  }
  catch ( Concurrency::details::_Interruption_exception )
  {
    return;
  }
  catch ( ... )
  {
    if ( !*((_QWORD *)a1 + 2) )
    {
      __ExceptionPtrCreate(v4);
      __ExceptionPtrCurrentException(v4);
      Concurrency::details::_Task_impl_base::_CancelWithException(a1, (const struct std::exception_ptr *)v4);
      __ExceptionPtrDestroy(v4);
    }
  }
}
