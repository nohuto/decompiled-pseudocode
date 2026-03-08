/*
 * XREFs of ?ReleaseAllReferences@CHolographicExclusiveViewMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C02647E0
 * Callers:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCRemoteAppRenderTargetMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C024CDE0 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCRemoteAppRenderTargetMarshaler@DirectComposit.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CHolographicExclusiveViewMarshaler::ReleaseAllReferences(
        DirectComposition::CHolographicExclusiveViewMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 12);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 12) = 0LL;
  }
}
