/*
 * XREFs of ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18003065C
 * Callers:
 *     ?EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18002FA60 (-EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z.c)
 *     ??_GCPolygonBuilder@@MEAAPEAXI@Z @ 0x180030460 (--_GCPolygonBuilder@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180030684 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expa.c)
 */

__int64 __fastcall detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear(
        _QWORD *a1)
{
  __int64 v1; // r8
  __int64 result; // rax

  v1 = (__int64)(a1[1] - *a1) >> 3;
  if ( v1 )
    return detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             0LL,
             v1);
  return result;
}
