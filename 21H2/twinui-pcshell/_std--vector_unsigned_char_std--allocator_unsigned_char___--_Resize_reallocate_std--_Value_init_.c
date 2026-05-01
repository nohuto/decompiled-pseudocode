/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$47 @ 0x180133212
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180090984 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@E@std@@QEAAXQEAE_K@Z @ 0x180145274 (-deallocate@-$allocator@E@std@@QEAAXQEAE_K@Z.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch_47(
        __int64 a1,
        __int64 a2)
{
  std::allocator<unsigned char>::deallocate(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 32));
  throw;
}
