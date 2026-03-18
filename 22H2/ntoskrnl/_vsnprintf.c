/*
 * XREFs of _vsnprintf @ 0x1403D8470
 * Callers:
 *     RtlStringCbVPrintfA @ 0x14020A6D8 (RtlStringCbVPrintfA.c)
 *     RtlStringCchPrintfA @ 0x14037507C (RtlStringCchPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x1403837A8 (RtlStringVPrintfWorkerA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1403D8490 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
