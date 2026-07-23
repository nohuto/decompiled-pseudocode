/*
 * XREFs of PopPowerAggregatorNotifyPdcSleepTransition @ 0x1408EE7D8
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140576600 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140776550 (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1408FA5D8 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyPdcSleepTransition(char a1, int a2)
{
  int v4; // ecx
  unsigned int v5; // ebx

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C21828 == 1 )
  {
    v5 = 0;
    if ( a1 )
    {
      BYTE8(xmmword_140C21838) = 0;
      HIDWORD(xmmword_140C21838) = 0;
      goto LABEL_13;
    }
    BYTE8(xmmword_140C21838) = 1;
    v5 = 259;
    HIDWORD(xmmword_140C21838) = a2;
  }
  else
  {
    if ( (_DWORD)xmmword_140C21828 != 4 )
    {
      v5 = -1073741811;
      goto LABEL_13;
    }
    if ( a1 )
    {
      BYTE8(xmmword_140C21838) = 1;
      HIDWORD(xmmword_140C21838) = a2;
    }
    else
    {
      BYTE8(xmmword_140C21838) = 0;
      HIDWORD(xmmword_140C21838) = 0;
    }
    v5 = a1 != 0 ? 0x103 : 0;
  }
  if ( v5 == 259 )
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
LABEL_13:
  LOBYTE(v4) = a1;
  PopPowerAggregatorDiagTracePdcSleepTransition(
    v4,
    a2,
    (unsigned int)&xmmword_140C217F8,
    (unsigned int)&xmmword_140C21828,
    v5);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  return v5;
}
