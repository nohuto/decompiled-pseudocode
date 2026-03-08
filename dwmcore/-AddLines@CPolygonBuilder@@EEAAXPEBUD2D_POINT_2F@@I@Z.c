/*
 * XREFs of ?AddLines@CPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x1800D52A0
 * Callers:
 *     <none>
 * Callees:
 *     ?reserve_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_POINT_2F@@_K0@Z @ 0x1800D52F4 (-reserve_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_ex.c)
 */

void __fastcall CPolygonBuilder::AddLines(CPolygonBuilder *this, const struct D2D_POINT_2F *a2, unsigned int a3)
{
  const struct D2D_POINT_2F *v3; // rbx
  const struct D2D_POINT_2F *v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // xmm0_8

  v3 = a2;
  v4 = &a2[a3];
  v5 = (_QWORD *)detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::reserve_region(
                   (char *)this + 16,
                   (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3,
                   a3);
  while ( v3 != v4 )
  {
    v6 = (__int64)*v3++;
    *v5++ = v6;
  }
}
