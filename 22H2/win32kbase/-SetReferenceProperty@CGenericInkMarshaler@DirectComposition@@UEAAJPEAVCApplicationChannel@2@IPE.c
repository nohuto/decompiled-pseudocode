/*
 * XREFs of ?SetReferenceProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C02120C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C002D3BC (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C002D3BC.c)
 */

__int64 __fastcall DirectComposition::CGenericInkMarshaler::SetReferenceProperty(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 6 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 20,
             (unsigned int *)a4,
             1,
             170,
             (int *)this + 4,
             128,
             1,
             a5);
  if ( a3 == 11 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 28,
             (unsigned int *)a4,
             1,
             48,
             (int *)this + 4,
             512,
             1,
             a5);
  return 3221225485LL;
}
