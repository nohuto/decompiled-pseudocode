/*
 * XREFs of _vsnwprintf_l @ 0x1804D75BC
 * Callers:
 *     ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x18035A824 (-LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ.c)
 *     ?StringCchPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x18035BE60 (-StringCchPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     StringVPrintfWorkerW @ 0x1804CEDEC (StringVPrintfWorkerW.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18003B514 (__local_stdio_printf_options.c)
 */

int __cdecl vsnwprintf_l(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const wchar_t *const Format,
        const _locale_t Locale,
        va_list ArgList)
{
  unsigned __int64 v9; // rcx
  int result; // eax

  v9 = *_local_stdio_printf_options();
  result = __stdio_common_vswprintf(v9 | 1, Buffer, BufferCount, Format, Locale, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
