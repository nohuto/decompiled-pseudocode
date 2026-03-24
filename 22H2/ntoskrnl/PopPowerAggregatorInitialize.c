/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140A3FCA8
 * Callers:
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14035A7DC (KiInitializeTimer2.c)
 *     memset @ 0x140413800 (memset.c)
 *     PopPowerAggregatorCachePoPolicy @ 0x14078E27C (PopPowerAggregatorCachePoPolicy.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

__int64 *__fastcall PopPowerAggregatorInitialize(int a1)
{
  __int64 *result; // rax

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      PopAcquirePolicyLock();
      PopPowerAggregatorCachePoPolicy();
      return (__int64 *)PopReleasePolicyLock();
    }
  }
  else
  {
    qword_140C22B58 = 0LL;
    PopPowerAggregatorLock = 0LL;
    memset(&PopPowerAggregatorContext, 0, 0x1368uLL);
    DWORD2(xmmword_140C217F8) = 1;
    qword_140C22B30 = (__int64)PopPowerAggregatorWorker;
    LODWORD(xmmword_140C21828) = 0;
    stru_140C21850.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorSessionSwitchWorker;
    qword_140C22B38 = 0LL;
    qword_140C22B20 = 0LL;
    stru_140C21850.Parameter = 0LL;
    stru_140C21850.List.Flink = 0LL;
    word_140C21872 = 0;
    KiInitializeTimer2((__int64)&unk_140C21870, (__int64)PopPowerAggregatorSessionSwitchTimerCallback, 0LL, 8);
    result = &qword_140C21900;
    word_140C218F8 = 0;
    qword_140C21908 = (__int64)&qword_140C21900;
    qword_140C21900 = (__int64)&qword_140C21900;
    byte_140C218FA = 6;
    dword_140C218FC = 0;
  }
  return result;
}
