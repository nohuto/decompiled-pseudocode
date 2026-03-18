/*
 * XREFs of ?SetRemarshalingFlags@CGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0215CE0
 * Callers:
 *     ?SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0215BC0 (-SetRemarshalingFlags@CRectangleClipMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CLineGeometryMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0215D80 (-SetRemarshalingFlags@CLineGeometryMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CPathGeometryMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C0215F90 (-SetRemarshalingFlags@CPathGeometryMarshaler@DirectComposition@@UEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CClipGroupMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C0216220 (-SetRemarshalingFlags@CClipGroupMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CRegionGeometryMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C021FDC0 (-SetRemarshalingFlags@CRegionGeometryMarshaler@DirectComposition@@MEAA_NXZ.c)
 *     ?SetRemarshalingFlags@CProxyGeometryClipMarshaler@DirectComposition@@UEAA_NXZ @ 0x1C022F4A0 (-SetRemarshalingFlags@CProxyGeometryClipMarshaler@DirectComposition@@UEAA_NXZ.c)
 * Callees:
 *     ?SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ @ 0x1C020EFCC (-SetRemarshalingFlags@CPropertyChangeResourceMarshaler@DirectComposition@@MEAA_NXZ.c)
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
