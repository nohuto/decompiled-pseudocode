/*
 * XREFs of _vsnprintf @ 0x1403D2F50
 * Callers:
 *     RtlStringCbVPrintfA @ 0x14030355C (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x140380B58 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x140389204 (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1403D2F70 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
