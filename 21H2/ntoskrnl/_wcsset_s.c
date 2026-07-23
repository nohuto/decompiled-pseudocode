/*
 * XREFs of _wcsset_s @ 0x1403D2500
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl wcsset_s(wchar_t *Dst, size_t SizeInWords, wchar_t Value)
{
  wchar_t *i; // rax

  if ( !Dst || !SizeInWords )
    goto LABEL_8;
  for ( i = Dst; *i; ++i )
  {
    if ( !--SizeInWords )
      break;
    *i = Value;
  }
  if ( !SizeInWords )
  {
    *Dst = 0;
LABEL_8:
    xHalTimerWatchdogStop();
    return 22;
  }
  return 0;
}
