/*
 * XREFs of _ui64tow_s @ 0x1403DE170
 * Callers:
 *     LocalGetStringForRelativeAttribute @ 0x1409D5CCC (LocalGetStringForRelativeAttribute.c)
 * Callees:
 *     x64tow_s @ 0x1403DE1AC (x64tow_s.c)
 */

errno_t __cdecl ui64tow_s(unsigned __int64 Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  return x64tow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, 0);
}
