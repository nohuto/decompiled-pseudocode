/*
 * XREFs of ?ReleaseAllReferences@CAnimationTriggerMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0225A20
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009443C (-Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CAnimationTriggerMarshaler::ReleaseAllReferences(
        DirectComposition::CAnimationTriggerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 10) = 0LL;
  }
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CAnimationTriggerMarshaler *)((char *)this + 88),
    a2);
}
