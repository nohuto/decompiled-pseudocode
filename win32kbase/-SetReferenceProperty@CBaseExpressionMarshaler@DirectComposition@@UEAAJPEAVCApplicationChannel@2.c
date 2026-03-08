/*
 * XREFs of ?SetReferenceProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0262DF0
 * Callers:
 *     ?SetReferenceProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C0263670 (-SetReferenceProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationCh.c)
 *     ?SetReferenceProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C026ABF0 (-SetReferenceProperty@CInjectionAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChann.c)
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV?$CWeakReference@VCResourceMarshaler@DirectComposition@@@2@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C00619CC (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@P.c)
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetReferenceProperty(
        DirectComposition::CBaseExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 == 2 )
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CWeakReferenceBase **)this + 9,
             (unsigned int *)a4,
             (__int64)a4,
             0x93u,
             (int *)this + 4,
             64,
             1,
             a5);
  else
    return 3221225485LL;
}
