/*
 * XREFs of _vsnwprintf @ 0x1403D1070
 * Callers:
 *     RtlStringVPrintfWorkerW @ 0x140265C40 (RtlStringVPrintfWorkerW.c)
 *     RtlStringCbPrintfW @ 0x14027EB50 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x14027F140 (RtlStringCchPrintfW.c)
 *     StringCchPrintfW @ 0x1402CA7B8 (StringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x14036EF9C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x14036F060 (RtlUnicodeStringPrintfEx.c)
 *     StringVPrintfWorkerW @ 0x1405C39A8 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1403D1090 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
