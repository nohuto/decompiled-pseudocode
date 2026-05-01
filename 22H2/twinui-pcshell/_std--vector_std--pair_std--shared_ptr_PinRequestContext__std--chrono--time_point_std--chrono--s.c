/*
 * XREFs of _std::vector_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000________std::allocator_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000___________::_Emplace_reallocate_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000__________::_1_::catch$32 @ 0x180132F8C
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180090964 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@AEAAXPEAU?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@2@0@Z @ 0x1801449B8 (-_Destroy@-$vector@U-$pair@V-$shared_ptr@VPinRequestContext@@@std@@V-$time_point@Usteady_clock@c.c)
 *     ?deallocate@?$allocator@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@std@@QEAAXQEAU?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@2@_K@Z @ 0x180145118 (-deallocate@-$allocator@U-$pair@V-$shared_ptr@VPinRequestContext@@@std@@V-$time_point@Usteady_cl.c)
 */

void __fastcall __noreturn std::vector_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000________std::allocator_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000___________::_Emplace_reallocate_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000__________::_1_::catch_32(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  std::vector<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::_Destroy(
    a1,
    a2[15],
    a2[14]);
  std::allocator<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::deallocate(
    v3,
    a2[4],
    a2[17]);
  throw;
}
