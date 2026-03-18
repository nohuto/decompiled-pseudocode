/*
 * XREFs of ?ReleaseAllReferences@CParticleEmitterVisualMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0225BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00942D0 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C009443C (-Clear@CResourceMarshalerArrayBase@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CParticleEmitterVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CParticleEmitterVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx
  struct DirectComposition::CResourceMarshaler *v6; // rdx
  struct DirectComposition::CResourceMarshaler *v7; // rdx
  struct DirectComposition::CResourceMarshaler *v8; // rdx
  struct DirectComposition::CResourceMarshaler *v9; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 48);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 48) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 51);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 51) = 0LL;
  }
  v6 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 52);
  if ( v6 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v6);
    *((_QWORD *)this + 52) = 0LL;
  }
  v7 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 54);
  if ( v7 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v7);
    *((_QWORD *)this + 54) = 0LL;
  }
  v8 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 64);
  if ( v8 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v8);
    *((_QWORD *)this + 64) = 0LL;
  }
  v9 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 65);
  if ( v9 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v9);
    *((_QWORD *)this + 65) = 0LL;
  }
  DirectComposition::CResourceMarshalerArrayBase::Clear(
    (DirectComposition::CParticleEmitterVisualMarshaler *)((char *)this + 528),
    a2);
  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
}
