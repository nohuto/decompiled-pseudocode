/*
 * XREFs of ?ReleaseAllReferences@CVisualSurfaceMarshaler@DirectComposition@@UEAAXPEAVCApplicationChannel@2@@Z @ 0x1C022A200
 * Callers:
 *     ?ReleaseAllReferences@CSharedVisualSurfaceMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C023BCE0 (-ReleaseAllReferences@CSharedVisualSurfaceMarshaler@DirectComposition@@MEAAXPEAVCApplicationChan.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 */

void __fastcall DirectComposition::CVisualSurfaceMarshaler::ReleaseAllReferences(
        DirectComposition::CVisualSurfaceMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 8);
  if ( v4 )
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
  *((_QWORD *)this + 8) = 0LL;
}
