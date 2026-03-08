/*
 * XREFs of ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800F58AC
 * Callers:
 *     ?PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180013280 (-PushLayer@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANT.c)
 *     ?PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z @ 0x180015070 (-PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z @ 0x180084A90 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@BlendMode@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD2DTarget::ApplyCurrentClip(CD2DTarget *this)
{
  if ( *((_BYTE *)this + 72) )
    CD2DTarget::SetClip(this, (const struct D2D_RECT_F *)((char *)this + 52), *((enum D2D1_ANTIALIAS_MODE *)this + 17));
  else
    CD2DContext::D2DRemoveClip(*((CD2DContext **)this + 2));
}
