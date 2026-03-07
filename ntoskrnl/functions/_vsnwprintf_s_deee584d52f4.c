int __cdecl vsnwprintf_s(wchar_t *DstBuf, size_t SizeInWords, size_t MaxCount, const wchar_t *Format, va_list ArgList)
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
    if ( !SizeInWords )
      return 0;
    goto LABEL_12;
  }
  if ( !SizeInWords )
    goto LABEL_12;
  if ( SizeInWords <= MaxCount )
  {
    result = swoutput_s(DstBuf, SizeInWords, Format, ArgList);
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
    result = swoutput_s(DstBuf, MaxCount + 1, Format, ArgList);
    if ( result == -2 )
      return -1;
  }
  if ( result >= 0 )
    return result;
  *DstBuf = 0;
  return -1;
}
