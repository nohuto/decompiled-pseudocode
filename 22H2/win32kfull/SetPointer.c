/*
 * XREFs of SetPointer @ 0x1C002A420
 * Callers:
 *     UserResetPointer @ 0x1C00291E0 (UserResetPointer.c)
 *     SetMouseTrails @ 0x1C0029694 (SetMouseTrails.c)
 *     zzzEnableDwmPointerSupport @ 0x1C00296FC (zzzEnableDwmPointerSupport.c)
 *     xxxSwitchDesktop @ 0x1C0029864 (xxxSwitchDesktop.c)
 *     xxxMakeWindowForegroundWithState @ 0x1C003A9E8 (xxxMakeWindowForegroundWithState.c)
 *     xxxSystemParametersInfoWorker @ 0x1C00DCFE8 (xxxSystemParametersInfoWorker.c)
 *     xxxRemoteReconnect @ 0x1C0161DA0 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C0163660 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01D3CFC (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C0225F40 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0226110 (RemoteShadowStart.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C002A440 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

__int64 __fastcall SetPointer(__int64 a1)
{
  LOBYTE(a1) = (_DWORD)a1 != 0;
  return SetPointerInternal(a1, 6LL);
}
