/*
 * XREFs of MiSlabUpdateRecentFailure @ 0x140361224
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x140360D18 (MiFreeUnusedSlabPages.c)
 *     MiFreeSlabEntries @ 0x140361050 (MiFreeSlabEntries.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 */

void __fastcall MiSlabUpdateRecentFailure(_QWORD *a1)
{
  __int64 UnbiasedInterruptTime; // rax
  _QWORD *v2; // r11

  if ( *a1 )
  {
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( !UnbiasedInterruptTime )
      UnbiasedInterruptTime = 1LL;
    if ( (unsigned __int64)(UnbiasedInterruptTime - *v2) >= 0x23C34600 )
      *v2 = 0LL;
  }
}
