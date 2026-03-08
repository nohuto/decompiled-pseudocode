/*
 * XREFs of _itow_s @ 0x1403D8C20
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x140388568 (RtlpFindRegTziForCurrentYear.c)
 * Callees:
 *     xtow_s @ 0x1403D8DDC (xtow_s.c)
 */

errno_t __cdecl itow_s(int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, v4);
}
