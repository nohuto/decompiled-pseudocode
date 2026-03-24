/*
 * XREFs of ?RemoveTreeClient@CVisualTree@@QEAAXPEAVIVisualTreeClient@@@Z @ 0x180026538
 * Callers:
 *     ?ReleaseVisualTree@CRenderTarget@@IEAAXXZ @ 0x18002675C (-ReleaseVisualTree@CRenderTarget@@IEAAXXZ.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x18025980C (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVIVisualTreeClient@@V?$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180026594 (-clear_region@-$vector_facade@PEAVIVisualTreeClient@@V-$buffer_impl@PEAVIVisualTreeClient@@$03$0.c)
 */

void __fastcall CVisualTree::RemoveTreeClient(CVisualTree *this, struct IVisualTreeClient *a2)
{
  struct IVisualTreeClient **v2; // r8
  struct IVisualTreeClient ***v4; // rcx
  struct IVisualTreeClient **i; // rax

  v2 = (struct IVisualTreeClient **)*((_QWORD *)this + 717);
  v4 = (struct IVisualTreeClient ***)((char *)this + 5728);
  for ( i = *v4; i != v2; ++i )
  {
    if ( *i == a2 )
    {
      if ( i != v2 )
      {
        detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::clear_region(
          v4,
          i - *v4,
          1LL);
        *((_BYTE *)this + 5893) = 1;
      }
      return;
    }
  }
}
