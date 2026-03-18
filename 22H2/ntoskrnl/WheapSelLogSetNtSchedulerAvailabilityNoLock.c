/*
 * XREFs of WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14061036C
 * Callers:
 *     KeBugCheck2 @ 0x140568330 (KeBugCheck2.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x14061020C (WheaSelLogSetNtSchedulerAvailability.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x1406777FC (IpmiHwContextInitialized.c)
 */

__int64 WheapSelLogSetNtSchedulerAvailabilityNoLock()
{
  __int64 result; // rax

  result = IpmiHwContextInitialized(&WheaIpmiContext);
  if ( (_BYTE)result )
    dword_140C2CC40 |= 4u;
  return result;
}
