/*
 * XREFs of ?AddLine@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z @ 0x1801B0320
 * Callers:
 *     <none>
 * Callees:
 *     ?reserve_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_POINT_2F@@_K0@Z @ 0x1800D52F4 (-reserve_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_ex.c)
 */

void __fastcall CPolygonBuilder::AddLine(CPolygonBuilder *this, struct D2D_POINT_2F a2)
{
  *(struct D2D_POINT_2F *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::reserve_region(
                            (CPolygonBuilder *)((char *)this + 16),
                            (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3,
                            1uLL) = a2;
}
