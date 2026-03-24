/*
 * XREFs of SetPointer @ 0x1C002A4C0
 * Callers:
 *     UserResetPointer @ 0x1C0029280 (UserResetPointer.c)
 *     SetMouseTrails @ 0x1C0029734 (SetMouseTrails.c)
 *     zzzEnableDwmPointerSupport @ 0x1C002979C (zzzEnableDwmPointerSupport.c)
 *     xxxSwitchDesktop @ 0x1C0029904 (xxxSwitchDesktop.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C003AA88 (xxxMakeWindowForegroundWithState.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DD338 (xxxSystemParametersInfoWorker.c)
 *     xxxRemoteReconnect @ 0x1C0162570 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C0163E30 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01D42BC (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C0226500 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C02266D0 (RemoteShadowStart.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C002A4E0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

__int64 __fastcall SetPointer(__int64 a1)
{
  LOBYTE(a1) = (_DWORD)a1 != 0;
  return SetPointerInternal(a1, 6LL);
}
