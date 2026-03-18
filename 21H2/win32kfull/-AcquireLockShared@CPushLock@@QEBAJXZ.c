/*
 * XREFs of ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C0104BEC
 * Callers:
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C009C088 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00A1E2C (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C00B2F9C (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C010806C (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C01083EC (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     ?AcquireDcVisRgnShared@DC@@QEAA@XZ @ 0x1C015DA98 (-AcquireDcVisRgnShared@DC@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPushLock::AcquireLockShared(CPushLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(this, 0LL);
  return 0LL;
}
