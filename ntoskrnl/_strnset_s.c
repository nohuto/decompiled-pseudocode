errno_t __cdecl strnset_s(char *Str, size_t SizeInBytes, int Val, size_t MaxCount)
{
  char *v5; // rax

  if ( MaxCount )
  {
    if ( !Str )
      goto LABEL_4;
LABEL_6:
    if ( !SizeInBytes )
      goto LABEL_4;
    v5 = Str;
    if ( *Str )
    {
      while ( MaxCount )
      {
        if ( !--SizeInBytes )
          goto LABEL_16;
        *v5 = Val;
        --MaxCount;
        if ( !*++v5 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( MaxCount )
        goto LABEL_16;
    }
    while ( *v5 )
    {
      if ( !--SizeInBytes )
        break;
      ++v5;
    }
LABEL_16:
    if ( !SizeInBytes )
    {
      *Str = 0;
      goto LABEL_4;
    }
    return 0;
  }
  if ( Str )
    goto LABEL_6;
  if ( SizeInBytes )
  {
LABEL_4:
    xHalTimerWatchdogStop();
    return 22;
  }
  return 0;
}
