/*
 * XREFs of ?ReleaseAllReferences@CLayerVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0094100
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00942D0 (-ReleaseAllReferences@CVisualMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z.c)
 */

void __fastcall DirectComposition::CLayerVisualMarshaler::ReleaseAllReferences(
        DirectComposition::CLayerVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  struct DirectComposition::CResourceMarshaler *v5; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 48);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 48) = 0LL;
  }
  v5 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 49);
  if ( v5 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v5);
    *((_QWORD *)this + 49) = 0LL;
  }
  DirectComposition::CVisualMarshaler::ReleaseAllReferences(this, a2);
}
