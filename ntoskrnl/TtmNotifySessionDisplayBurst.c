/*
 * XREFs of TtmNotifySessionDisplayBurst @ 0x1409A1344
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x140380CA0 (PopPowerSourceChangeCallback.c)
 *     NtPowerInformation @ 0x14068AB90 (NtPowerInformation.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     TtmpAcquireSessionById @ 0x1409A1F50 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 *     TtmiResetTerminalTimeouts @ 0x1409A8238 (TtmiResetTerminalTimeouts.c)
 */

__int64 __fastcall TtmNotifySessionDisplayBurst(unsigned int a1, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // r9d
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = TtmpAcquireSessionById(&v7, a1);
  v4 = v3;
  if ( v3 >= 0 )
  {
    if ( a2 == 5 )
    {
      v5 = 1111769921;
    }
    else
    {
      v5 = 1111778643;
      if ( a2 == 16 )
        v5 = 1111769922;
    }
    TtmiResetTerminalTimeouts(v7, *(_QWORD *)(v7 + 32), a2, v5, 1);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
    return 0;
  }
  else
  {
    TtmiLogError("TtmNotifySessionDisplayBurst", 3280LL, (unsigned int)v3, (unsigned int)v3);
  }
  return v4;
}
