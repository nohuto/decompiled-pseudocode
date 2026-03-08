/*
 * XREFs of ?ReleaseAllReferences@CVisualGroupMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025B6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0064E68 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CVisualGroupMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualGroupMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CVisualGroupMarshaler *)((char *)this + 56),
    a2);
}
