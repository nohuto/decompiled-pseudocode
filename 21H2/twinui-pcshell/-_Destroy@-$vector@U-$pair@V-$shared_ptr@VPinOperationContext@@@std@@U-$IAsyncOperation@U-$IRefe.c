/*
 * XREFs of ?_Destroy@?$vector@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@V?$allocator@U?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@std@@@2@@std@@AEAAXPEAU?$pair@V?$shared_ptr@VPinOperationContext@@@std@@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@@2@0@Z @ 0x180144B14
 * Callers:
 *     _std::vector_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool______std::allocator_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_________::_Emplace_reallocate_std::pair_std::shared_ptr_PinOperationContext__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool________::_1_::catch$35 @ 0x180132F50 (_std--vector_std--pair_std--shared_ptr_PinOperationContext__winrt--Windows--Foundation--IAsyncOp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::vector<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>::_Destroy(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return std::_Destroy_range<std::allocator<std::pair<std::shared_ptr<PinOperationContext>,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>>>>(
           a2,
           a3);
}
