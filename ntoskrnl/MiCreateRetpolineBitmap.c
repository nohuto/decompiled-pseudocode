/*
 * XREFs of MiCreateRetpolineBitmap @ 0x140B966F0
 * Callers:
 *     MiInitializeRetpoline @ 0x140B39F78 (MiInitializeRetpoline.c)
 * Callees:
 *     MiReleasePtes @ 0x14027CE90 (MiReleasePtes.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 *     MiInitializeDynamicBitmap @ 0x14080A0E4 (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiCreateRetpolineBitmap(__int64 *a1)
{
  ULONG_PTR v2; // rdi

  v2 = MiReservePtes((__int64)&qword_140C695C0, 0x10000u);
  if ( !v2 )
    return 3221225495LL;
  if ( !(unsigned int)MiInitializeDynamicBitmap(&qword_140C654D0, (__int64)(v2 << 25) >> 16, 0x80000000LL, 7) )
  {
    MiReleasePtes((__int64)&qword_140C695C0, (__int64 *)v2, 0x10000u);
    return 3221225495LL;
  }
  *a1 = (__int64)(v2 << 25) >> 16;
  return 0LL;
}
