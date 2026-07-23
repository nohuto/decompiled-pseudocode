/*
 * XREFs of _vsnprintf @ 0x1403D1300
 * Callers:
 *     RtlStringCbVPrintfA @ 0x14037141C (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x1403AD768 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x1403B86DC (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1403D1320 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
