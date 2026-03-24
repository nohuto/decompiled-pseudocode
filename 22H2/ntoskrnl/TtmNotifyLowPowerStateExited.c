/*
 * XREFs of TtmNotifyLowPowerStateExited @ 0x1408FE9C8
 * Callers:
 *     PopIssueActionRequest @ 0x140776468 (PopIssueActionRequest.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1408EE640 (PopPowerAggregatorNotifyCsStateExited.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402CBB00 (ExReleaseResourceLite.c)
 *     TtmiScheduleSessionWorker @ 0x1408FF190 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionById @ 0x1408FF640 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x140902B14 (TtmiLogError.c)
 *     TtmiLogSessionCsExitComplete @ 0x140903854 (TtmiLogSessionCsExitComplete.c)
 */

void __fastcall TtmNotifyLowPowerStateExited(unsigned int a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v2 = TtmpAcquireSessionById(&v4, a1);
  if ( v2 >= 0 )
  {
    TtmiLogSessionCsExitComplete(a1);
    v3 = v4;
    *(_DWORD *)(v4 + 4) &= 0xFFFFFCFF;
    TtmiScheduleSessionWorker(v3, 4LL);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyLowPowerStateExited", 3163LL, (unsigned int)v2, (unsigned int)v2);
  }
}
