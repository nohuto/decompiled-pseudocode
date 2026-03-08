/*
 * XREFs of MiPteBinsNeedTrimming @ 0x14029A168
 * Callers:
 *     MiAdjustPteBins @ 0x140299A90 (MiAdjustPteBins.c)
 *     MiReservePtes @ 0x1403274D0 (MiReservePtes.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x14029A1BC (MiGetNumberOfCachedPtes.c)
 */

_BOOL8 __fastcall MiPteBinsNeedTrimming(_QWORD *a1)
{
  unsigned int NumberOfCachedPtes; // eax
  _BOOL8 result; // rax
  unsigned __int64 v4; // rdx

  NumberOfCachedPtes = MiGetNumberOfCachedPtes(a1);
  result = 0;
  if ( NumberOfCachedPtes >= 0x400uLL )
  {
    v4 = NumberOfCachedPtes + a1[10];
    if ( v4 > 0x40000 && v4 > (*a1 - a1[8]) >> 2 )
      return 1;
  }
  return result;
}
