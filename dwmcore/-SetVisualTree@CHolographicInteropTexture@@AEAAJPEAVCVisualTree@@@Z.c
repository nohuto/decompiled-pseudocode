/*
 * XREFs of ?SetVisualTree@CHolographicInteropTexture@@AEAAJPEAVCVisualTree@@@Z @ 0x1802A8224
 * Callers:
 *     ?SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z @ 0x1802A8128 (-SetRootVisual@CHolographicInteropTexture@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@PEAVIVisualTreeClient@@V?$buffer_impl@PEAVIVisualTreeClient@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVIVisualTreeClient@@_K0@Z @ 0x1800C72F0 (-reserve_region@-$vector_facade@PEAVIVisualTreeClient@@V-$buffer_impl@PEAVIVisualTreeClient@@$03.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ @ 0x1802A80EC (-ReleaseVisualTree@CHolographicInteropTexture@@AEAAXXZ.c)
 */

__int64 __fastcall CHolographicInteropTexture::SetVisualTree(CHolographicInteropTexture *this, struct CVisualTree *a2)
{
  _QWORD *v2; // rsi

  v2 = (_QWORD *)((char *)this + 96);
  if ( a2 != *((struct CVisualTree **)this + 12) )
  {
    CHolographicInteropTexture::ReleaseVisualTree(this);
    if ( a2 )
    {
      *(_QWORD *)detail::vector_facade<IVisualTreeClient *,detail::buffer_impl<IVisualTreeClient *,4,1,detail::liberal_expansion_policy>>::reserve_region(
                   (struct CVisualTree *)((char *)a2 + 4536),
                   (__int64)(*((_QWORD *)a2 + 568) - *((_QWORD *)a2 + 567)) >> 3) = ((unsigned __int64)this + 64) & -(__int64)(this != 0LL);
      *((_BYTE *)a2 + 4712) = 1;
      *v2 = a2;
      (*(void (__fastcall **)(struct CVisualTree *))(*(_QWORD *)a2 + 8LL))(a2);
    }
  }
  return 0LL;
}
