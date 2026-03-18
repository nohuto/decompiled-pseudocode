/*
 * XREFs of ?ClearAllRenderTargets@CVisualSurface@@AEAAXXZ @ 0x1800BAE4C
 * Callers:
 *     ?ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETREALIZATIONSIZE@@@Z @ 0x1800A52DC (-ProcessSetRealizationSize@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_.c)
 *     ?SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BAD90 (-SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     ?clear@?$vector@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1800F4A6C (-clear@-$vector@V-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarge.c)
 */

void __fastcall CVisualSurface::ClearAllRenderTargets(CVisualSurface *this)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdi

  v1 = (_QWORD *)*((_QWORD *)this + 14);
  v2 = (_QWORD *)*((_QWORD *)this + 15);
  while ( v1 != v2 )
  {
    std::vector<std::unique_ptr<CCachedVisualImage::CCachedTarget>>::clear(*v1 + 192LL);
    v1 += 2;
  }
}
