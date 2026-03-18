/*
 * XREFs of ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0099D40
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C0063A90 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreSetMagicColors @ 0x1C0175868 (GreSetMagicColors.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall NEEDGRELOCK::vUnlock(PERESOURCE *this, __int64 a2, int a3)
{
  __int64 v4; // rcx

  if ( *this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsem", (int)*this, a3);
    if ( *this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*this);
      PsLeavePriorityRegion(v4);
    }
    *this = 0LL;
  }
}
