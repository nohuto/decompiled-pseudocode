/*
 * XREFs of CmpUnlockCallbackList @ 0x140738E04
 * Callers:
 *     CmSetCallbackObjectContext @ 0x140738C30 (CmSetCallbackObjectContext.c)
 *     CmpInsertCallbackInListByAltitude @ 0x14084E8FC (CmpInsertCallbackInListByAltitude.c)
 *     CmpEnumerateCallback @ 0x140880C70 (CmpEnumerateCallback.c)
 *     CmUnRegisterCallback @ 0x140A0C560 (CmUnRegisterCallback.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

void CmpUnlockCallbackList()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpCallbackListLock);
  v0 = CmpCallbackListLock - 16;
  if ( (CmpCallbackListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpCallbackListLock & 2) != 0
    || (v1 = CmpCallbackListLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpCallbackListLock, v0, CmpCallbackListLock)) )
  {
    ExfReleasePushLock(&CmpCallbackListLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpCallbackListLock);
  KeLeaveCriticalRegion();
}
