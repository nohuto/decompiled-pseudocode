/*
 * XREFs of MiSlabAllocatorRecentFailure @ 0x1403923C4
 * Callers:
 *     MiGetSlabPage @ 0x14035959C (MiGetSlabPage.c)
 *     MiAllocateSlabEntry @ 0x140392168 (MiAllocateSlabEntry.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x140253F54 (KiQueryUnbiasedInterruptTime.c)
 */

__int64 __fastcall MiSlabAllocatorRecentFailure(__int64 a1)
{
  __int64 UnbiasedInterruptTime; // rax
  __int64 v3; // r11

  if ( !*(_QWORD *)(a1 + 112) )
    return 0LL;
  UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
  if ( (unsigned __int64)(UnbiasedInterruptTime - *(_QWORD *)(v3 + 112)) >= 0x11E1A300 )
  {
    *(_QWORD *)(v3 + 112) = 0LL;
    return 0LL;
  }
  return 1LL;
}
