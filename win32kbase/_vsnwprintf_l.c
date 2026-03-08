/*
 * XREFs of _vsnwprintf_l @ 0x1C00DAA54
 * Callers:
 *     _vsnwprintf @ 0x1C00DAA34 (_vsnwprintf.c)
 * Callees:
 *     ?MarkInvalid@CIgnoreInputQueue@@EEAAXXZ @ 0x1C006BF40 (-MarkInvalid@CIgnoreInputQueue@@EEAAXXZ.c)
 *     _flsbuf @ 0x1C00DB008 (_flsbuf.c)
 *     _woutput_l @ 0x1C00DB98C (_woutput_l.c)
 */

int __cdecl vsnwprintf_l(wchar_t *DstBuf, size_t MaxCount, const wchar_t *Format, _locale_t Locale, va_list ArgList)
{
  int v6; // edi
  char *ptr; // rcx
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  *(&File._cnt + 1) = 0;
  memset(&File._file, 0, 20);
  if ( Format && (!MaxCount || DstBuf) )
  {
    File._flag = 66;
    File._base = (char *)DstBuf;
    File._ptr = (char *)DstBuf;
    if ( MaxCount <= 0x3FFFFFFF )
      File._cnt = 2 * MaxCount;
    else
      File._cnt = 0x7FFFFFFF;
    v6 = woutput_l(&File, Format, Locale, ArgList);
    if ( DstBuf )
    {
      if ( --File._cnt < 0 )
      {
        flsbuf(0, &File);
        ptr = File._ptr;
      }
      else
      {
        *File._ptr = 0;
        ptr = ++File._ptr;
      }
      if ( --File._cnt < 0 )
        flsbuf(0, &File);
      else
        *ptr = 0;
    }
    return v6;
  }
  else
  {
    CIgnoreInputQueue::MarkInvalid(0LL);
    return -1;
  }
}
