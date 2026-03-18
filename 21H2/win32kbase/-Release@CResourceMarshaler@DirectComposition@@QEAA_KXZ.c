/*
 * XREFs of ?Release@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1C00DD46C
 * Callers:
 *     ?SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0006DBC (-SetTransformMatrixHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEB.c)
 *     ?ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChannel@2@@Z @ 0x1C000AE80 (-ReleaseAllReferences@CKeyframeAnimationMarshaler@DirectComposition@@MEAAXPEAVCApplicationChanne.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001413C (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ??1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ @ 0x1C001626C (--1CResourceMarshalerArrayBase@DirectComposition@@QEAA@XZ.c)
 *     ?SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCResourceMarshaler@2@_NPEA_N@Z @ 0x1C00848A8 (-SetTransformParent@CVisualMarshaler@DirectComposition@@IEAAJPEAVCApplicationChannel@2@PEAVCReso.c)
 *     ?SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0084C00 (-SetClipRectangleHelper@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_.c)
 *     ?SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C0236844 (-SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationCh.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall DirectComposition::CResourceMarshaler::Release(
        DirectComposition::CResourceMarshaler *this,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  unsigned __int64 result; // rax

  v3 = *((_QWORD *)this + 3);
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3);
    v3 = *((_QWORD *)this + 3);
  }
  result = v3 - 1;
  *((_QWORD *)this + 3) = result;
  return result;
}
