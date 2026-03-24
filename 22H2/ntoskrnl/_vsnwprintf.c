/*
 * XREFs of _vsnwprintf @ 0x1403D0970
 * Callers:
 *     StringCchPrintfW @ 0x140323CD8 (StringCchPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x14032ECB0 (RtlStringVPrintfWorkerW.c)
 *     RtlStringCbPrintfW @ 0x140347B60 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x140348150 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x14036E45C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x14036E520 (RtlUnicodeStringPrintfEx.c)
 *     StringVPrintfWorkerW @ 0x1405C38E8 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1403D0990 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
