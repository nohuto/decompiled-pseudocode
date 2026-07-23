/*
 * XREFs of _strnset_s @ 0x1403D7730
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strnset_s(char *Str, size_t SizeInBytes, int Val, size_t MaxCount)
{
  char *v5; // rax

  if ( MaxCount )
  {
    if ( !Str )
      goto LABEL_18;
LABEL_6:
    if ( !SizeInBytes )
      goto LABEL_18;
    v5 = Str;
    if ( *Str )
    {
      while ( MaxCount )
      {
        if ( --SizeInBytes )
        {
          *v5 = Val;
          --MaxCount;
          if ( *++v5 )
            continue;
        }
        goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( MaxCount )
      {
LABEL_16:
        if ( SizeInBytes )
          return 0;
        *Str = 0;
        goto LABEL_18;
      }
    }
    while ( *v5 )
    {
      if ( !--SizeInBytes )
        break;
      ++v5;
    }
    goto LABEL_16;
  }
  if ( Str )
    goto LABEL_6;
  if ( !SizeInBytes )
    return 0;
LABEL_18:
  xHalTimerWatchdogStop();
  return 22;
}
