/*
 * XREFs of _vsnprintf @ 0x1403D1190
 * Callers:
 *     RtlStringCbVPrintfA @ 0x1403718CC (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x1403AD618 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x1403B856C (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1403D11B0 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
