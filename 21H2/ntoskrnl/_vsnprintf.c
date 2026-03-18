/*
 * XREFs of _vsnprintf @ 0x1403E0560
 * Callers:
 *     RtlStringCbVPrintfA @ 0x140368DAC (RtlStringCbVPrintfA.c)
 *     RtlStringVPrintfWorkerA @ 0x1403BF834 (RtlStringVPrintfWorkerA.c)
 *     RtlStringCchPrintfA @ 0x1403C5514 (RtlStringCchPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x1403E0580 (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *Dest, size_t Count, const char *Format, va_list Args)
{
  return vsnprintf_l(Dest, Count, Format, 0LL, Args);
}
