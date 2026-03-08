/*
 * XREFs of ??1SEMOBJEXORSHARED@@QEAA@XZ @ 0x1C0021A24
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C0044400 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJEXORSHARED::~SEMOBJEXORSHARED(PERESOURCE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  EtwTraceGreLockReleaseSemaphore(L"hsem", *this);
  if ( *this )
  {
    ExReleaseResourceAndLeaveCriticalRegion(*this);
    PsLeavePriorityRegion(v3, v2);
  }
}
