/*
 * XREFs of ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x1801EAD74
 * Callers:
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1801E92B0 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801E9C60 (-DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetController@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETCONTROLLER@@@Z @ 0x1801EA59C (-ProcessSetController@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDER.c)
 *     ??1CCaptureController@@EEAA@XZ @ 0x18021D0A4 (--1CCaptureController@@EEAA@XZ.c)
 * Callees:
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18021D198 (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x18021D54C (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 */

void __fastcall CCaptureRenderTarget::SetController(CCaptureRenderTarget *this, struct CCaptureController *a2)
{
  CCaptureController *v4; // rcx

  v4 = (CCaptureController *)*((_QWORD *)this + 236);
  *((_QWORD *)this + 236) = a2;
  if ( v4 )
    CCaptureController::RemoveRenderTarget(v4, this);
  if ( a2 )
    CCaptureController::AddRenderTarget(a2, this);
}
