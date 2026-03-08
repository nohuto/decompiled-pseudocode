/*
 * XREFs of ?SetReferenceProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C026D8B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1C00A17F4 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 */

__int64 __fastcall DirectComposition::CCaptureControllerMarshaler::SetReferenceProperty(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  struct DirectComposition::CResourceMarshaler *v5; // r10
  DirectComposition::CCaptureControllerMarshaler *v7; // r11
  unsigned int v8; // r9d

  v5 = a4;
  v7 = this;
  if ( !a3 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 7,
             (__int64)a4,
             1,
             196,
             (int *)this + 4,
             32,
             0,
             a5);
  if ( a3 == 4
    && (!a4
     || DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)a4 + 9), 29)
     || DirectComposition::CResourceMarshaler::IsDerivedResourceType(v8, 187)) )
  {
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)v7 + 10,
             (__int64)v5,
             1,
             147,
             (int *)v7 + 4,
             256,
             0,
             a5);
  }
  return 3221225485LL;
}
