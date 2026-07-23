/*
 * XREFs of vswprintf_s @ 0x1403D6A90
 * Callers:
 *     swprintf_s @ 0x1403D6A60 (swprintf_s.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 *     _swoutput_s @ 0x1403D9214 (_swoutput_s.c)
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
