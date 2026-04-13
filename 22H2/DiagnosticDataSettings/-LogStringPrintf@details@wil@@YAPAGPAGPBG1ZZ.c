/*
 * XREFs of ?LogStringPrintf@details@wil@@YAPAGPAGPBG1ZZ @ 0x1000382D
 * Callers:
 *     ?GetFailureLogString@wil@@YGJPAGIABUFailureInfo@1@@Z @ 0x10003898 (-GetFailureLogString@wil@@YGJPAGIABUFailureInfo@1@@Z.c)
 * Callees:
 *     __vsnwprintf @ 0x10004C2A (__vsnwprintf.c)
 */

unsigned __int16 *wil::details::LogStringPrintf(
        wchar_t *Buffer,
        unsigned __int16 *a2,
        wchar_t *Format,
        const unsigned __int16 *Args,
        ...)
{
  wchar_t *v4; // esi
  int v5; // eax
  unsigned int v6; // edi
  int v7; // eax

  v4 = Buffer;
  v5 = a2 - Buffer;
  if ( v5 <= 0 )
  {
    if ( v5 )
      *Buffer = 0;
  }
  else
  {
    v6 = v5 - 1;
    v7 = _vsnwprintf(Buffer, v5 - 1, Format, (va_list)&Args);
    if ( v7 < 0 || v7 >= v6 )
      Buffer[v6] = 0;
  }
  if ( a2 != Buffer )
    return &Buffer[wcslen(Buffer)];
  return v4;
}
