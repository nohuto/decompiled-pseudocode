/*
 * XREFs of ?SetReferenceProperty@CYCbCrSurfaceMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0262490
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C0065D2C (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C0065D2C.c)
 */

__int64 __fastcall DirectComposition::CYCbCrSurfaceMarshaler::SetReferenceProperty(
        DirectComposition::CYCbCrSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  struct DirectComposition::CResourceMarshaler **v7; // rdx

  if ( a3 )
  {
    if ( a3 != 1 )
      return 3221225485LL;
    v7 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 64);
  }
  else
  {
    v7 = (struct DirectComposition::CResourceMarshaler **)((char *)this + 56);
  }
  return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
           a2,
           v7,
           (__int64)a4,
           1,
           42,
           (int *)this + 4,
           0,
           0,
           a5);
}
