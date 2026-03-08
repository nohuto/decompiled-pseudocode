/*
 * XREFs of _vsnwprintf @ 0x1403D2E30
 * Callers:
 *     RtlStringCbPrintfW @ 0x1402078E4 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x140208BFC (RtlStringCchPrintfW.c)
 *     RtlStringCchPrintfExW @ 0x140245C80 (RtlStringCchPrintfExW.c)
 *     RtlStringVPrintfWorkerW @ 0x1402987DC (RtlStringVPrintfWorkerW.c)
 *     StringCchPrintfW @ 0x1402FAA78 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintfEx @ 0x1403C1A7C (RtlUnicodeStringPrintfEx.c)
 *     RtlWideCharArrayVPrintfWorker @ 0x140409F78 (RtlWideCharArrayVPrintfWorker.c)
 *     StringVPrintfWorkerW @ 0x14066EE08 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1403D2E50 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
