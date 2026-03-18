/*
 * XREFs of InvalidateDCE @ 0x1C0026C64
 * Callers:
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x1C0049764 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     xxxFreeWindow @ 0x1C005E458 (xxxFreeWindow.c)
 *     RevalidateDCE @ 0x1C00DC650 (RevalidateDCE.c)
 * Callees:
 *     GreSelectRedirectionBitmap @ 0x1C0027F30 (GreSelectRedirectionBitmap.c)
 */

__int64 __fastcall InvalidateDCE(__int64 a1)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 64) & 0x4002 | 0x800;
  *(_DWORD *)(a1 + 64) = v2;
  if ( (v2 & 0x4000) != 0 )
  {
    GreSelectRedirectionBitmap(*(_QWORD *)(a1 + 8), 0LL);
    *(_DWORD *)(a1 + 64) &= ~0x4000u;
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  return GreSelectVisRgn(*(_QWORD *)(a1 + 8), 0LL, 1LL);
}
