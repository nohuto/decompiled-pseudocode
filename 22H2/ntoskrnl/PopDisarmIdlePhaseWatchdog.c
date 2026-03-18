/*
 * XREFs of PopDisarmIdlePhaseWatchdog @ 0x1407AA5CC
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140599840 (PdcPoCurrentPdcPhase.c)
 *     PopProcessSessionDisplayStateChange @ 0x1407A9788 (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     ZwPowerInformation @ 0x14041B280 (ZwPowerInformation.c)
 *     memset @ 0x140435400 (memset.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void PopDisarmIdlePhaseWatchdog()
{
  _QWORD InputBuffer[13]; // [rsp+30h] [rbp-68h] BYREF

  if ( PopPdcIdlePhaseWatchdogContext )
  {
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = PopPdcIdlePhaseWatchdogContext;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
    PopAcquireRwLockExclusive((ULONG_PTR)&xmmword_140C39F68);
    dword_140C39F80 = 0;
    if ( qword_140C39F78 )
    {
      ExFreePoolWithTag(qword_140C39F78, 0x67696450u);
      qword_140C39F78 = 0LL;
    }
    PopReleaseRwLock((__int64 *)&xmmword_140C39F68);
  }
}
