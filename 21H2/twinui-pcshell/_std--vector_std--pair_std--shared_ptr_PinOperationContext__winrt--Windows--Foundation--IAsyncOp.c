/*
 * XREFs of _std::vector_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool______std::allocator_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_________::_Emplace_reallocate_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool________::_1_::catch$35 @ 0x180132F50
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ?_Destroy@?$vector@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAXPEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@2@0@Z @ 0x180144B14 (-_Destroy@-$vector@U-$pair@V-$shared_ptr@VPinOperationContext@@@std@@U-$IAsyncOperation@U-$IRefe.c)
 *     ?deallocate@?$allocator@U?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@std@@@std@@QEAAXQEAU?$pair@V?$shared_ptr@VPinRequestContext@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@2@@2@_K@Z @ 0x180145288 (-deallocate@-$allocator@U-$pair@V-$shared_ptr@VPinRequestContext@@@std@@V-$time_point@Usteady_cl.c)
 */

void __fastcall __noreturn std::vector_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool______std::allocator_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_________::_Emplace_reallocate_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool________::_1_::catch_35(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rcx

  std::vector<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>::_Destroy(
    a1,
    a2[15],
    a2[14]);
  std::allocator<std::pair<std::shared_ptr<PinRequestContext>,std::chrono::time_point<std::chrono::steady_clock,std::chrono::duration<__int64,std::ratio<1,1000000000>>>>>::deallocate(
    v3,
    a2[4],
    a2[17]);
  throw;
}
