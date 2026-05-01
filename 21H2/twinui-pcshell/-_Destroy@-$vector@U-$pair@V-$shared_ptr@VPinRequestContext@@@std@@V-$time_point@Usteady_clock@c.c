/*
 * XREFs of ?_Destroy@?$vector@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@AEAAXPEAU?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@2@0@Z @ 0x180144B28
 * Callers:
 *     _std::vector_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000________std::allocator_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000___________::_Emplace_reallocate_std::pair_std::shared_ptr_PinRequestContext__std::chrono::time_point_std::chrono::steady_clock_std::chrono::duration___int64_std::ratio_1_1000000000__________::_1_::catch$32 @ 0x1801330FC (_std--vector_std--pair_std--shared_ptr_PinRequestContext__std--chrono--time_point_std--chrono--s.c)
 * Callees:
 *     <none>
 */

void __fastcall std::vector<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::_Destroy(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  std::_Destroy_range<std::allocator<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>>(
    a2,
    a3);
}
