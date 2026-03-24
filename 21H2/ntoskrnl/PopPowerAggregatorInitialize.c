/*
 * XREFs of PopPowerAggregatorInitialize @ 0x140A40878
 * Callers:
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1402E927C (KiInitializeTimer2.c)
 *     memset @ 0x140414200 (memset.c)
 *     PopPowerAggregatorCachePoPolicy @ 0x14078E37C (PopPowerAggregatorCachePoPolicy.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
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
    qword_140C22AF8 = 0LL;
    PopPowerAggregatorLock = 0LL;
    memset(&PopPowerAggregatorContext, 0, 0x1368uLL);
    DWORD2(xmmword_140C21798) = 1;
    qword_140C22AD0 = (__int64)PopPowerAggregatorWorker;
    LODWORD(xmmword_140C217C8) = 0;
    stru_140C217F0.WorkerRoutine = (void (__fastcall *)(void *))PopPowerAggregatorSessionSwitchWorker;
    qword_140C22AD8 = 0LL;
    qword_140C22AC0 = 0LL;
    stru_140C217F0.Parameter = 0LL;
    stru_140C217F0.List.Flink = 0LL;
    word_140C21812 = 0;
    KiInitializeTimer2((__int64)&unk_140C21810, (__int64)PopPowerAggregatorSessionSwitchTimerCallback, 0LL, 8);
    result = &qword_140C218A0;
    word_140C21898 = 0;
    qword_140C218A8 = (__int64)&qword_140C218A0;
    qword_140C218A0 = (__int64)&qword_140C218A0;
    byte_140C2189A = 6;
    dword_140C2189C = 0;
  }
  return result;
}
