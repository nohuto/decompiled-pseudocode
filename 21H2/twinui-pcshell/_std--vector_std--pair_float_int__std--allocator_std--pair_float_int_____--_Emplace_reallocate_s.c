/*
 * XREFs of _std::vector_std::pair_float_int__std::allocator_std::pair_float_int_____::_Emplace_reallocate_std::pair_float_int____::_1_::catch$34 @ 0x1804BF320
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18008C494 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_float_int__std::allocator_std::pair_float_int_____::_Emplace_reallocate_std::pair_float_int____::_1_::catch_34(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 80)));
  throw;
}
