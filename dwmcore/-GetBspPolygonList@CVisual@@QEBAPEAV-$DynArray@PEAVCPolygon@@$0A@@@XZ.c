/*
 * XREFs of ?GetBspPolygonList@CVisual@@QEBAPEAV?$DynArray@PEAVCPolygon@@$0A@@@XZ @ 0x18009A22C
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18004B7F0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ReleaseBspPolygonList@CVisual@@IEAAXXZ @ 0x18009A1EC (-ReleaseBspPolygonList@CVisual@@IEAAXXZ.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1801D05E8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z @ 0x18020D2C0 (-AddToBspPolygonList@CVisual@@IEAAJPEAVCPolygon@@@Z.c)
 *     ?GetBspPolygonListCount@CVisual@@IEBAIXZ @ 0x18020D814 (-GetBspPolygonListCount@CVisual@@IEBAIXZ.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x18020DD68 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisual::GetBspPolygonList(__int64 a1)
{
  _DWORD *v1; // r8
  __int64 v3; // rdx
  _BYTE *v4; // r9
  __int64 v5; // rcx
  unsigned int i; // eax

  v1 = *(_DWORD **)(a1 + 232);
  if ( (*v1 & 0x20000000) == 0 )
    return 0LL;
  v3 = (unsigned int)v1[1];
  v4 = v1 + 2;
  v5 = 0LL;
  for ( i = 0; i < (unsigned int)v3; ++v4 )
  {
    if ( *v4 == 3 )
      break;
    ++i;
  }
  if ( i < (unsigned int)v3 )
    v5 = (__int64)v1 + 8LL * i - (((_BYTE)v3 + 15) & 7) + v3 + 15;
  return *(_QWORD *)v5;
}
