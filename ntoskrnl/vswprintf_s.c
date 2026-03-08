/*
 * XREFs of vswprintf_s @ 0x1403D8870
 * Callers:
 *     swprintf_s @ 0x1403D8840 (swprintf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     _swoutput_s @ 0x1403DAFF8 (_swoutput_s.c)
 */

int __cdecl vswprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, va_list ArgList)
{
  int result; // eax

  if ( !Dst || !SizeInWords || !Format )
    goto LABEL_6;
  result = swoutput_s(Dst, SizeInWords, Format, ArgList);
  if ( result >= 0 )
    return result;
  *Dst = 0;
  if ( result == -2 )
LABEL_6:
    xHalTimerWatchdogStop();
  return -1;
}
