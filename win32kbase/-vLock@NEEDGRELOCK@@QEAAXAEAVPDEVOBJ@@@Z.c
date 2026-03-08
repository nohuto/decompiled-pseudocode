/*
 * XREFs of ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0020500
 * Callers:
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C001CE8C (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     GreSetMagicColors @ 0x1C01995FC (GreSetMagicColors.c)
 * Callees:
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C0020580 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 */

void __fastcall NEEDGRELOCK::vLock(NEEDGRELOCK *this, struct PDEVOBJ *a2)
{
  __int64 v4; // rcx
  HSEMAPHORE v5; // rcx

  *(_QWORD *)this = 0LL;
  if ( *(_QWORD *)a2
    && !(unsigned int)PDEVOBJ::bAllowShareAccess(a2)
    && (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 0x8000) == 0 )
  {
    v5 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(v4) + 24) + 120LL);
    *(_QWORD *)this = v5;
    EngAcquireSemaphore(v5);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsem", *(_QWORD *)this, 2LL);
  }
}
