/*
 * XREFs of ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BAAB8
 * Callers:
 *     ?SetBoundsStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18001D8B0 (-SetBoundsStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@.c)
 *     ?SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800200A0 (-SetTrimInvalidatingAnimatedProperty@CGeometry@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@.c)
 *     ?SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BA8B0 (-SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CColorGradientStop@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BA9A0 (-SetAnimatedProperty@CColorGradientStop@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetColorProperty@CColorBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BAA00 (-SetColorProperty@CColorBrush@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CDropShadow@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800BAA60 (-SetAnimatedProperty@CDropShadow@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetDirectionProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C6EC0 (-SetDirectionProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C7110 (-SetAnimatedProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180103840 (-SetAnimatedProperty@CResource@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetSourceOffset@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180217B00 (-SetSourceOffset@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18024AD10 (-SetOriginOffsetProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?SetRenderStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18024ED50 (-SetRenderStrokeStyleInvalidatingAnimatedProperty@CSpriteVectorShape@@AEAAJPEBUAnimatedProperty@.c)
 *     ?SetAnimatedProperty@CViewBox@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1802521A0 (-SetAnimatedProperty@CViewBox@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1801177DC (memcmp_0.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

char __fastcall CResource::ModifyProperty(
        CResource *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  size_t v4; // rbp
  char *v5; // rsi
  char v6; // bl

  v4 = *((_QWORD *)a2 + 2);
  v5 = (char *)this + *((_QWORD *)a2 + 1);
  v6 = 0;
  if ( memcmp_0(v5, a3, v4) )
  {
    v6 = 1;
    memcpy_0(v5, a3, v4);
  }
  return v6;
}
