/*
 * XREFs of _i64toa_s @ 0x1403D88D0
 * Callers:
 *     <none>
 * Callees:
 *     x64toa_s @ 0x1403D896C (x64toa_s.c)
 */

errno_t __cdecl i64toa_s(__int64 Val, char *DstBuf, size_t Size, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return x64toa_s(Val, (_DWORD)DstBuf, Size, Radix, v4);
}
