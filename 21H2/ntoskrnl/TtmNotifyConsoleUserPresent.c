/*
 * XREFs of TtmNotifyConsoleUserPresent @ 0x1408FEA44
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x1407732C0 (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     TtmiResetTerminalTimeouts @ 0x1408FDA48 (TtmiResetTerminalTimeouts.c)
 *     TtmpAcquireSessionById @ 0x1408FF750 (TtmpAcquireSessionById.c)
 *     TtmiLogConsoleUserPresent @ 0x140901B00 (TtmiLogConsoleUserPresent.c)
 *     TtmiLogError @ 0x140902C24 (TtmiLogError.c)
 */

__int64 __fastcall TtmNotifyConsoleUserPresent(unsigned int a1, unsigned int a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v4 = TtmpAcquireSessionById(&v7, a1);
  v5 = v4;
  if ( v4 >= 0 )
  {
    TtmiResetTerminalTimeouts(v7, *(_QWORD *)(v7 + 32), a2, 1347765070, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyConsoleUserPresent", 3340LL, (unsigned int)v4, 0xFFFFFFFFLL);
  }
  return TtmiLogConsoleUserPresent(a1, a2, v5);
}
