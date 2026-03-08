/*
 * XREFs of __stdio_common_vswprintf_0 @ 0x1801103C0
 * Callers:
 *     _vsnwprintf @ 0x18010F5C0 (_vsnwprintf.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl _stdio_common_vswprintf_0(
        unsigned __int64 Options,
        wchar_t *Buffer,
        size_t BufferCount,
        const wchar_t *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return __stdio_common_vswprintf(Options, Buffer, BufferCount, Format, Locale, ArgList);
}
