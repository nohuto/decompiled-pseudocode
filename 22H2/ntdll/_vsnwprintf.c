/*
 * XREFs of _vsnwprintf @ 0x18008E240
 * Callers:
 *     RtlStringCchPrintfW @ 0x18004458C (RtlStringCchPrintfW.c)
 *     StringCbPrintfW @ 0x18004C564 (StringCbPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x180067A54 (RtlStringVPrintfWorkerW.c)
 *     RtlStringVPrintfWorkerW_0 @ 0x18006AEC8 (RtlStringVPrintfWorkerW_0.c)
 *     RtlStringCbPrintfW @ 0x1800D8550 (RtlStringCbPrintfW.c)
 *     StringCchPrintfW @ 0x1800DDFC8 (StringCchPrintfW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x18008E25C (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Buffer, size_t BufferCount, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Buffer, BufferCount, Format, 0LL, Args);
}
