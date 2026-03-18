/*
 * XREFs of SetPointer @ 0x1C00B2D10
 * Callers:
 *     zzzEnableDwmPointerSupport @ 0x1C0097F94 (zzzEnableDwmPointerSupport.c)
 *     xxxSystemParametersInfoWorker @ 0x1C009EBF8 (xxxSystemParametersInfoWorker.c)
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 *     SetMouseTrails @ 0x1C00B537C (SetMouseTrails.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x1C00FCE3C (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     UserResetPointer @ 0x1C011F200 (UserResetPointer.c)
 *     xxxRemoteReconnect @ 0x1C01528E0 (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C0154E50 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01CFAF0 (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C021FD84 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C021FF90 (RemoteShadowStart.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00B2D30 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

__int64 __fastcall SetPointer(__int64 a1)
{
  LOBYTE(a1) = (_DWORD)a1 != 0;
  return SetPointerInternal(a1, 6LL);
}
