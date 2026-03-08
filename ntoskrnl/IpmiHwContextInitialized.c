/*
 * XREFs of IpmiHwContextInitialized @ 0x1406751AC
 * Callers:
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14060DF50 (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     IpmiHwInitializeContext @ 0x1406751C8 (IpmiHwInitializeContext.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x140675714 (IpmiLibAddSelBugcheckRecord.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x140675868 (IpmiLibAddSelCheckpointRecord.c)
 *     IpmiLibpAddSelRawData @ 0x140675980 (IpmiLibpAddSelRawData.c)
 *     WheaQuerySystemInformation @ 0x140A04B00 (WheaQuerySystemInformation.c)
 *     WheaSelLogCheckPoint @ 0x140A04B94 (WheaSelLogCheckPoint.c)
 * Callees:
 *     <none>
 */

signed __int8 __fastcall IpmiHwContextInitialized(__int64 a1)
{
  if ( a1 )
    return _InterlockedCompareExchange8((volatile signed __int8 *)(a1 + 88), 0, 0);
  else
    return 0;
}
