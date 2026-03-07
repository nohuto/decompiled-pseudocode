int __cdecl vsnprintf_s(char *DstBuf, size_t SizeInBytes, size_t MaxCount, const char *Format, va_list ArgList)
{
  int result; // eax

  if ( !Format )
    goto LABEL_12;
  if ( MaxCount )
  {
    if ( !DstBuf )
    {
LABEL_12:
      xHalTimerWatchdogStop();
      return -1;
    }
  }
  else if ( !DstBuf )
  {
    if ( !SizeInBytes )
      return 0;
    goto LABEL_12;
  }
  if ( !SizeInBytes )
    goto LABEL_12;
  if ( SizeInBytes <= MaxCount )
  {
    result = soutput_s(DstBuf, SizeInBytes, Format, ArgList);
    if ( result == -2 )
    {
      if ( MaxCount == -1LL )
        return -1;
      *DstBuf = 0;
      goto LABEL_12;
    }
  }
  else
  {
    result = soutput_s(DstBuf, MaxCount + 1, Format, ArgList);
    if ( result == -2 )
      return -1;
  }
  if ( result >= 0 )
    return result;
  *DstBuf = 0;
  return -1;
}
