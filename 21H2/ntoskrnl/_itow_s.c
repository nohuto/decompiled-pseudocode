/*
 * XREFs of _itow_s @ 0x1403D6E20
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x1403B8034 (RtlpFindRegTziForCurrentYear.c)
 * Callees:
 *     xtow_s @ 0x1403D6FD0 (xtow_s.c)
 */

errno_t __cdecl itow_s(int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, v4);
}
