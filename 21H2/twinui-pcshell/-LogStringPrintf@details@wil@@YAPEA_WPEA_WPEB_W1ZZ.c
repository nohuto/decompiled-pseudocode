/*
 * XREFs of ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x18035A824
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x180359F78 (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1804D75BC (_vsnwprintf_l.c)
 */

wchar_t *wil::details::LogStringPrintf(wchar_t *Buffer, wchar_t *a2, const wchar_t *a3, const wchar_t *a4, ...)
{
  wchar_t *v4; // rbx
  __int64 v5; // r9
  unsigned __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rax
  const wchar_t *v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = a4;
  v4 = Buffer;
  v5 = a2 - Buffer;
  if ( (unsigned __int64)(v5 - 1) > 0x7FFFFFFE )
  {
    if ( v5 )
      *Buffer = 0;
  }
  else
  {
    v7 = v5 - 1;
    v8 = vsnwprintf_l(Buffer, v5 - 1, a3, 0LL, (va_list)&v11);
    if ( v8 < 0 || v8 >= v7 )
      v4[v7] = 0;
  }
  if ( a2 != v4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( v4[v9] );
    v4 += v9;
  }
  return v4;
}
