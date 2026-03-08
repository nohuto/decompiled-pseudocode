/*
 * XREFs of ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C01CD6EC
 * Callers:
 *     NtUserOpenWindowStation @ 0x1C00C2180 (NtUserOpenWindowStation.c)
 * Callees:
 *     <none>
 */

__int64 RtlStringCbPrintfW(unsigned __int16 *a1, unsigned __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned __int64 v3; // rdx
  unsigned int v5; // edi
  unsigned __int64 v6; // rsi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
  {
    v6 = v3 - 1;
    v5 = 0;
    v7 = _vsnwprintf(a1, v3 - 1, a3, Args);
    if ( v7 < 0 || v7 > v6 )
    {
      v5 = -2147483643;
    }
    else if ( v7 != v6 )
    {
      return v5;
    }
    a1[v6] = 0;
    return v5;
  }
  v5 = -1073741811;
  if ( v3 )
    *a1 = 0;
  return v5;
}
