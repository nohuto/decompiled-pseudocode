/*
 * XREFs of ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x18002158C
 * Callers:
 *     ?DeleteExpiredHints@ActivationHints@@AEAAXXZ @ 0x1800214DC (-DeleteExpiredHints@ActivationHints@@AEAAXXZ.c)
 *     ?CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z @ 0x180108EF8 (-CheckFeedsEnablementOnServer@ShellFeedsAvailabilityHelpers@@YAJPEAE0@Z.c)
 *     ?ForEachOperationInTimeWindow@PinHistory@@AEAAXAEBV?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@3@$$QEAV?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@3@@Z @ 0x1801391B0 (-ForEachOperationInTimeWindow@PinHistory@@AEAAXAEBV-$deque@U-$pair@V-$shared_ptr@VPinOperationCo.c)
 *     ?HandlePinRejected@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013A95C (-HandlePinRejected@PinHistory@@QEAAXV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?HandlePinRequested@PinHistory@@QEAAXV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013ABB4 (-HandlePinRequested@PinHistory@@QEAAXV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?IsPinOperationBlocked@PinHistory@@QEBA_NV?$shared_ptr@VPinOperationContext@@@std@@@Z @ 0x18013B730 (-IsPinOperationBlocked@PinHistory@@QEBA_NV-$shared_ptr@VPinOperationContext@@@std@@@Z.c)
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_d1465830bf7ff245d54538fb3dd3c5c6_@@_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@std@@EEAA_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@2@@Z @ 0x180144B70 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_d1465830bf7ff245d54538fb3dd3c5c6_@@_NAEBU-$pair@V-$shar.c)
 *     ?AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z @ 0x180439B90 (-AddHint@ActivationHints@@UEAAJUAppIdInfo@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::chrono::steady_clock::now(_QWORD *a1)
{
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax

  perf_frequency = _Query_perf_frequency();
  perf_counter = _Query_perf_counter();
  *a1 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
  return a1;
}
