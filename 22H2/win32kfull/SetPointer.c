/*
 * XREFs of SetPointer @ 0x1C005CFA0
 * Callers:
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x1C005AEDC (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     zzzEnableDwmPointerSupport @ 0x1C005B13C (zzzEnableDwmPointerSupport.c)
 *     UserResetPointer @ 0x1C005B590 (UserResetPointer.c)
 *     SetMouseTrails @ 0x1C005B9A8 (SetMouseTrails.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 *     xxxRemoteReconnect @ 0x1C0132780 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C01354D0 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01A8FC0 (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C0203220 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C020342C (RemoteShadowStart.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C005CFC0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

__int64 __fastcall SetPointer(__int64 a1)
{
  LOBYTE(a1) = (_DWORD)a1 != 0;
  return SetPointerInternal(a1, 6LL);
}
