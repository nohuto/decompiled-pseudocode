/*
 * XREFs of ?BeginFigure@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x1800D5240
 * Callers:
 *     <none>
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180030684 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expa.c)
 *     ?reserve_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_POINT_2F@@_K0@Z @ 0x1800D52F4 (-reserve_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_ex.c)
 */

void __fastcall CPolygonBuilder::BeginFigure(CPolygonBuilder *this, struct D2D_POINT_2F a2, enum D2D1_FIGURE_BEGIN a3)
{
  _QWORD *v3; // rbx
  __int64 v5; // r8

  v3 = (_QWORD *)((char *)this + 16);
  v5 = (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3;
  if ( v5 )
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear_region(
      (__int64 *)this + 2,
      0LL,
      v5);
  *(struct D2D_POINT_2F *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::reserve_region(
                            v3,
                            (__int64)(v3[1] - *v3) >> 3,
                            1LL) = a2;
}
