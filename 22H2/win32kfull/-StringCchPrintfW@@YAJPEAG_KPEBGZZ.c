/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C003D58C
 * Callers:
 *     ?CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z @ 0x1C003D220 (-CreatePointerDeviceProcessEvent@@YAHKHEPEAGPEAPEAX@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x1C003C630 (StringVPrintfWorkerW.c)
 */

HRESULT StringCchPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, ...)
{
  HRESULT result; // eax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringVPrintfWorkerW(a1, a2, a3, (STRSAFE_LPCWSTR)a3, va);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
