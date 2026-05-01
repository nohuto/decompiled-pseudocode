/*
 * XREFs of ??1_Holder@_TaskProcThunk@details@Concurrency@@QEAA@XZ @ 0x1803948C0
 * Callers:
 *     _Concurrency::details::_TaskProcThunk::_Bridge_::_1_::dtor$0 @ 0x180395FC5 (_Concurrency--details--_TaskProcThunk--_Bridge_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180090184 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$function@$$A6A_NAEBU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@Z@std@@QEAA@XZ @ 0x1800D7938 (--1-$function@$$A6A_NAEBU-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_.c)
 */

void __fastcall Concurrency::details::_TaskProcThunk::_Holder::~_Holder(
        Concurrency::details::_TaskProcThunk::_Holder *this,
        __int64 a2)
{
  void *v2; // rbx

  v2 = *(void **)this;
  if ( *(_QWORD *)this )
  {
    std::function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>::~function<bool (std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>> const &)>(
      *(_QWORD *)this,
      a2);
    operator delete(v2, (const struct std::nothrow_t *)0x40);
  }
}
