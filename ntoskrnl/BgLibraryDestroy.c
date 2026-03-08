/*
 * XREFs of BgLibraryDestroy @ 0x140AEE2D8
 * Callers:
 *     BgkDestroy @ 0x140AEBA68 (BgkDestroy.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     BgpFwLibraryDestroy @ 0x140AEBA88 (BgpFwLibraryDestroy.c)
 */

__int64 BgLibraryDestroy()
{
  __int16 v1; // bx
  unsigned int v2; // edi

  if ( KeGetCurrentIrql() > 2u )
    return 3221225473LL;
  BgpFwAcquireLock();
  v1 = dword_140C0E3B0;
  v2 = 0;
  if ( (dword_140C0E3B0 & 1) == 0
    || (qword_140C0E510 = 0LL, xmmword_140C0E520 = 0LL, v2 = BgpFwLibraryDestroy(), (v1 & 0xC00) != 0xC00) )
  {
    BgpFwReleaseLock();
  }
  return v2;
}
