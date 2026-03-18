/*
 * XREFs of ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x1801EE074
 * Callers:
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1801EC5B0 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801ECF60 (-DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessSetController@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETCONTROLLER@@@Z @ 0x1801ED89C (-ProcessSetController@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDER.c)
 *     ??1CCaptureController@@EEAA@XZ @ 0x180220604 (--1CCaptureController@@EEAA@XZ.c)
 * Callees:
 *     ?AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x1802206F8 (-AddRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
 *     ?RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z @ 0x180220AAC (-RemoveRenderTarget@CCaptureController@@QEAAXPEAVCCaptureRenderTarget@@@Z.c)
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
