/*
 * XREFs of ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E884
 * Callers:
 *     NtGdiDeleteObjectApp @ 0x1C0024430 (NtGdiDeleteObjectApp.c)
 *     GreCreateDisplayDC @ 0x1C002F6A0 (GreCreateDisplayDC.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00DAA60 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C00E5D70 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(DYNAMICMODECHANGESHARELOCK *this)
{
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
}
