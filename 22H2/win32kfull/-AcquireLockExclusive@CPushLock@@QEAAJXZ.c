/*
 * XREFs of ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x1C00B8B48
 * Callers:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x1C0024A88 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C005B398 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?AcquireDcVisRgnExclusive@DC@@QEAA@XZ @ 0x1C0140C40 (-AcquireDcVisRgnExclusive@DC@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPushLock::AcquireLockExclusive(CPushLock *this)
{
  KeEnterCriticalRegion();
  ExAcquirePushLockExclusiveEx(this, 0LL);
  *((_QWORD *)this + 1) = KeGetCurrentThread();
  return 0LL;
}
