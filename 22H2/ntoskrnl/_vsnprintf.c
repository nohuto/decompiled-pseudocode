/*
 * XREFs of _vsnprintf @ 0x1403D0A90
 * Callers:
 *     RtlStringCbVPrintfA @ 0x1403720AC (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x1403A8438 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x1403B7F0C (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1403D0AB0 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
