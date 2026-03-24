/*
 * XREFs of _vsnprintf @ 0x1C00C5478
 * Callers:
 *     ?RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C00699C4 (-RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C01808C8 (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     _vsnprintf_l @ 0x1C00C5498 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
