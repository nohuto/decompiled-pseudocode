/*
 * XREFs of ?allocate@?$allocator@G@std@@QEAAPEAG_K@Z @ 0x1801C9298
 * Callers:
 *     ??$_Reallocate_grow_by@V_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@Z @ 0x1801193E8 (--$_Reallocate_grow_by@V_lambda_3fdb14453883e86a37ebade6a7a0ebb0_@@G@-$basic_string@GU-$char_tra.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::allocator<unsigned short>::allocate(__int64 a1, unsigned __int64 a2)
{
  size_t v2; // rcx

  v2 = 2 * a2;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    v2 = -1LL;
  return std::_Allocate<16,std::_Default_allocate_traits,0>(v2);
}
