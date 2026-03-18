/*
 * XREFs of TtmNotifyConsoleUserPresent @ 0x1409A42C4
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x1407D3CC4 (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x1409A4FE0 (TtmpAcquireSessionById.c)
 *     TtmiLogConsoleUserPresent @ 0x1409A72D0 (TtmiLogConsoleUserPresent.c)
 *     TtmiLogError @ 0x1409A83F4 (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x1409AB2BC (TtmiResetTerminalTimeouts.c)
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
    TtmiLogError("TtmNotifyConsoleUserPresent", 3336LL, (unsigned int)v4, 0xFFFFFFFFLL);
  }
  return TtmiLogConsoleUserPresent(a1, a2, v5);
}
