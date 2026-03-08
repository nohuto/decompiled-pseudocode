/*
 * XREFs of ?SetReferenceProperty@CMaskBrushMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0061D00
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBrushPropertyHelper@CBrushMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEAV12@PEAVCResourceMarshaler@2@W4MIL_RESOURCE_TYPE@@KPEA_N@Z @ 0x1C0064ED0 (-SetBrushPropertyHelper@CBrushMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAPEA.c)
 */

__int64 __fastcall DirectComposition::CMaskBrushMarshaler::SetReferenceProperty(
        DirectComposition::CMaskBrushMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4)
{
  char *v4; // r8

  if ( !a3 )
  {
    v4 = (char *)this + 72;
    return DirectComposition::CBrushMarshaler::SetBrushPropertyHelper(this, a2, v4, a4);
  }
  if ( a3 == 1 )
  {
    v4 = (char *)this + 80;
    return DirectComposition::CBrushMarshaler::SetBrushPropertyHelper(this, a2, v4, a4);
  }
  return 3221225485LL;
}
