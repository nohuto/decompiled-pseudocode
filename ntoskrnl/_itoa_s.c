/*
 * XREFs of _itoa_s @ 0x1403D8900
 * Callers:
 *     <none>
 * Callees:
 *     xtoa_s @ 0x1403D8AAC (xtoa_s.c)
 */

errno_t __cdecl itoa_s(int Val, char *DstBuf, size_t Size, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return xtoa_s(Val, (_DWORD)DstBuf, Size, Radix, v4);
}
