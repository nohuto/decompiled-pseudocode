/*
 * XREFs of MiFreeUnusedSlabPages @ 0x140360D18
 * Callers:
 *     MiWorkingSetManager @ 0x1403616C0 (MiWorkingSetManager.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     MiCheckMdlSlabFragmentation @ 0x140360E50 (MiCheckMdlSlabFragmentation.c)
 *     MiEnumerateSlabAllocators @ 0x140360F88 (MiEnumerateSlabAllocators.c)
 *     MiSlabUpdateRecentFailure @ 0x140361224 (MiSlabUpdateRecentFailure.c)
 *     KeGenericCallDpcEx @ 0x1403C07D0 (KeGenericCallDpcEx.c)
 *     MiLogSlabEntriesDemote @ 0x1403D0FE0 (MiLogSlabEntriesDemote.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall MiFreeUnusedSlabPages(__int64 a1)
{
  unsigned int i; // ebx
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 UnbiasedInterruptTime; // rax
  _QWORD v7[12]; // [rsp+20h] [rbp-88h] BYREF

  memset(v7, 0, 0x58uLL);
  MiEnumerateSlabAllocators(a1, MiFreeSlabEntries, 0LL, 0xFFFFFFFFLL);
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v3 = 25408LL * i;
    v4 = v3 + *(_QWORD *)(a1 + 16) + 24976LL;
    if ( (unsigned int)MiCheckMdlSlabFragmentation(v4, 0LL) )
    {
      memset(v7, 0, 0x58uLL);
      v7[10] = -1LL;
      v7[0] = a1;
      v7[9] = v4;
      KeGenericCallDpcEx(MiDemoteSlabEntriesDpc, v7);
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      if ( !UnbiasedInterruptTime )
        UnbiasedInterruptTime = 1LL;
      *(_QWORD *)(v3 + *(_QWORD *)(a1 + 16) + 25248) = UnbiasedInterruptTime;
      MiLogSlabEntriesDemote(v7);
    }
  }
  return MiSlabUpdateRecentFailure(a1 + 16264);
}
