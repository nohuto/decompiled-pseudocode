/*
 * XREFs of ?erase@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UPrimitiveUVDesc@@@2@V?$basic_iterator@$$CBUPrimitiveUVDesc@@@2@0@Z @ 0x1801F828C
 * Callers:
 *     ?resize@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBUPrimitiveUVDesc@@@Z @ 0x1800D99B0 (-resize@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expans.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UPrimitiveUVDesc@@V?$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800D9948 (-clear_region@-$vector_facade@UPrimitiveUVDesc@@V-$buffer_impl@UPrimitiveUVDesc@@$03$00Vliberal_.c)
 */

_QWORD *__fastcall detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::erase(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v6; // rbx

  v6 = 0x4EC4EC4EC4EC4EC5LL * ((*a3 - *a1) >> 2);
  detail::vector_facade<PrimitiveUVDesc,detail::buffer_impl<PrimitiveUVDesc,4,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v6,
    0x4EC4EC4EC4EC4EC5LL * ((__int64)(*a4 - *a3) >> 2));
  *a2 = *a1 + 52 * v6;
  return a2;
}
