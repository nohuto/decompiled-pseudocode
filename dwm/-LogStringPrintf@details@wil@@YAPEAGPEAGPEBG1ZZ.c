/*
 * XREFs of ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x140009D74
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x140009164 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x140006B28 (StringVPrintfWorkerW.c)
 */

unsigned __int16 *wil::details::LogStringPrintf(
        wil::details *this,
        char *a2,
        size_t *a3,
        const unsigned __int16 *a4,
        ...)
{
  size_t v5; // rdx
  unsigned __int16 *v6; // rbx
  __int64 v7; // rax
  const unsigned __int16 *v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = a4;
  v5 = (a2 - (char *)this) >> 1;
  v6 = (unsigned __int16 *)this;
  if ( v5 )
  {
    if ( v5 > 0x7FFFFFFF )
      *(_WORD *)this = 0;
    else
      StringVPrintfWorkerW((STRSAFE_LPWSTR)this, v5, a3, (STRSAFE_LPCWSTR)a3, (va_list)&v9);
  }
  if ( a2 != (char *)v6 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v6[v7] );
    v6 += v7;
  }
  return v6;
}
