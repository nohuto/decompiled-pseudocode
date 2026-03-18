/*
 * XREFs of WheaSelLogInitialize @ 0x140B31348
 * Callers:
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 * Callees:
 *     WheaSelLogSetNtSchedulerAvailability @ 0x140643104 (WheaSelLogSetNtSchedulerAvailability.c)
 *     IpmiHwInitializeContext @ 0x1406528E8 (IpmiHwInitializeContext.c)
 *     WheaSelLogCheckPoint @ 0x140A087A4 (WheaSelLogCheckPoint.c)
 */

__int64 __fastcall WheaSelLogInitialize(__int64 a1)
{
  __int64 result; // rax

  WheaIpmiContextLock = 0LL;
  result = *(_QWORD *)(a1 + 240);
  if ( *(_QWORD *)(result + 3704) )
  {
    result = IpmiHwInitializeContext();
    if ( (int)result >= 0 )
    {
      WheaSelLogSetNtSchedulerAvailability();
      return WheaSelLogCheckPoint();
    }
  }
  return result;
}
