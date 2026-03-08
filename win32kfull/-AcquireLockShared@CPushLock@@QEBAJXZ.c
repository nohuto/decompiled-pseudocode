/*
 * XREFs of ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00E001C
 * Callers:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C001DB98 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C00204F0 (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C003AAB8 (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C00DDF8C (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C012F8A4 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPushLock::AcquireLockShared(CPushLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  return 0LL;
}
