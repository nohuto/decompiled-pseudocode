__int64 RtlStringCbPrintfW(unsigned __int16 *a1, unsigned __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rsi
  unsigned int v6; // edi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    v6 = -1073741811;
    if ( v3 )
      *a1 = 0;
  }
  else
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = vsnwprintf(a1, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v5 )
    {
      v6 = -2147483643;
      goto LABEL_5;
    }
    if ( v7 == v5 )
LABEL_5:
      a1[v5] = 0;
  }
  return v6;
}
