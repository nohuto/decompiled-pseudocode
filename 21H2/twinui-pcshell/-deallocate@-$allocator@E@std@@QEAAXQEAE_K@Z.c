/*
 * XREFs of ?deallocate@?$allocator@E@std@@QEAAXQEAE_K@Z @ 0x180145274
 * Callers:
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$47 @ 0x180133212 (_std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize_reallocate_std--_Value_init_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<unsigned char>::deallocate(__int64 a1, void *a2, const struct std::nothrow_t *a3)
{
  std::_Deallocate<16,0>(a2, a3);
}
