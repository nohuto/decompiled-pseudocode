/*
 * XREFs of vsprintf_s @ 0x1403DF0F0
 * Callers:
 *     sprintf_s @ 0x1403DF0C0 (sprintf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036DD70 (xHalTimerWatchdogStop.c)
 *     _soutput_s @ 0x1403E0424 (_soutput_s.c)
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
