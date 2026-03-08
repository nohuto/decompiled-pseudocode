/*
 * XREFs of ?SetReferenceProperty@CPathGeometryMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00C24A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 *     ?SetReferenceProperty@CGeometryMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00C9F00 (-SetReferenceProperty@CGeometryMarshaler@DirectComposition@@MEAAJPEAVCApplicationChannel@2@IPEAV.c)
 */

__int64 __fastcall DirectComposition::CPathGeometryMarshaler::SetReferenceProperty(
        DirectComposition::CPathGeometryMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 4 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 12,
             (__int64)a4,
             1,
             169,
             (int *)this + 4,
             2048,
             0,
             a5);
  else
    return DirectComposition::CGeometryMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
}
