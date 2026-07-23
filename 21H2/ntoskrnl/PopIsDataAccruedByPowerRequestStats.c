/*
 * XREFs of PopIsDataAccruedByPowerRequestStats @ 0x140670AA8
 * Callers:
 *     PopStatsDeletePowerRequest @ 0x14066FAA8 (PopStatsDeletePowerRequest.c)
 * Callees:
 *     PoQueryStopWatch @ 0x1402724D0 (PoQueryStopWatch.c)
 *     PopGetStopWatchByRequestType @ 0x140670B10 (PopGetStopWatchByRequestType.c)
 */

char __fastcall PopIsDataAccruedByPowerRequestStats(__int64 a1)
{
  char v1; // bl
  unsigned int v3; // edi
  _QWORD *StopWatchByRequestType; // rax
  bool *v5; // r8
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v7 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    StopWatchByRequestType = (_QWORD *)PopGetStopWatchByRequestType(a1, v3, 0LL);
    if ( StopWatchByRequestType )
    {
      PoQueryStopWatch(StopWatchByRequestType, &v7, v5);
      if ( v7 )
        break;
    }
    if ( ++v3 >= 4 )
      return v1;
  }
  return 1;
}
