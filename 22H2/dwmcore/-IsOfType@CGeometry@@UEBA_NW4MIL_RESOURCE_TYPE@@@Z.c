/*
 * XREFs of ?IsOfType@CGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0C4C
 * Callers:
 *     ?IsOfType@CCombinedGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001FBC0 (-IsOfType@CCombinedGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CProxyGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0AA0 (-IsOfType@CProxyGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CEllipseGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0B30 (-IsOfType@CEllipseGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0BC0 (-IsOfType@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@UEBA_NW4MIL_RESOURCE_TYPE@.c)
 *     ?IsOfType@CPathGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0BF0 (-IsOfType@CPathGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CRectangleGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0C20 (-IsOfType@CRectangleGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CGeometryGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C55F0 (-IsOfType@CGeometryGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CLineGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1801C5720 (-IsOfType@CLineGeometry@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 * Callees:
 *     ?IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800E0D30 (-IsOfType@CPropertyChangeResource@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

char __fastcall CGeometry::IsOfType(__int64 a1, int a2)
{
  char v2; // cl
  char v4; // al

  if ( a2 == 67 )
    return 1;
  v4 = CPropertyChangeResource::IsOfType();
  v2 = 0;
  if ( v4 )
    return 1;
  return v2;
}
