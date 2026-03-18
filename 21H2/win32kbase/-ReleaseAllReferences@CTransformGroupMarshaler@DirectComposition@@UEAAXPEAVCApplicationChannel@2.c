/*
 * XREFs of ?ReleaseAllReferences@CTransformGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0009920
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009443C (-Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CTransformGroupMarshaler::ReleaseAllReferences(
        DirectComposition::CTransformGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CTransformGroupMarshaler *)((char *)this + 80),
    a2);
}
