ULONG_PTR (*HalpBlkWdInitialize())()
{
  ULONG_PTR (*result)(); // rax

  word_140C5FA42 = 0;
  KiInitializeTimer2((unsigned __int64)&HalpBlkWdTimer, (__int64)HalpBlkWdTimerRoutine, 0LL, 8);
  HalpBlkWdWorkItem.Parameter = 0LL;
  result = HalpBlkWdWorkerRoutine;
  HalpBlkWdWorkItem.List.Flink = 0LL;
  HalpBlkWdWorkItem.WorkerRoutine = (void (__fastcall *)(void *))HalpBlkWdWorkerRoutine;
  return result;
}
