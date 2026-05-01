/*
 * XREFs of _std::vector_winrt::guid_std::allocator_winrt::guid___::_Emplace_reallocate_winrt::guid_const_&__::_1_::catch$32 @ 0x1800E4388
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180090964 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@Uguid@winrt@@@std@@QEAAXQEAUguid@winrt@@_K@Z @ 0x1800EE848 (-deallocate@-$allocator@Uguid@winrt@@@std@@QEAAXQEAUguid@winrt@@_K@Z.c)
 */

void __fastcall __noreturn std::vector_winrt::guid_std::allocator_winrt::guid___::_Emplace_reallocate_winrt::guid_const____::_1_::catch_32(
        __int64 a1,
        __int64 a2)
{
  std::allocator<winrt::guid>::deallocate(a1, *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
