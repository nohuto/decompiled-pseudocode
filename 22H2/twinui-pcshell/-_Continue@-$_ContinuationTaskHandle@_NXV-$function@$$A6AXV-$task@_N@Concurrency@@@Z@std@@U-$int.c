/*
 * XREFs of ?_Continue@?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEBAXU?$integral_constant@_N$00@std@@U_TypeSelectorNoAsync@details@3@@Z @ 0x180396558
 * Callers:
 *     ?invoke@?$_PPLTaskHandle@EU?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@U_ContinuationTaskHandleBase@details@3@@details@Concurrency@@UEBAXXZ @ 0x1803987C0 (-invoke@-$_PPLTaskHandle@EU-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     std::function_unsigned_char___cdecl(Concurrency::task_bool_)_::function_unsigned_char___cdecl(Concurrency::task_bool_)___lambda_f29621112cb61d54fa7d920aa1c0b80f__void_ @ 0x180392A30 (std--function_unsigned_char___cdecl(Concurrency--task_bool_)_--function_unsigned_char___cdecl(Co.c)
 *     ??$_LogWorkItemAndInvokeUserLambda@V?$function@$$A6AEV?$task@_N@Concurrency@@@Z@std@@V?$task@_N@Concurrency@@@?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEBAE$$QEAV?$function@$$A6AEV?$task@_N@Concurrency@@@Z@std@@$$QEAV12@@Z @ 0x180393488 (--$_LogWorkItemAndInvokeUserLambda@V-$function@$$A6AEV-$task@_N@Concurrency@@@Z@std@@V-$task@_N@.c)
 *     ??0?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180393FD4 (--0-$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?_FinalizeAndRunContinuations@?$_Task_impl@E@details@Concurrency@@QEAAXE@Z @ 0x1803973B4 (-_FinalizeAndRunContinuations@-$_Task_impl@E@details@Concurrency@@QEAAXE@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Concurrency::task<bool>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>::_Continue(
        _QWORD *a1)
{
  volatile signed __int32 *v2; // rcx
  Concurrency::details::_Task_impl_base *v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  __int64 v8; // [rsp+30h] [rbp-D8h] BYREF
  std::_Ref_count_base *v9; // [rsp+38h] [rbp-D0h]
  __int64 v10[8]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v11[64]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v12[56]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE *v13; // [rsp+100h] [rbp-8h]

  v2 = (volatile signed __int32 *)a1[8];
  if ( v2 )
  {
    _InterlockedIncrement(v2 + 2);
    v2 = (volatile signed __int32 *)a1[8];
  }
  v8 = a1[7];
  v9 = (std::_Ref_count_base *)v2;
  v3 = (Concurrency::details::_Task_impl_base *)a1[5];
  v4 = std::function<void (IApplicationView *,IImmersiveMonitor *)>::function<void (IApplicationView *,IImmersiveMonitor *)>(
         (__int64)v11,
         (__int64)(a1 + 9));
  std::function<void (IApplicationView *,IImmersiveMonitor *)>::function<void (IApplicationView *,IImmersiveMonitor *)>(
    (__int64)v10,
    v4);
  std::function_unsigned_char___cdecl_Concurrency::task_bool___::function_unsigned_char___cdecl_Concurrency::task_bool_____lambda_f29621112cb61d54fa7d920aa1c0b80f__void_(
    (__int64)v12,
    v10);
  v6 = *(_QWORD *)(v4 + 56);
  if ( v6 )
  {
    LOBYTE(v5) = v6 != v4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
    *(_QWORD *)(v4 + 56) = 0LL;
  }
  Concurrency::task<bool>::_ContinuationTaskHandle<bool,void,std::function<void (Concurrency::task<bool>)>,std::integral_constant<bool,1>,Concurrency::details::_TypeSelectorNoAsync>::_LogWorkItemAndInvokeUserLambda<std::function<unsigned char (Concurrency::task<bool>)>,Concurrency::task<bool>>(
    (__int64)a1,
    (__int64)v12,
    &v8);
  Concurrency::details::_Task_impl<unsigned char>::_FinalizeAndRunContinuations(v3);
  if ( v13 )
  {
    v7 = v12;
    LOBYTE(v7) = v13 != v12;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v13 + 32LL))(v13, v7);
  }
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
}
