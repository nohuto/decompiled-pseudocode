/*
 * XREFs of _vsnwprintf @ 0x1C00DAA34
 * Callers:
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C0004B28 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0022784 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     StringCchPrintfW @ 0x1C008D258 (StringCchPrintfW.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00C0710 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00CD374 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 * Callees:
 *     _vsnwprintf_l @ 0x1C00DAA54 (_vsnwprintf_l.c)
 */

int __cdecl vsnwprintf(wchar_t *Dest, size_t Count, const wchar_t *Format, va_list Args)
{
  return vsnwprintf_l(Dest, Count, Format, 0LL, Args);
}
