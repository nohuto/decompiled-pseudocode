/*
 * XREFs of _vsnprintf @ 0x1C00D5E90
 * Callers:
 *     ?RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C0096F54 (-RtlStringCbPrintfA@@YAJPEAD_KPEBDZZ.c)
 *     ?RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ @ 0x1C01B7104 (-RtlStringCchPrintfA@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     _vsnprintf_l @ 0x1C00D5EB0 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
