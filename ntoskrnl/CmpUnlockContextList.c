/*
 * XREFs of CmpUnlockContextList @ 0x140738DA0
 * Callers:
 *     CmpCallbackFillObjectContext @ 0x1406E1220 (CmpCallbackFillObjectContext.c)
 *     CmpGetCallbackObjectContext @ 0x140738A30 (CmpGetCallbackObjectContext.c)
 *     CmpFreeCallbackObjectContexts @ 0x140738AB4 (CmpFreeCallbackObjectContexts.c)
 *     CmSetCallbackObjectContext @ 0x140738C30 (CmSetCallbackObjectContext.c)
 *     CmUnRegisterCallback @ 0x140A0C560 (CmUnRegisterCallback.c)
 * Callees:
 *     ExfReleasePushLock @ 0x140238E10 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

void CmpUnlockContextList()
{
  signed __int64 v0; // rdx
  ULONG_PTR v1; // rtt

  _m_prefetchw(&CmpContextListLock);
  v0 = CmpContextListLock - 16;
  if ( (CmpContextListLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v0 = 0LL;
  if ( (CmpContextListLock & 2) != 0
    || (v1 = CmpContextListLock,
        v1 != _InterlockedCompareExchange64((volatile signed __int64 *)&CmpContextListLock, v0, CmpContextListLock)) )
  {
    ExfReleasePushLock(&CmpContextListLock);
  }
  KeAbPostRelease((ULONG_PTR)&CmpContextListLock);
  KeLeaveCriticalRegion();
}
