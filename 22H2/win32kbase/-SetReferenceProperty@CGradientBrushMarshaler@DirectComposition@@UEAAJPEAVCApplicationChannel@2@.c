/*
 * XREFs of ?SetReferenceProperty@CGradientBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00BC190
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV12@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C002D3BC (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicati_ea_1C002D3BC.c)
 */

__int64 __fastcall DirectComposition::CGradientBrushMarshaler::SetReferenceProperty(
        DirectComposition::CGradientBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 3 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CResourceMarshaler **)this + 11,
             (unsigned int *)a4,
             1,
             29,
             (int *)this + 4,
             512,
             0,
             a5);
  else
    return 3221225485LL;
}
