/*
 * XREFs of TtmNotifyLowPowerStateExited @ 0x1409A12C8
 * Callers:
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x140990B24 (PopPowerAggregatorNotifyCsStateExited.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     TtmiScheduleSessionWorker @ 0x1409A1AC4 (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionById @ 0x1409A1F50 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiLogSessionCsExitComplete @ 0x1409A624C (TtmiLogSessionCsExitComplete.c)
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
    TtmiLogError("TtmNotifyLowPowerStateExited", 3159LL, (unsigned int)v2, (unsigned int)v2);
  }
}
