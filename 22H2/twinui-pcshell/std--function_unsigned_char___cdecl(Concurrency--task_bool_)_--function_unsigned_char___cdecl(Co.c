/*
 * XREFs of std::function_unsigned_char___cdecl(Concurrency::task_bool_)_::function_unsigned_char___cdecl(Concurrency::task_bool_)___lambda_f29621112cb61d54fa7d920aa1c0b80f__void_ @ 0x180392A30
 * Callers:
 *     ?_Continue@?$_ContinuationTaskHandle@_NXV?$function@$$A6AXV?$task@_N@Concurrency@@@Z@std@@U?$integral_constant@_N$00@2@U_TypeSelectorNoAsync@details@Concurrency@@@?$task@_N@Concurrency@@QEBAXU?$integral_constant@_N$00@std@@U_TypeSelectorNoAsync@details@3@@Z @ 0x180396558 (-_Continue@-$_ContinuationTaskHandle@_NXV-$function@$$A6AXV-$task@_N@Concurrency@@@Z@std@@U-$int.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1800904CC (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180160FD0 (_guard_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z @ 0x180393FD4 (--0-$function@$$A6AXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::function_unsigned_char___cdecl_Concurrency::task_bool___::function_unsigned_char___cdecl_Concurrency::task_bool_____lambda_f29621112cb61d54fa7d920aa1c0b80f__void_(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v7; // [rsp+30h] [rbp-28h]

  *(_QWORD *)(a1 + 56) = 0LL;
  v7 = operator new(0x48uLL);
  *v7 = off_180647618;
  std::function<void (IApplicationView *,IImmersiveMonitor *)>::function<void (IApplicationView *,IImmersiveMonitor *)>(
    v7 + 1,
    a2);
  *(_QWORD *)(a1 + 56) = v7;
  v4 = (__int64 *)a2[7];
  if ( v4 )
  {
    v5 = *v4;
    LOBYTE(v5) = v4 != a2;
    (*(void (__fastcall **)(__int64 *, __int64))(*v4 + 32))(v4, v5);
    a2[7] = 0LL;
  }
  return a1;
}
