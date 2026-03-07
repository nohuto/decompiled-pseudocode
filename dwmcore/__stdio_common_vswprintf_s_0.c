// attributes: thunk
int __cdecl _stdio_common_vswprintf_s_0(
        unsigned __int64 Options,
        wchar_t *Buffer,
        size_t BufferCount,
        const wchar_t *Format,
        _locale_t Locale,
        va_list ArgList)
{
  return __stdio_common_vswprintf_s(Options, Buffer, BufferCount, Format, Locale, ArgList);
}
