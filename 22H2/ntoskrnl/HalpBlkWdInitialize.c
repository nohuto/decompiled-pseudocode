/*
 * XREFs of HalpBlkWdInitialize @ 0x140A8E3E8
 * Callers:
 *     HalpBlkInitSystem @ 0x140A44A4C (HalpBlkInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x14035A7DC (KiInitializeTimer2.c)
 */

char HalpBlkWdInitialize()
{
  char result; // al

  word_140C48B42 = 0;
  result = KiInitializeTimer2((__int64)&HalpBlkWdTimer, (__int64)HalpBlkWdTimerRoutine, 0LL, 8);
  HalpBlkWdWorkItem.Parameter = 0LL;
  HalpBlkWdWorkItem.List.Flink = 0LL;
  HalpBlkWdWorkItem.WorkerRoutine = (void (__fastcall *)(void *))HalpBlkWdWorkerRoutine;
  return result;
}
