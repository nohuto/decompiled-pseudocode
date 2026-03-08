/*
 * XREFs of ?ReleaseAllReferences@CVisualSurfaceMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00C1310
 * Callers:
 *     ?ReleaseAllReferences@?$CSharedResourceMarshaler@VCVisualSurfaceMarshaler@DirectComposition@@$01@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C00C12B0 (-ReleaseAllReferences@-$CSharedResourceMarshaler@VCVisualSurfaceMarshaler@DirectComposition@@$01.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CVisualSurfaceMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 7);
  if ( v4 )
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  *((_QWORD *)this + 7) = 0LL;
}
