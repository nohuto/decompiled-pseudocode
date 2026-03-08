/*
 * XREFs of ?ReleaseAllReferences@CTextVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C025BD80
 * Callers:
 *     <none>
 * Callees:
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0064E68 (-Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C006B010 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CTextVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CTextVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CTextVisualMarshaler *)((char *)this + 376),
    a2);
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CTextVisualMarshaler *)((char *)this + 400),
    a2);
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CTextVisualMarshaler *)((char *)this + 424),
    a2);
  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
}
