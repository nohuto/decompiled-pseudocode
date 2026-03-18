/*
 * XREFs of _vsnwprintf @ 0x1403E0440
 * Callers:
 *     StringCchPrintfW @ 0x1402511F0 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x1402D17BC (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x1402D1840 (RtlUnicodeStringPrintfEx.c)
 *     RtlStringVPrintfWorkerW @ 0x1402DFCC8 (RtlStringVPrintfWorkerW.c)
 *     RtlStringCchPrintfW @ 0x1402E0198 (RtlStringCchPrintfW.c)
 *     RtlStringCbPrintfW @ 0x1402E1280 (RtlStringCbPrintfW.c)
 *     StringVPrintfWorkerW @ 0x14064CB7C (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1403E0460 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
