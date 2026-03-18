/*
 * XREFs of PopPowerAggregatorNotifyPdcSleepTransition @ 0x140995D54
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1405D6AC0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorScheduleWorker @ 0x140809508 (PopPowerAggregatorScheduleWorker.c)
 *     PopPowerAggregatorDiagTracePdcSleepTransition @ 0x1409A0730 (PopPowerAggregatorDiagTracePdcSleepTransition.c)
 */

__int64 __fastcall PopPowerAggregatorNotifyPdcSleepTransition(char a1, int a2, int a3)
{
  int v6; // ecx
  unsigned int v7; // edi

  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C20BF8 == 1 )
  {
    v7 = 0;
    if ( a1 )
      goto LABEL_5;
    goto LABEL_7;
  }
  if ( (_DWORD)xmmword_140C20BF8 == 4 )
  {
    v7 = 0;
    if ( !a1 )
    {
LABEL_5:
      LOBYTE(xmmword_140C20C08) = 0;
      *(_QWORD *)((char *)&xmmword_140C20C08 + 4) = 0LL;
      goto LABEL_8;
    }
LABEL_7:
    LOBYTE(xmmword_140C20C08) = 1;
    DWORD1(xmmword_140C20C08) = a2;
    DWORD2(xmmword_140C20C08) = a3;
    PopPowerAggregatorScheduleWorker((__int64)&PopPowerAggregatorContext);
    v7 = 259;
    goto LABEL_8;
  }
  v7 = -1073741811;
LABEL_8:
  LOBYTE(v6) = a1;
  PopPowerAggregatorDiagTracePdcSleepTransition(
    v6,
    a2,
    (unsigned int)&xmmword_140C20BD0,
    (unsigned int)&xmmword_140C20BF8,
    v7);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
  return v7;
}
