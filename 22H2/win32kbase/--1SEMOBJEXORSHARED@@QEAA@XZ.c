/*
 * XREFs of ??1SEMOBJEXORSHARED@@QEAA@XZ @ 0x1C0045A6C
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C003B100 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJEXORSHARED::~SEMOBJEXORSHARED(PERESOURCE *this)
{
  EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", (int)*this);
  if ( *this )
  {
    ExReleaseResourceAndLeaveCriticalRegion(*this);
    PsLeavePriorityRegion();
  }
}
