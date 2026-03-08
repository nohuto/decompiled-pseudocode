/*
 * XREFs of ?reserve@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18002594C
 * Callers:
 *     ??$ComputeTexPositions@V?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@V12@@CoordMap@@QEBAXHV?$span@$$CBM$0?0@gsl@@0AEAV?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@1M@Z @ 0x180025310 (--$ComputeTexPositions@V-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180025974 (-ensure_extra_capacity@-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z.c)
 */

unsigned __int64 __fastcall detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::reserve(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = (__int64)(a1[1] - *a1) >> 2;
  if ( a2 > result )
    return detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a2 - result);
  return result;
}
