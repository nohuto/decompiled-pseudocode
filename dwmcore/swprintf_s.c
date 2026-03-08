/*
 * XREFs of swprintf_s @ 0x18010F628
 * Callers:
 *     _anonymous_namespace_::SynthesizeDescription @ 0x18004274C (_anonymous_namespace_--SynthesizeDescription.c)
 *     ?DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingContext@@@Z @ 0x1801EEE74 (-DisplayNumber@CDisplayDebugFrameCounter@@IEAAJIU_D3DCOLORVALUE@@PEAUD2D_RECT_F@@PEAVCDrawingCon.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18010E384 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_s_0 @ 0x1801103CC (__stdio_common_vswprintf_s_0.c)
 */

int swprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, ...)
{
  unsigned __int64 *v6; // rax
  int result; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, Format);
  v6 = _local_stdio_printf_options();
  result = _stdio_common_vswprintf_s_0(*v6, Buffer, BufferCount, Format, 0LL, va);
  if ( result < 0 )
    return -1;
  return result;
}
