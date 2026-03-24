/*
 * XREFs of ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C013E10C
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0143CA4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C002C080 (PopThreadGuardedObject.c)
 *     GreReleaseSemaphoreInternal @ 0x1C0038C70 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C0038DC0 (EngAcquireSemaphore.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C003B054 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003B0DC (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0079AF0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007DB70 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00BE6F4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C013E1B4 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 */

void __fastcall PDEVOBJ::vClearSurface(PDEVOBJ *this)
{
  int v2; // r8d
  _BYTE v3[32]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v4[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v5[9]; // [rsp+50h] [rbp-48h] BYREF

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 13);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v4);
  DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v3, this);
  *(_QWORD *)(*(_QWORD *)this + 2552LL) = 0LL;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v3);
  if ( v4[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v4);
  PopThreadGuardedObject(v5);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v2);
  GreReleaseSemaphoreInternal((struct _ERESOURCE *)ghsemDriverMgmt);
}
