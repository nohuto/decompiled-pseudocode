/*
 * XREFs of ?_Xlen@?$deque@_KV?$allocator@_K@std@@@std@@AEBAXXZ @ 0x1800EE498
 * Callers:
 *     ?_Growmap@?$deque@_KV?$allocator@_K@std@@@std@@AEAAX_K@Z @ 0x1800EE01C (-_Growmap@-$deque@_KV-$allocator@_K@std@@@std@@AEAAX_K@Z.c)
 *     ?_Growmap@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z @ 0x1800F3214 (-_Growmap@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@AEAAX_K@Z.c)
 *     ?_Growmap@?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@AEAAX_K@Z @ 0x180144C7C (-_Growmap@-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@.c)
 * Callees:
 *     <none>
 */

void __noreturn std::deque<unsigned __int64>::_Xlen()
{
  std::_Xlength_error("deque<T> too long");
}
