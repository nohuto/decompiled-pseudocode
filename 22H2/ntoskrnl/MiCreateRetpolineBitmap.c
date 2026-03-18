/*
 * XREFs of MiCreateRetpolineBitmap @ 0x140B9A900
 * Callers:
 *     MiInitializeRetpoline @ 0x140B48688 (MiInitializeRetpoline.c)
 * Callees:
 *     MiReservePtes @ 0x14027D070 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1402CB8E0 (MiReleasePtes.c)
 *     MiInitializeDynamicBitmap @ 0x14081ED24 (MiInitializeDynamicBitmap.c)
 */

__int64 __fastcall MiCreateRetpolineBitmap(__int64 *a1)
{
  ULONG_PTR v2; // rdi

  v2 = MiReservePtes((__int64)&qword_140C69A40, 0x10000u);
  if ( !v2 )
    return 3221225495LL;
  if ( !(unsigned int)MiInitializeDynamicBitmap(&qword_140C65950, (__int64)(v2 << 25) >> 16, 0x80000000LL, 7) )
  {
    MiReleasePtes((__int64)&qword_140C69A40, (__int64 *)v2, 0x10000u);
    return 3221225495LL;
  }
  *a1 = (__int64)(v2 << 25) >> 16;
  return 0LL;
}
