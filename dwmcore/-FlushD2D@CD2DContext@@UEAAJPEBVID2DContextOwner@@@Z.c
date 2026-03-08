/*
 * XREFs of ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x18001A140
 * Callers:
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18001A0FC (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x180275E0C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z @ 0x18029C30C (-LockAndRead@CD2DBitmap@@UEBAXPEBVID2DContextOwner@@@Z.c)
 * Callees:
 *     ?FlushD2DInternal@CD2DContext@@AEAAJXZ @ 0x18001A18C (-FlushD2DInternal@CD2DContext@@AEAAJXZ.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18008DE30 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CD2DContext::FlushD2D(CD2DContext *this, const struct ID2DContextOwner *a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edi

  CD2DContext::FlushDrawList(this);
  v3 = CD2DContext::FlushD2DInternal(this);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x320u, 0LL);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(((unsigned __int64)this - 16) & -(__int64)(this != 0LL), v5, 0LL);
}
