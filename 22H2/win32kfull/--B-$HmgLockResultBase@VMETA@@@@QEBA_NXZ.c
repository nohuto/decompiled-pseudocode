/*
 * XREFs of ??B?$HmgLockResultBase@VMETA@@@@QEBA_NXZ @ 0x1C0138BF0
 * Callers:
 *     ?PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z @ 0x1C0012878 (-PushForegroundPolicy@ForegroundLaunch@@YAXPEAXUtagProcessLaunchPolicy@@@Z.c)
 *     ?OnDaemonTimerRateChanged@ForegroundLaunch@@YAXW4RitTimerRate@@@Z @ 0x1C005B640 (-OnDaemonTimerRateChanged@ForegroundLaunch@@YAXW4RitTimerRate@@@Z.c)
 *     ?OnDaemonTimer@ForegroundLaunch@@YAXXZ @ 0x1C0097160 (-OnDaemonTimer@ForegroundLaunch@@YAXXZ.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     xxxFreeWindow @ 0x1C00E8F70 (xxxFreeWindow.c)
 *     GreSelectFontInternal @ 0x1C0119F34 (GreSelectFontInternal.c)
 *     GreSelectFont @ 0x1C011BD80 (GreSelectFont.c)
 *     GreDeleteServerMetaFile @ 0x1C02D2D08 (GreDeleteServerMetaFile.c)
 *     NtGdiGetServerMetaFileBits @ 0x1C02D2ED0 (NtGdiGetServerMetaFileBits.c)
 * Callees:
 *     <none>
 */

bool __fastcall HmgLockResultBase<META>::operator bool(_QWORD *a1)
{
  return *a1 != 0LL;
}
