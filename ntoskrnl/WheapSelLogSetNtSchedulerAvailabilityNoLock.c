/*
 * XREFs of WheapSelLogSetNtSchedulerAvailabilityNoLock @ 0x14060DF50
 * Callers:
 *     KeBugCheck2 @ 0x140565E90 (KeBugCheck2.c)
 *     WheaSelLogSetNtSchedulerAvailability @ 0x14060DDEC (WheaSelLogSetNtSchedulerAvailability.c)
 * Callees:
 *     IpmiHwContextInitialized @ 0x1406751AC (IpmiHwContextInitialized.c)
 */

__int64 WheapSelLogSetNtSchedulerAvailabilityNoLock()
{
  __int64 result; // rax

  result = IpmiHwContextInitialized(&WheaIpmiContext);
  if ( (_BYTE)result )
    dword_140C2C7C0 |= 4u;
  return result;
}
