/*
 * XREFs of ?ReleaseAllReferences@CTextVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0225FB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00942D0 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009443C (-Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CTextVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CTextVisualMarshaler *)((char *)this + 384),
    a2);
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CTextVisualMarshaler *)((char *)this + 408),
    a2);
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CTextVisualMarshaler *)((char *)this + 432),
    a2);
  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
}
