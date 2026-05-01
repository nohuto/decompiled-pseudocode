/*
 * XREFs of ?_RunTask@_TaskCollectionBaseImpl@details@Concurrency@@SAXP6AXPEAX@Z0W4_TaskInliningMode@23@@Z @ 0x1803979AC
 * Callers:
 *     Concurrency::details::_ScheduleFuncWithAutoInline @ 0x180397D34 (Concurrency--details--_ScheduleFuncWithAutoInline.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??$call_once@V_lambda_0e64988457575224279dcb6d61e61bdd_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lambda_0e64988457575224279dcb6d61e61bdd_@@@Z @ 0x180393744 (--$call_once@V_lambda_0e64988457575224279dcb6d61e61bdd_@@$$V@std@@YAXAEAUonce_flag@0@$$QEAV_lamb.c)
 *     ?_Bridge@_TaskProcThunk@details@Concurrency@@SAXPEAX@Z @ 0x180395F90 (-_Bridge@_TaskProcThunk@details@Concurrency@@SAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_TaskCollectionBaseImpl::_RunTask(__int64 a1, void *a2, int a3)
{
  __int64 v4; // rcx
  volatile signed __int32 *v5; // rbx
  void (__fastcall ***v6)(_QWORD, void (__fastcall *)(void *), void *); // rcx
  void **v7; // [rsp+40h] [rbp+8h] BYREF
  char v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = (void **)a1;
  if ( a3 == -1 )
  {
    Concurrency::details::_TaskProcThunk::_Bridge(a2);
  }
  else
  {
    v8 = 0;
    std::call_once<_lambda_0e64988457575224279dcb6d61e61bdd_,>(a1, (__int64)&v8);
    v4 = `Concurrency::details::_GetStaticAmbientSchedulerRef'::`2'::_S_scheduler_address;
    v5 = *(volatile signed __int32 **)(`Concurrency::details::_GetStaticAmbientSchedulerRef'::`2'::_S_scheduler_address
                                     + 8);
    if ( v5 )
    {
      _InterlockedIncrement(v5 + 2);
      v5 = *(volatile signed __int32 **)(v4 + 8);
    }
    v6 = *(void (__fastcall ****)(_QWORD, void (__fastcall *)(void *), void *))v4;
    if ( v6 )
    {
      (**v6)(v6, Concurrency::details::_TaskProcThunk::_Bridge, a2);
    }
    else
    {
      v7 = &Concurrency::details::_DefaultPPLTaskScheduler::`vftable';
      ((void (__fastcall *)(void ***, void (__fastcall *)(void *), void *))Concurrency::details::_DefaultPPLTaskScheduler::`vftable')(
        &v7,
        Concurrency::details::_TaskProcThunk::_Bridge,
        a2);
    }
    if ( v5 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v5);
  }
}
