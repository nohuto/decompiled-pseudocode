/*
 * XREFs of ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C013E41C
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C0143FF4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C002D4F0 (PopThreadGuardedObject.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003A0E0 (GreReleaseSemaphoreInternal.c)
 *     EngAcquireSemaphore @ 0x1C003A230 (EngAcquireSemaphore.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x1C003C4C4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003C54C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C007B1D0 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C007EE00 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00BEA44 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C013E4C4 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
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
