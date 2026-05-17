/*
 * XREFs of _vsnprintf @ 0x18008E170
 * Callers:
 *     vDbgPrintExWithPrefixInternal @ 0x180051B08 (vDbgPrintExWithPrefixInternal.c)
 *     RtlStringCbPrintfA @ 0x18007C17C (RtlStringCbPrintfA.c)
 *     StringCbPrintfA @ 0x1800CDDE0 (StringCbPrintfA.c)
 * Callees:
 *     _vsnprintf_l @ 0x18008E18C (_vsnprintf_l.c)
 */

int __cdecl vsnprintf(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  return vsnprintf_l(Buffer, BufferCount, Format, 0LL, ArgList);
}
