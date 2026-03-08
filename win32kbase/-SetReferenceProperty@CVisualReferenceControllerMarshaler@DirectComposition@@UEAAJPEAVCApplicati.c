/*
 * XREFs of ?SetReferenceProperty@CVisualReferenceControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEAVCResourceMarshaler@2@PEA_N@Z @ 0x1C00C2170
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@PEAPEAV?$CWeakReference@VCResourceMarshaler@DirectComposition@@@2@PEAV12@W4Optionality@12@W4MIL_RESOURCE_TYPE@@PEAKKW4MarshalingFlagSemantic@12@PEA_N@Z @ 0x1C00619CC (-SetReferencePropertyHelper@CResourceMarshaler@DirectComposition@@KAJPEAVCApplicationChannel@2@P.c)
 */

__int64 __fastcall DirectComposition::CVisualReferenceControllerMarshaler::SetReferenceProperty(
        DirectComposition::CVisualReferenceControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler *a4,
        bool *a5)
{
  if ( a3 )
    return 3221225485LL;
  else
    return DirectComposition::CResourceMarshaler::SetReferencePropertyHelper(
             a2,
             (struct DirectComposition::CWeakReferenceBase **)this + 7,
             (unsigned int *)a4,
             (__int64)a4,
             0xC4u,
             (int *)this + 4,
             0,
             0,
             a5);
}
