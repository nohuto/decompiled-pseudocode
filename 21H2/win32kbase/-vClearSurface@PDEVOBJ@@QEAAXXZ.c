/*
 * XREFs of ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C016B0B8
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0170C3C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001BAA4 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C001DADC (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DLODCOBJ@@QEAA@XZ @ 0x1C001DB44 (--1DLODCOBJ@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C002DF70 (EngAcquireSemaphore.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00628E0 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C00826F0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0087C00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall PDEVOBJ::vClearSurface(PDEVOBJ *this)
{
  __int64 v2; // rdx
  int v3; // r8d
  int v4; // r8d
  __int64 v5; // rcx
  _BYTE v6[32]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v7[88]; // [rsp+40h] [rbp-58h] BYREF

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v7);
  DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v6, this);
  *(_QWORD *)(*(_QWORD *)this + 2528LL) = 0LL;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v6, v2, v3);
  DLODCOBJ::~DLODCOBJ((DLODCOBJ *)v7);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v4);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v5);
  }
}
