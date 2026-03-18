/*
 * XREFs of ?DetachFromChannel@CCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801ECF60
 * Callers:
 *     ?DetachFromChannel@CVirtualMonitorCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x1801EE780 (-DetachFromChannel@CVirtualMonitorCaptureRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z @ 0x1801EE074 (-SetController@CCaptureRenderTarget@@QEAAXPEAVCCaptureController@@@Z.c)
 */

void __fastcall CCaptureRenderTarget::DetachFromChannel(CCaptureRenderTarget *this, struct CChannelContext *a2)
{
  CCaptureRenderTarget::SetController(this, 0LL);
  CNotificationResource::DetachFromChannel(this, a2);
}
