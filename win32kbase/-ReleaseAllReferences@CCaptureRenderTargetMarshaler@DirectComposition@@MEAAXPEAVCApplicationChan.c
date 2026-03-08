/*
 * XREFs of ?ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C026CA50
 * Callers:
 *     ?ReleaseAllReferences@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C026D180 (-ReleaseAllReferences@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition@@MEAAXPEAVCA.c)
 * Callees:
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1C0068750 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ @ 0x1C026CAA4 (-ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition@@IEAAXXZ.c)
 */

void __fastcall DirectComposition::CCaptureRenderTargetMarshaler::ReleaseAllReferences(
        DirectComposition::CCaptureRenderTargetMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2)
{
  struct DirectComposition::CResourceMarshaler *v4; // rdx
  void *v5; // rcx

  v4 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)this + 15);
  if ( v4 )
  {
    DirectComposition::CApplicationChannel::ReleaseResource(a2, v4);
    *((_QWORD *)this + 15) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 14);
  if ( v5 )
  {
    DxgkReleaseCompositionObjectReference(v5);
    *((_QWORD *)this + 14) = 0LL;
  }
  DirectComposition::CCaptureRenderTargetMarshaler::ReleaseBuffers(this);
}
