/*
 * XREFs of ?SetReferenceProperty@CProxyGeometryClipMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C000C640
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 *     ?SetReferenceProperty@CGeometryMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00C9F00 (-SetReferenceProperty@CGeometryMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAV.c)
 */

__int64 __fastcall DirectComposition::CProxyGeometryClipMarshaler::SetReferenceProperty(
        DirectComposition::CProxyGeometryClipMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 4 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (char *)this + 96,
             a4,
             1LL,
             67,
             (char *)this + 16,
             2048,
             0,
             a5);
  if ( a3 == 5 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (char *)this + 104,
             a4,
             1LL,
             194,
             (char *)this + 16,
             4096,
             0,
             a5);
  return DirectComposition::CGeometryMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
