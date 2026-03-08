/*
 * XREFs of ?SetBufferProperty@CCaptureControllerMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C026D760
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEBX_KPEA_N@Z @ 0x1C026D9EC (-SetTransformMatrixHelper@CCaptureControllerMarshaler@DirectComposition@@QEAAJPEAVCApplicationCh.c)
 */

int __fastcall DirectComposition::CCaptureControllerMarshaler::SetBufferProperty(
        DirectComposition::CCaptureControllerMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        bool *a6)
{
  if ( a3 == 5 )
    return DirectComposition::CCaptureControllerMarshaler::SetTransformMatrixHelper(this, a2, a4, a5, a6);
  else
    return -1073741811;
}
