/*
 * XREFs of ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0182C68
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C018DA5C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C001A23C (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001BA1C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C0054EF8 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

void __fastcall PDEVOBJ::vClearSurface(PDEVOBJ *this)
{
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _BYTE v6[88]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  EngAcquireSemaphore(*(HSEMAPHORE *)(v2 + 8));
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8), 16);
  *(_QWORD *)&v6[32] = 0LL;
  *(_DWORD *)&v6[40] = 0;
  *(_DWORD *)&v6[44] = 0;
  *(_WORD *)&v6[48] = 256;
  DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v6, this);
  *(_QWORD *)(*(_QWORD *)this + 2528LL) = 0LL;
  DEVLOCKOBJ::vDestructor((struct _ERESOURCE *)v6);
  if ( *(_QWORD *)&v6[32] )
  {
    if ( v6[48] )
    {
      *(_DWORD *)(*(_QWORD *)&v6[32] + 40LL) &= ~2u;
      v6[48] = 0;
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v6[32]);
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8));
  v3 = *(struct _ERESOURCE **)(v2 + 8);
  if ( v3 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v3);
    PsLeavePriorityRegion(v5, v4);
  }
}
