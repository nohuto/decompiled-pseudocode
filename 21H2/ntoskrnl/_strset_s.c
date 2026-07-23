/*
 * XREFs of _strset_s @ 0x1403D77C0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strset_s(char *a1, size_t DstSize, int Value)
{
  char *i; // rax

  if ( !a1 || !DstSize )
    goto LABEL_8;
  for ( i = a1; *i; *i++ = Value )
  {
    if ( !--DstSize )
      break;
  }
  if ( !DstSize )
  {
    *a1 = 0;
LABEL_8:
    xHalTimerWatchdogStop();
    return 22;
  }
  return 0;
}
