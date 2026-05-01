/*
 * XREFs of ??1PinManager@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18013630C
 * Callers:
 *     _winrt::impl::heap_implements_winrt::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::PinManager___::heap_implements_winrt::details::module_count_wrapper_winrt::Windows::Internal::Shell::implementation::PinManager____::_1_::dtor$1 @ 0x1801353F7 (_winrt--impl--heap_implements_winrt--details--module_count_wrapper_winrt--Windows--_ea_1801353F7.c)
 *     ??1?$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@winrt@@UEAA@XZ @ 0x180135D90 (--1-$module_count_wrapper@UPinManager@implementation@Shell@Internal@Windows@winrt@@@details@winr.c)
 *     ??_EPinManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x180137358 (--_EPinManager@implementation@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180026BF4 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@std@@@std@@YAXPEAU?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@0@0AEAV?$allocator@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@0@@Z @ 0x180132D9C (--$_Destroy_range@V-$allocator@U-$pair@V-$shared_ptr@VPinRequestContext@@@std@@V-$time_point@Ust.c)
 *     ??1?$deque@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@QEAA@XZ @ 0x180135C70 (--1-$deque@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@chrono@.c)
 *     ?_Tidy@?$vector@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@2@@std@@AEAAXXZ @ 0x180144F40 (-_Tidy@-$vector@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@V-$time_point@Usteady_clock@ch.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::PinManager::~PinManager(
        winrt::Windows::Internal::Shell::implementation::PinManager *this)
{
  void *v2; // rdi
  std::_Ref_count_base *v3; // rcx

  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::~deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>((__int64)this + 232);
  std::deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::~deque<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>((__int64)this + 192);
  std::vector<std::pair<std::shared_ptr<PinOperationContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::_Tidy((char *)this + 168);
  v2 = (void *)*((_QWORD *)this + 18);
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>>(
      *((_QWORD *)this + 18),
      *((_QWORD *)this + 19));
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(24 * ((*((_QWORD *)this + 20) - (_QWORD)v2) / 24LL)));
    *((_QWORD *)this + 18) = 0LL;
    *((_QWORD *)this + 19) = 0LL;
    *((_QWORD *)this + 20) = 0LL;
  }
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 14);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  winrt::immersive_shell_component::~immersive_shell_component((winrt::Windows::Internal::Shell::implementation::PinManager *)((char *)this + 16));
}
