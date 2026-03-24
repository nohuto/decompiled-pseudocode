/*
 * XREFs of ?SetReferenceProperty@CSharedHostProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C01F9E50
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceProperty@CProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0004B60 (-SetReferenceProperty@CProjectedShadowCasterMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 */

__int64 __fastcall DirectComposition::CSharedHostProjectedShadowCasterMarshaler::SetReferenceProperty(
        DirectComposition::CSharedHostProjectedShadowCasterMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 )
    return DirectComposition::CProjectedShadowCasterMarshaler::SetReferenceProperty(this, a2, a3, a4, a5);
  else
    return 3221225485LL;
}
