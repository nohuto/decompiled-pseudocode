/*
 * XREFs of sscanf_s @ 0x1403E70A0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1409BB750 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 *     _sinput_s @ 0x1403E9BB4 (_sinput_s.c)
 */

int sscanf_s(const char *Src, const char *Format, ...)
{
  __int64 v4; // rdx
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, Format);
  if ( Format )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( Src[v4] );
    return sinput_s(Src, v4, Format, va);
  }
  else
  {
    xHalTimerWatchdogStop();
    return -1;
  }
}
