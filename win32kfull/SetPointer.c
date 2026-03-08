/*
 * XREFs of SetPointer @ 0x1C00219A0
 * Callers:
 *     UserResetPointer @ 0x1C001DE40 (UserResetPointer.c)
 *     SetMouseTrails @ 0x1C0020418 (SetMouseTrails.c)
 *     xxxSwitchDesktop @ 0x1C00205D4 (xxxSwitchDesktop.c)
 *     zzzEnableDwmPointerSupport @ 0x1C007F1FC (zzzEnableDwmPointerSupport.c)
 *     ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x1C00DB69C (-ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ.c)
 *     xxxRemoteReconnect @ 0x1C01267DC (xxxRemoteReconnect.c)
 *     xxxUserResetDisplayDevice @ 0x1C01293C0 (xxxUserResetDisplayDevice.c)
 *     ChangeComposableCursor @ 0x1C01AA1C4 (ChangeComposableCursor.c)
 *     RemoteShadowCleanup @ 0x1C0205DF0 (RemoteShadowCleanup.c)
 *     RemoteShadowStart @ 0x1C0205FFC (RemoteShadowStart.c)
 * Callees:
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00219C0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 */

__int64 __fastcall SetPointer(__int64 a1)
{
  LOBYTE(a1) = (_DWORD)a1 != 0;
  return SetPointerInternal(a1, 6LL);
}
