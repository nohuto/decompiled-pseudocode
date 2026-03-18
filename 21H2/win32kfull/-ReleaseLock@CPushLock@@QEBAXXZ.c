/*
 * XREFs of ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00F4E24
 * Callers:
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C007383C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C009A8A4 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C009C088 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x1C00A1E2C (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 *     ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C00B2F9C (-GetCurrentCursorSize@CCursorSizes@@QEBAIXZ.c)
 *     ?HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z @ 0x1C010806C (-HandleRequestCursorSizesRequest@CCursorSizes@@QEBAXPEAUtagCURSORSIZEINFO@@@Z.c)
 *     ?GetSizeForDpi@CCursorSizes@@QEBAII@Z @ 0x1C01083EC (-GetSizeForDpi@CCursorSizes@@QEBAII@Z.c)
 *     ?ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ @ 0x1C015DB44 (-ReleaseLock@GreInnermostPushLockMSRC85333@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CPushLock::ReleaseLock(CPushLock *this)
{
  if ( KeGetCurrentThread() == *((struct _KTHREAD **)this + 1) )
  {
    *((_QWORD *)this + 1) = 0LL;
    ExReleasePushLockExclusiveEx(this, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(this, 0LL);
  }
  KeLeaveCriticalRegion();
}
