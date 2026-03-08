/*
 * XREFs of vsprintf_s @ 0x1403D9BD0
 * Callers:
 *     sprintf_s @ 0x1403D9BA0 (sprintf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _soutput_s @ 0x1403DAF04 (_soutput_s.c)
 */

int __cdecl vsprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, va_list ArgList)
{
  int result; // eax

  if ( !DstBuf || !SizeInBytes || !Format )
    goto LABEL_6;
  result = soutput_s(DstBuf, SizeInBytes, Format, ArgList);
  if ( result >= 0 )
    return result;
  *DstBuf = 0;
  if ( result == -2 )
LABEL_6:
    xHalTimerWatchdogStop();
  return -1;
}
