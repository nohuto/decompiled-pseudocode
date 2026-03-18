/*
 * XREFs of ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00628E0
 * Callers:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001CA20 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0061CD0 (pProcessDfbSurfacesInternal.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C016A2C8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C016B0B8 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     GreSetMagicColors @ 0x1C0175868 (GreSetMagicColors.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z @ 0x1C0062F3C (-bPrepareTrgDco@DEVLOCKOBJ@@QEAAHPEAVXDCOBJ@@@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall DEVLOCKOBJ::vLock(DEVLOCKOBJ *this, struct PDEVOBJ *a2)
{
  HSEMAPHORE v4; // rcx

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  DEVLOCKOBJ::bPrepareTrgDco(this, 0LL);
  *((_DWORD *)this + 6) = 1;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 40LL) & 1) != 0 )
  {
    v4 = *(HSEMAPHORE *)(*(_QWORD *)a2 + 48LL);
    *(_QWORD *)this = v4;
    *((_QWORD *)this + 2) = *(_QWORD *)a2;
    EngAcquireSemaphore(v4);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, 11LL);
  }
}
