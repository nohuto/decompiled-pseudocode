/*
 * XREFs of _snwprintf_s @ 0x1403DE6C0
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x140715170 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     _vsnwprintf_s @ 0x1403DE6F0 (_vsnwprintf_s.c)
 */

int snwprintf_s(wchar_t *DstBuf, size_t SizeInWords, size_t MaxCount, const wchar_t *Format, ...)
{
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, Format);
  return vsnwprintf_s(DstBuf, SizeInWords, MaxCount, Format, va);
}
