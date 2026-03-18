/*
 * XREFs of _vsnprintf_s_l @ 0x14000C06C
 * Callers:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x14000BBA4 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x140002D94 (__local_stdio_printf_options.c)
 */

int __cdecl vsnprintf_s_l(
        char *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const char *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  unsigned __int64 *v10; // rax
  int result; // eax

  v10 = _local_stdio_printf_options();
  result = _o___stdio_common_vsnprintf_s(*v10, Buffer, BufferCount, MaxCount, Format, Locale, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
