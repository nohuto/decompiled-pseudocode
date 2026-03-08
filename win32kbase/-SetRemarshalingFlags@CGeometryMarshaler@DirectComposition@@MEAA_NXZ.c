/*
 * XREFs of ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0254640
 * Callers:
 *     ?SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0254520 (-SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CLineGeometryMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C02546E0 (-SetRemarshalingFlags@CLineGeometryMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CPathGeometryMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C02548F0 (-SetRemarshalingFlags@CPathGeometryMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CClipGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0254B80 (-SetRemarshalingFlags@CClipGroupMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRegionGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C025E6E0 (-SetRemarshalingFlags@CRegionGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProxyGeometryClipMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C026DFE0 (-SetRemarshalingFlags@CProxyGeometryClipMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C024D91C (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
 */

char __fastcall DirectComposition::CGeometryMarshaler::SetRemarshalingFlags(
        DirectComposition::CGeometryMarshaler *this)
{
  if ( *((_QWORD *)this + 9) )
    *((_DWORD *)this + 4) |= 0x80u;
  *((_DWORD *)this + 4) |= 0x700u;
  DirectComposition::CPropertyChangeResourceMarshaler::SetRemarshalingFlags(this);
  return 1;
}
