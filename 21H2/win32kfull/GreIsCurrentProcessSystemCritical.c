/*
 * XREFs of GreIsCurrentProcessSystemCritical @ 0x1C00DD520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 GreIsCurrentProcessSystemCritical()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  BOOL v2; // ebx

  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  v2 = UmfdHostLifeTimeManager::s_UmfdHostProcess == (PRKPROCESS)PsGetCurrentProcess(v1, v0);
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  return v2;
}
