/*
 * XREFs of KiTryScheduleNextForegroundBoost @ 0x1402AE63C
 * Callers:
 *     KiQuantumEnd @ 0x140254F30 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x140257C00 (KiQueueReadyThread.c)
 *     KiDeferredReadySingleThread @ 0x140259FB0 (KiDeferredReadySingleThread.c)
 * Callees:
 *     KiScheduleNextForegroundBoost @ 0x1403CE5BC (KiScheduleNextForegroundBoost.c)
 */

char __fastcall KiTryScheduleNextForegroundBoost(__int64 a1)
{
  int v1; // eax
  char v2; // dl

  if ( (KiVelocityFlags & 0x8000) == 0 )
  {
    LOBYTE(v1) = *(_BYTE *)(*(_QWORD *)(a1 + 544) + 1850LL);
    if ( (_BYTE)v1 == 2 )
    {
      v2 = *(_BYTE *)(a1 + 195);
      if ( v2 < 16 )
      {
        v1 = *(_DWORD *)(a1 + 120);
        if ( (v1 & 8) == 0 && v2 > 0 )
          LOBYTE(v1) = KiScheduleNextForegroundBoost(a1);
      }
    }
  }
  return v1;
}
