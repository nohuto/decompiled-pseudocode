/*
 * XREFs of FastUpdateWinIni @ 0x1C015D330
 * Callers:
 *     <none>
 * Callees:
 *     RtlLoadStringOrError @ 0x1C0018EE0 (RtlLoadStringOrError.c)
 *     FastWriteProfileStringW @ 0x1C00D1720 (FastWriteProfileStringW.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void *__fastcall FastUpdateWinIni(const UNICODE_STRING *a1, unsigned int a2, ULONG a3, _WORD *a4)
{
  WCHAR v8[40]; // [rsp+20h] [rbp-78h] BYREF

  RtlLoadStringOrError(a3, v8, 40, 0);
  return FastWriteProfileStringW(a1, a2, v8, a4);
}
