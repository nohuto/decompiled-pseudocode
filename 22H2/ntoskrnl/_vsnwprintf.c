/*
 * XREFs of _vsnwprintf @ 0x1403D8350
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x14022648C (RtlStringVPrintfWorkerW.c)
 *     RtlStringCbPrintfW @ 0x140229624 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x14022A92C (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x14022B740 (RtlStringCchPrintfExW.c)
 *     StringCchPrintfW @ 0x140365C98 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintfEx @ 0x1403CDA68 (RtlUnicodeStringPrintfEx.c)
 *     RtlWideCharArrayVPrintfWorker @ 0x14040F474 (RtlWideCharArrayVPrintfWorker.c)
 *     StringVPrintfWorkerW @ 0x140671458 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1403D8370 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
