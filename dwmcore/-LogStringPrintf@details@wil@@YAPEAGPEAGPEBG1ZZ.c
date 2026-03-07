unsigned __int16 *wil::details::LogStringPrintf(
        wil::details *this,
        char *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        ...)
{
  unsigned __int16 *v5; // rdi
  __int64 v6; // rax
  const unsigned __int16 *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = a4;
  v5 = (unsigned __int16 *)this;
  StringCchVPrintfW((unsigned __int16 *)this, (a2 - (char *)this) >> 1, a3, (char *)&v8);
  if ( a2 != (char *)v5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v5[v6] );
    v5 += v6;
  }
  return v5;
}
