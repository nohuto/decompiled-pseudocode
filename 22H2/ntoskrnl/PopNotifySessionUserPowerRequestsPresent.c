/*
 * XREFs of PopNotifySessionUserPowerRequestsPresent @ 0x1408E1A44
 * Callers:
 *     NtPowerInformation @ 0x1406F05C0 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquirePowerRequestPushLock @ 0x1406F3F38 (PopAcquirePowerRequestPushLock.c)
 *     TtmNotifySessionPowerRequestPresent @ 0x1408FEDA0 (TtmNotifySessionPowerRequestPresent.c)
 */

void PopNotifySessionUserPowerRequestsPresent()
{
  __int64 i; // rbx
  int v1; // r8d

  PopAcquirePowerRequestPushLock(0);
  for ( i = PopPowerRequestObjectList; (__int64 *)i != &PopPowerRequestObjectList; i = *(_QWORD *)i )
  {
    v1 = *(_DWORD *)(i + 88);
    if ( v1 )
      TtmNotifySessionPowerRequestPresent(
        *(_DWORD *)(i + 16),
        *(_DWORD *)(i + 28),
        v1,
        *(_QWORD *)(i + 96),
        *(_QWORD *)(i + 104),
        *(_DWORD *)(i + 32),
        0);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerRequestLock);
}
