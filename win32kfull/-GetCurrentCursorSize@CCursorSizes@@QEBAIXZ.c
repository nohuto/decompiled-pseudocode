/*
 * XREFs of ?GetCurrentCursorSize@CCursorSizes@@QEBAIXZ @ 0x1C00204F0
 * Callers:
 *     ?FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002052C (-FixupCursorForMonitor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     ?SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z @ 0x1C00219C0 (-SetPointerInternal@@YAX_NW4CursorImageReason@Cursor@InputTraceLogging@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C0061E20 (zzzUpdateCursorImage.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C00DBE14 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00E001C (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 */

__int64 __fastcall CCursorSizes::GetCurrentCursorSize(CCursorSizes *this)
{
  CCursorSizes *v1; // rdi
  CPushLock *v2; // rbx

  v1 = gpCursorSizes;
  v2 = (CCursorSizes *)((char *)gpCursorSizes + 64);
  CPushLock::AcquireLockShared((CCursorSizes *)((char *)gpCursorSizes + 64));
  LODWORD(v1) = *(_DWORD *)v1;
  CPushLock::ReleaseLock(v2);
  return (unsigned int)v1;
}
