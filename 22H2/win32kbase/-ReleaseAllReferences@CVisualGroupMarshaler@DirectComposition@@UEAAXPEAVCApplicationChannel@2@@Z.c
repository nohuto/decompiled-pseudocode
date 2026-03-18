/*
 * XREFs of ?ReleaseAllReferences@CVisualGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C021CDB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C002C3A8 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CVisualGroupMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CVisualGroupMarshaler *)((char *)this + 56),
    a2);
}
