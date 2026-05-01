/*
 * XREFs of _o___stdio_common_vswprintf_0 @ 0x180090842
 * Callers:
 *     vswprintf @ 0x180090990 (vswprintf.c)
 *     _vscwprintf @ 0x180090A58 (_vscwprintf.c)
 *     _scwprintf @ 0x180090B00 (_scwprintf.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl o___stdio_common_vswprintf_0(
        unsigned __int64 Options,
        wchar_t *Buffer,
        size_t BufferCount,
        const wchar_t *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return __stdio_common_vswprintf(Options, Buffer, BufferCount, Format, Locale, ArgList);
}
