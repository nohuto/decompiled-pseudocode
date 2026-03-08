/*
 * XREFs of MiChangePageHeatImmediate @ 0x1406517FC
 * Callers:
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 *     MiCoalesceFreePages @ 0x140278FE0 (MiCoalesceFreePages.c)
 *     MiCoalesceFreeLargePages @ 0x1402C89C0 (MiCoalesceFreeLargePages.c)
 *     MiFreeLargePageMemory @ 0x1403505C0 (MiFreeLargePageMemory.c)
 *     MiLargeFreePageToMdl @ 0x1403D1BC4 (MiLargeFreePageToMdl.c)
 *     MiZeroPageMakeHot @ 0x140653630 (MiZeroPageMakeHot.c)
 * Callees:
 *     MiColdPageSizeSupported @ 0x1402DD100 (MiColdPageSizeSupported.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     MiAddPageToHeatRanges @ 0x140651704 (MiAddPageToHeatRanges.c)
 *     MiNotifyPageHeat @ 0x140652018 (MiNotifyPageHeat.c)
 */

__int64 __fastcall MiChangePageHeatImmediate(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax
  bool v7; // zf
  _DWORD v8[36]; // [rsp+20h] [rbp-A8h] BYREF

  result = (__int64)memset(&v8[3], 0, 0x80uLL);
  if ( a3 )
  {
    v7 = (HvlEnlightenments & 0x200000) == 0;
  }
  else
  {
    result = MiColdPageSizeSupported(a2);
    v7 = (_DWORD)result == 0;
  }
  if ( !v7 )
  {
    v8[1] = 0;
    v8[0] = a3;
    v8[2] = 1;
    result = MiAddPageToHeatRanges((__int64)v8, a1, a2);
    if ( (_DWORD)result )
      return MiNotifyPageHeat(v8);
  }
  return result;
}
