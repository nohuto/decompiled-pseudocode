/*
 * XREFs of PopPowerAggregatorNotifyPdcSleepTransition @ 0x140993CB8
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140599840 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140875FC0 (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1409A1014 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyPdcSleepTransition(char a1, int a2, int a3)
{
  int v6; // ecx
  unsigned int v7; // edi

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C3AAD8 == 1 )
  {
    v7 = 0;
    if ( a1 )
      goto LABEL_5;
    goto LABEL_7;
  }
  if ( (_DWORD)xmmword_140C3AAD8 == 4 )
  {
    v7 = 0;
    if ( !a1 )
    {
LABEL_5:
      LOBYTE(xmmword_140C3AAE8) = 0;
      *(_QWORD *)((char *)&xmmword_140C3AAE8 + 4) = 0LL;
      goto LABEL_8;
    }
LABEL_7:
    DWORD2(xmmword_140C3AAE8) = a3;
    v7 = 259;
    DWORD1(xmmword_140C3AAE8) = a2;
    LOBYTE(xmmword_140C3AAE8) = 1;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
    goto LABEL_8;
  }
  v7 = -1073741811;
LABEL_8:
  LOBYTE(v6) = a1;
  PopPowerAggregatorDiagTracePdcSleepTransition(
    v6,
    a2,
    (unsigned int)&xmmword_140C3AAB0,
    (unsigned int)&xmmword_140C3AAD8,
    v7);
  PopReleaseRwLock(&PopPowerAggregatorLock);
  return v7;
}
