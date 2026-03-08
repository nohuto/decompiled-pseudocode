/*
 * XREFs of ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x18020DD68
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B7F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180067850 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18009A22C (-GetBspPolygonList@CVisual@@QEBAPEAV-$DynArray@PEAVCPolygon@@$0A@@@XZ.c)
 */

bool __fastcall CVisual::HasBspPolygonList(CVisual *this)
{
  __int64 BspPolygonList; // r10
  bool result; // al

  BspPolygonList = CVisual::GetBspPolygonList((__int64)this);
  result = 0;
  if ( BspPolygonList )
    return *(_DWORD *)(BspPolygonList + 24) != 0;
  return result;
}
