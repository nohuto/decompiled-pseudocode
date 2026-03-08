/*
 * XREFs of TtmpAcquireSessionById @ 0x1409A1F50
 * Callers:
 *     TtmNotifyConsoleUserPresent @ 0x1409A1234 (TtmNotifyConsoleUserPresent.c)
 *     TtmNotifyLowPowerStateExited @ 0x1409A12C8 (TtmNotifyLowPowerStateExited.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409A1344 (TtmNotifySessionDisplayBurst.c)
 *     TtmNotifySessionDisplayRequiredChange @ 0x1409A13E0 (TtmNotifySessionDisplayRequiredChange.c)
 *     TtmNotifySessionPowerRequestDeleted @ 0x1409A1578 (TtmNotifySessionPowerRequestDeleted.c)
 *     TtmNotifySessionPowerStateChange @ 0x1409A1778 (TtmNotifySessionPowerStateChange.c)
 *     TtmNotifySessionTerminalInput @ 0x1409A1808 (TtmNotifySessionTerminalInput.c)
 *     TtmSessionMonitorControl @ 0x1409A18A0 (TtmSessionMonitorControl.c)
 *     TtmiAcquireCurrentSession @ 0x1409A1950 (TtmiAcquireCurrentSession.c)
 *     TtmpInsertPowerRequestToSession @ 0x1409A2488 (TtmpInsertPowerRequestToSession.c)
 *     TtmpUpdatePowerRequestAttribute @ 0x1409A2E3C (TtmpUpdatePowerRequestAttribute.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     TtmIsEnabled @ 0x14073C8BC (TtmIsEnabled.c)
 *     TtmiLogError @ 0x1409A536C (TtmiLogError.c)
 */

__int64 __fastcall TtmpAcquireSessionById(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  int v3; // ebp
  struct _KTHREAD *CurrentThread; // rax

  v2 = 0;
  v3 = a2;
  *a1 = 0LL;
  if ( TtmIsEnabled((__int64)a1, a2) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    if ( TtmpSession && *(_DWORD *)TtmpSession == v3 )
    {
      *a1 = TtmpSession;
    }
    else
    {
      v2 = -1073740715;
      TtmiLogError("TtmpAcquireSessionById", 1697LL, 0xFFFFFFFFLL, 3221226581LL);
      ExReleaseResourceLite(&TtmpSessionLock);
      KeLeaveCriticalRegion();
    }
  }
  else
  {
    v2 = -1073741637;
    TtmiLogError("TtmpAcquireSessionById", 1686LL, 0xFFFFFFFFLL, 3221225659LL);
  }
  return v2;
}
