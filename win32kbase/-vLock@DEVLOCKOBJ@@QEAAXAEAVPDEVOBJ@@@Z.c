/*
 * XREFs of ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C001A23C
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C004B700 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0181D50 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0181D80 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0182C68 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     pProcessDfbSurfacesInternal @ 0x1C01878E0 (pProcessDfbSurfacesInternal.c)
 *     GreSetMagicColors @ 0x1C01995FC (GreSetMagicColors.c)
 * Callees:
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C001A998 (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 */

void __fastcall DEVLOCKOBJ::vLock(DEVLOCKOBJ *this, struct PDEVOBJ *a2)
{
  __int64 v4; // rcx
  HSEMAPHORE v5; // rcx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  DEVLOCKOBJ::bPrepareTrgDco(this, 0LL);
  *((_DWORD *)this + 6) = 1;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) != 0 )
  {
    SGDGetSessionState(v4);
    v5 = *(HSEMAPHORE *)(*(_QWORD *)a2 + 48LL);
    *(_QWORD *)this = v5;
    *((_QWORD *)this + 2) = *(_QWORD *)a2;
    EngAcquireSemaphore(v5);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, 11LL);
  }
}
