/*
 * XREFs of TtmpEnterProximity @ 0x1409A8858
 * Callers:
 *     TtmiTerminalMonitorControl @ 0x1409A8578 (TtmiTerminalMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x1409A1AC4 (TtmiScheduleSessionWorker.c)
 *     TtmiLogEnterProximity @ 0x1409A529C (TtmiLogEnterProximity.c)
 */

void __fastcall TtmpEnterProximity(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v5; // ecx

  v2 = *(_DWORD *)(a2 + 36);
  if ( (v2 & 8) == 0 )
  {
    v5 = ++*(_DWORD *)(a2 + 268);
    *(_QWORD *)(a2 + 256) = -1LL;
    *(_DWORD *)(a2 + 36) = v2 | 8;
    TtmiLogEnterProximity(v5);
    *(_DWORD *)(a2 + 36) |= 4u;
    TtmiScheduleSessionWorker(a1, 2);
  }
}
