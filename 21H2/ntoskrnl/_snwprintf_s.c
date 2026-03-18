/*
 * XREFs of _snwprintf_s @ 0x1403E6640
 * Callers:
 *     RtlQueryAtomInAtomTable @ 0x1407A0A30 (RtlQueryAtomInAtomTable.c)
 * Callees:
 *     _vsnwprintf_s @ 0x1403E6670 (_vsnwprintf_s.c)
 */

int snwprintf_s(wchar_t *DstBuf, size_t SizeInWords, size_t MaxCount, const wchar_t *Format, ...)
{
  va_list va; // [rsp+70h] [rbp+28h] BYREF

  va_start(va, Format);
  return vsnwprintf_s(DstBuf, SizeInWords, MaxCount, Format, va);
}
