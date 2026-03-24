/*
 * XREFs of CmpWaitForLateUnloadWorker @ 0x140347F08
 * Callers:
 *     CmpDeleteKeyObject @ 0x1406E03B0 (CmpDeleteKeyObject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     ExBlockOnAddressPushLock @ 0x1402F4BA0 (ExBlockOnAddressPushLock.c)
 */

void CmpWaitForLateUnloadWorker()
{
  __int64 v0; // [rsp+40h] [rbp+8h] BYREF

  while ( 1 )
  {
    ExAcquireFastMutex(&CmpWorkerEngineLock);
    LOBYTE(v0) = CmpWorkerEngineWorkItemActive;
    KeReleaseGuardedMutex(&CmpWorkerEngineLock);
    if ( !(_BYTE)v0 )
      break;
    ExBlockOnAddressPushLock((__int64)&CmpWorkerEngineFinishedEvent, &CmpWorkerEngineWorkItemActive, &v0, 1uLL, 0LL);
  }
}
