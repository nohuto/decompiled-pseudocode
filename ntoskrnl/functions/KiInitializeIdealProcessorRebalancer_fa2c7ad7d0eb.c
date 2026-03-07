__int64 KiInitializeIdealProcessorRebalancer()
{
  __int64 result; // rax
  _QWORD v1[3]; // [rsp+20h] [rbp-18h] BYREF

  memset(&KiIdealProcessorRebalancerContext, 0, 0xB8uLL);
  KiInitializeTimer2(
    (unsigned __int64)&KiIdealProcessorRebalancerContext,
    (__int64)KiIdealProcessorRebalancerTimerCallback,
    0LL,
    8);
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))KiIdealProcessorRebalancerWorker;
  result = (unsigned int)KiCacheAwareScheduling;
  WorkItem.Parameter = 0LL;
  WorkItem.List.Flink = 0LL;
  qword_140C414E8 = 0LL;
  if ( (KiCacheAwareScheduling & 8) != 0 )
  {
    v1[1] = -1LL;
    v1[0] = 0LL;
    return KeSetTimer2((__int64)&KiIdealProcessorRebalancerContext, -10000000LL, 10000000LL, (__int64)v1);
  }
  return result;
}
