/*
 * XREFs of EngDebugPrint @ 0x1C0196BD0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

void __stdcall EngDebugPrint(PCHAR StandardPrefix, PCHAR DebugMessage, va_list ap)
{
  char DstBuf[256]; // [rsp+20h] [rbp-118h] BYREF

  DbgPrintEx(0x70u, 0, StandardPrefix);
  vsprintf_s(DstBuf, 0x100uLL, DebugMessage, ap);
  DbgPrintEx(0x70u, 0, DstBuf);
}
