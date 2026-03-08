/*
 * XREFs of ?EndFigure@CPolygonBuilder@@EEAAXW4D2D1_FIGURE_END@@@Z @ 0x18002FA60
 * Callers:
 *     <none>
 * Callees:
 *     ?clear@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18003065C (-clear@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_p.c)
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180030684 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expa.c)
 */

void __fastcall CPolygonBuilder::EndFigure(CPolygonBuilder *this, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  float *v4; // r8

  v2 = *((_QWORD *)this + 3);
  v3 = (_QWORD *)((char *)this + 16);
  v4 = (float *)*((_QWORD *)this + 2);
  if ( *(float *)(v2 - 8) == *v4 && *(float *)(v2 - 4) == v4[1] )
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear_region(
      (char *)this + 16,
      (*((_QWORD *)this + 3) - 8LL - (__int64)v4) >> 3,
      1LL);
  if ( (unsigned __int64)((__int64)(v3[1] - *v3) >> 3) < 3 )
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear(
      v3,
      a2);
}
