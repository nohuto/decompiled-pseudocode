errno_t __cdecl wcsset_s(wchar_t *Dst, size_t SizeInWords, wchar_t Value)
{
  wchar_t *v3; // rax

  if ( !Dst || !SizeInWords )
    goto LABEL_8;
  v3 = Dst;
  if ( *Dst )
  {
    do
    {
      if ( !--SizeInWords )
        break;
      *v3++ = Value;
    }
    while ( *v3 );
    if ( !SizeInWords )
    {
      *Dst = 0;
LABEL_8:
      xHalTimerWatchdogStop();
      return 22;
    }
  }
  return 0;
}
