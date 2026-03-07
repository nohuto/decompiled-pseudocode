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
