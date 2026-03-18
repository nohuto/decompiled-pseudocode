/*
 * XREFs of IpmiHwContextInitialized @ 0x1406777FC
 * Callers:
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14061036C (WheapSelLogSetNtSchedulerAvailabilityNoLock.c)
 *     IpmiHwInitializeContext @ 0x140677818 (IpmiHwInitializeContext.c)
 *     IpmiLibAddSelBugcheckRecord @ 0x140677D64 (IpmiLibAddSelBugcheckRecord.c)
 *     IpmiLibAddSelCheckpointRecord @ 0x140677EB8 (IpmiLibAddSelCheckpointRecord.c)
 *     IpmiLibpAddSelRawData @ 0x140677FD0 (IpmiLibpAddSelRawData.c)
 *     WheaQuerySystemInformation @ 0x140A077F0 (WheaQuerySystemInformation.c)
 *     WheaSelLogCheckPoint @ 0x140A07884 (WheaSelLogCheckPoint.c)
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
