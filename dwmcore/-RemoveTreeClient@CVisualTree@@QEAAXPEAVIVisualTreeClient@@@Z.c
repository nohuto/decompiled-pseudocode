/*
 * XREFs of ?RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z @ 0x1800C6D30
 * Callers:
 *     ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x1800C73AC (-ReleaseVisualTree@CRenderTarget@@IEAAXXZ.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1802A80EC (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180030684 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expa.c)
 */

void __fastcall CVisualTree::RemoveTreeClient(CVisualTree *this, struct IVisualTreeClient *a2)
{
  __int64 *v4; // rcx
  struct IVisualTreeClient **i; // rdx

  v4 = (__int64 *)((char *)this + 4536);
  for ( i = (struct IVisualTreeClient **)*v4; i != *((struct IVisualTreeClient ***)this + 568); ++i )
  {
    if ( *i == a2 )
    {
      detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::clear_region(
        v4,
        ((__int64)i - *v4) >> 3,
        1LL);
      *((_BYTE *)this + 4712) = 1;
      return;
    }
  }
}
