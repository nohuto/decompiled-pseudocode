/*
 * XREFs of MiPteBinsNeedTrimming @ 0x14033B3E4
 * Callers:
 *     MiReservePtes @ 0x140226570 (MiReservePtes.c)
 *     MiAdjustPteBins @ 0x14033B2E8 (MiAdjustPteBins.c)
 * Callees:
 *     MiGetNumberOfCachedPtes @ 0x14033B434 (MiGetNumberOfCachedPtes.c)
 */

_BOOL8 __fastcall MiPteBinsNeedTrimming(__int64 a1)
{
  unsigned int NumberOfCachedPtes; // eax
  _QWORD *v2; // r9
  unsigned __int64 v3; // rdx
  _BOOL8 result; // rax

  NumberOfCachedPtes = MiGetNumberOfCachedPtes(a1);
  result = 0;
  if ( NumberOfCachedPtes >= 0x400uLL )
  {
    v3 = NumberOfCachedPtes + v2[11];
    if ( v3 > 0x40000 && v3 > (*v2 - v2[9]) >> 2 )
      return 1;
  }
  return result;
}
