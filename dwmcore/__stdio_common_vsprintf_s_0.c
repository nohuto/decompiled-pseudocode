/*
 * XREFs of __stdio_common_vsprintf_s_0 @ 0x1801103E4
 * Callers:
 *     vsprintf_s @ 0x18010F6E8 (vsprintf_s.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl _stdio_common_vsprintf_s_0(
        unsigned __int64 Options,
        char *Buffer,
        size_t BufferCount,
        const char *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return __stdio_common_vsprintf_s(Options, Buffer, BufferCount, Format, Locale, ArgList);
}
