errno_t __cdecl wcsnset_s(wchar_t *Dst, size_t SizeInWords, wchar_t Val, size_t MaxCount)
{
  wchar_t *v5; // rax

  if ( MaxCount )
  {
    if ( !Dst )
      goto LABEL_4;
LABEL_6:
    if ( !SizeInWords )
      goto LABEL_4;
    v5 = Dst;
    if ( *Dst )
    {
      while ( MaxCount )
      {
        if ( !--SizeInWords )
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
      if ( !--SizeInWords )
        break;
      ++v5;
    }
LABEL_16:
    if ( !SizeInWords )
    {
      *Dst = 0;
      goto LABEL_4;
    }
    return 0;
  }
  if ( Dst )
    goto LABEL_6;
  if ( SizeInWords )
  {
LABEL_4:
    xHalTimerWatchdogStop();
    return 22;
  }
  return 0;
}
