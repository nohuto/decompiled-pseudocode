/*
 * XREFs of _vsnwprintf @ 0x1403D11E0
 * Callers:
 *     StringCchPrintfW @ 0x1402490A8 (StringCchPrintfW.c)
 *     RtlStringVPrintfWorkerW @ 0x140253BE0 (RtlStringVPrintfWorkerW.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     RtlStringCchPrintfW @ 0x14026D570 (RtlStringCchPrintfW.c)
 *     RtlUnicodeStringPrintf @ 0x14036F14C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringPrintfEx @ 0x14036F210 (RtlUnicodeStringPrintfEx.c)
 *     StringVPrintfWorkerW @ 0x1405C3BD8 (StringVPrintfWorkerW.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1403D1200 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
