/*
 * XREFs of sprintf_s @ 0x1800E782C
 * Callers:
 *     ??$_Floating_to_string@M@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PEBDM@Z @ 0x180154828 (--$_Floating_to_string@M@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@0@PEB.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800E6A9C (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_s_0 @ 0x1800E7E06 (_o___stdio_common_vsprintf_s_0.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  unsigned __int64 *v6; // rax
  int result; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, Format);
  v6 = _local_stdio_printf_options();
  result = o___stdio_common_vsprintf_s_0(*v6, Buffer, BufferCount, Format, 0LL, (__int64 *)va);
  if ( result < 0 )
    return -1;
  return result;
}
