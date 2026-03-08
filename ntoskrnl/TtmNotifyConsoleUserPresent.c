/*
 * XREFs of TtmNotifyConsoleUserPresent @ 0x1409A1234
 * Callers:
 *     PopNotifyConsoleUserPresent @ 0x14073A3BC (PopNotifyConsoleUserPresent.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     TtmpAcquireSessionById @ 0x1409A1F50 (TtmpAcquireSessionById.c)
 *     TtmiLogConsoleUserPresent @ 0x1409A4248 (TtmiLogConsoleUserPresent.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x1409A8238 (TtmiResetTerminalTimeouts.c)
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
