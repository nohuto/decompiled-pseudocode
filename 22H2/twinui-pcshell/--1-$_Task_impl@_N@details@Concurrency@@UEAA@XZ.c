/*
 * XREFs of ??1?$_Task_impl@_N@details@Concurrency@@UEAA@XZ @ 0x180394714
 * Callers:
 *     ??_G?$_Task_impl@_N@details@Concurrency@@UEAAPEAXI@Z @ 0x180395410 (--_G-$_Task_impl@_N@details@Concurrency@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x1800D7938 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 *     ?_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x180397178 (-_DeregisterCancellation@_Task_impl_base@details@Concurrency@@QEAAXXZ.c)
 */

void __fastcall Concurrency::details::_Task_impl<bool>::~_Task_impl<bool>(Concurrency::details::_Task_impl_base *this)
{
  __int64 v2; // rdx

  *(_QWORD *)this = &Concurrency::details::_Task_impl<bool>::`vftable';
  Concurrency::details::_Task_impl_base::_DeregisterCancellation(this);
  std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
    (__int64)this + 376,
    v2);
  Concurrency::details::_Task_impl_base::~_Task_impl_base(this);
}
