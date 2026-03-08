/*
 * XREFs of ?SetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18008CF80
 * Callers:
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180275E0C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 * Callees:
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18008DE30 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?SetClip@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18008F074 (-SetClip@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z @ 0x1800909CC (-AreEqual@@YA_NAEBUD2D_RECT_F@@0@Z.c)
 */

void __fastcall CD2DContext::SetClip(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        const struct D2D_RECT_F *a3,
        enum D2D1_ANTIALIAS_MODE a4)
{
  int v4; // eax
  CD2DTarget *v5; // rsi
  CD2DContext *v8; // r10

  v4 = *((_DWORD *)this + 88);
  v5 = 0LL;
  v8 = this;
  if ( v4 )
    v5 = *(CD2DTarget **)(*((_QWORD *)this + 41) + 8LL * (unsigned int)(v4 - 1));
  if ( !*((_BYTE *)this + 437)
    || *((_BYTE *)this + 439)
    || a4 != *((_DWORD *)this + 104)
    || !AreEqual(a3, (const struct D2D_RECT_F *)this + 25) )
  {
    CD2DContext::FlushDrawList(v8);
    CD2DTarget::SetClip(v5, a3, a4);
  }
}
