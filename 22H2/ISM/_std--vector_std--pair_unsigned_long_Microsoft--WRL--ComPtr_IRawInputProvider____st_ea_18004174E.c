/*
 * XREFs of _std::vector_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider____std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider_______::_Reallocate_exactly_::_1_::catch$12 @ 0x18004174E
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x18003C946 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@QEAAXQEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@2@_K@Z @ 0x180041778 (-deallocate@-$allocator@U-$pair@KV-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@QEAAX.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider____std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider_______::_Reallocate_exactly_::_1_::catch_12(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::deallocate(
    a1,
    *(_QWORD *)(a2 + 64),
    *(_QWORD *)(a2 + 72));
  throw;
}
