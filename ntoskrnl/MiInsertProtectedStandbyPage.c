/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x1402DFCF4
 * Callers:
 *     MiDeletePteRun @ 0x140279760 (MiDeletePteRun.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     MiHardFaultPageRelease @ 0x140287C78 (MiHardFaultPageRelease.c)
 *     MiPfnShareCountIsZero @ 0x14032BF50 (MiPfnShareCountIsZero.c)
 * Callees:
 *     MiAddPageToInsertList @ 0x1402848D0 (MiAddPageToInsertList.c)
 *     MiIsPageEligibleForProtectedStandby @ 0x140287110 (MiIsPageEligibleForProtectedStandby.c)
 *     MiPfnReferenceCountIsZero @ 0x1402879C0 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPagesInList @ 0x140287DB0 (MiInsertPagesInList.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  _OWORD v4[7]; // [rsp+20h] [rbp-78h] BYREF

  memset(v4, 0, 0x68uLL);
  if ( MiIsPageEligibleForProtectedStandby(a1, a2) )
  {
    DWORD2(v4[0]) = 0;
    v4[1] = _mm_load_si128((const __m128i *)&_xmm);
    LODWORD(v4[6]) = 3;
    *((_QWORD *)&v4[5] + 1) = a1;
    MiAddPageToInsertList((__int64)v4, 0LL, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
    MiInsertPagesInList((__int64)v4, 0);
  }
  else
  {
    MiPfnReferenceCountIsZero(a2, 0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4));
  }
}
