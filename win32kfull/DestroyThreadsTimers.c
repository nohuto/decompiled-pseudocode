/*
 * XREFs of DestroyThreadsTimers @ 0x1C00C6480
 * Callers:
 *     <none>
 * Callees:
 *     FreeTimer @ 0x1C003A800 (FreeTimer.c)
 */

__int64 __fastcall DestroyThreadsTimers(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[5]; // [rsp+20h] [rbp-28h] BYREF

  v4[2] = 0LL;
  v4[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v4;
  v4[1] = 0LL;
  return ThreadUnlockWorker1(0LL, gptiCurrent, a3);
}
