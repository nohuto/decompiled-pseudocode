/*
 * XREFs of ?ReleaseEntryLock@GdiHandleEntryTable@@QEAAXI@Z @ 0x1C004A620
 * Callers:
 *     GreSelectVisRgn @ 0x1C0042CD0 (GreSelectVisRgn.c)
 *     GreDeleteObject @ 0x1C0043CD0 (GreDeleteObject.c)
 *     EngLockSurface @ 0x1C0044C20 (EngLockSurface.c)
 *     ?vAltUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00467B8 (-vAltUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C0046970 (HmgIncrementShareReferenceCount.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C004A440 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vDelete@XDCOBJ@@QEAAXK@Z @ 0x1C004EC00 (-vDelete@XDCOBJ@@QEAAXK@Z.c)
 *     ?GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV?$umptr_r@E@@@Z @ 0x1C00577F0 (-GreCreateBitmapInternal@@YAPEAUHBITMAP__@@HHIIAEAV-$umptr_r@E@@@Z.c)
 *     HmgMarkLazyDelete @ 0x1C00A3410 (HmgMarkLazyDelete.c)
 * Callees:
 *     <none>
 */

void __fastcall GdiHandleEntryTable::ReleaseEntryLock(GdiHandleEntryTable *this, unsigned int a2)
{
  *(_DWORD *)(*(_QWORD *)this + 24LL * a2 + 8) &= ~1u;
  ExReleasePushLockExclusiveEx(
    *(_QWORD *)(**((_QWORD **)this + 3) + 8 * ((unsigned __int64)a2 >> 8)) + 16LL * (unsigned __int8)a2,
    0LL);
  KeLeaveCriticalRegion();
}
