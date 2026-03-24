/*
 * XREFs of PopBatteryInit @ 0x140A702C8
 * Callers:
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  dword_140C23DAC = -1;
  qword_140C23C48 = (__int64)&qword_140C23C40;
  qword_140C23C40 = (__int64)&qword_140C23C40;
  qword_140C23C58 = (__int64)&qword_140C23C50;
  v0 = 4LL;
  qword_140C23C50 = (__int64)&qword_140C23C50;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_140C23D48;
  *(_OWORD *)&xmmword_140C23DF0 = 0LL;
  qword_140C23C28 = 0LL;
  xmmword_140C23DC8 = 0LL;
  *(_QWORD *)&PopCB = 0LL;
  xmmword_140C23E00 = 0LL;
  xmmword_140C23DF0 = 0LL;
  *(_QWORD *)&xmmword_140C23DC8 = 0LL;
  xmmword_140C23E10 = 0LL;
  LOBYTE(xmmword_140C23E00) = 1;
  byte_140C23DA8 = 0;
  byte_140C23DBC = 0;
  dword_140C23DC0 = 0;
  byte_140C23DC4 = 0;
  dword_140C23DB8 = 0;
  dword_140C23DD8 = 0;
  qword_140C23DE0 = 0LL;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140C23CA8.Header.Lock = 8LL;
  stru_140C23D28.Header.WaitListHead.Blink = &stru_140C23D28.Header.WaitListHead;
  stru_140C23D28.Header.WaitListHead.Flink = &stru_140C23D28.Header.WaitListHead;
  qword_140C23D00 = (__int64)PopBatteryWakeDpc;
  stru_140C23CA8.Header.WaitListHead.Blink = &stru_140C23CA8.Header.WaitListHead;
  stru_140C23CA8.Header.WaitListHead.Flink = &stru_140C23CA8.Header.WaitListHead;
  LOWORD(stru_140C23D28.Header.Lock) = 1;
  stru_140C23D28.Header.Size = 6;
  stru_140C23D28.Header.SignalState = 0;
  qword_140C23DE8 = 0LL;
  dword_140C23CE8 = 275;
  qword_140C23D08 = 0LL;
  qword_140C23D20 = 0LL;
  qword_140C23CF8 = 0LL;
  stru_140C23CA8.DueTime.QuadPart = 0LL;
  stru_140C23CA8.Period = 0;
  stru_140C23CA8.Processor = 0;
  byte_140C23C38 = 0;
  dword_140C23C9C = 0;
  *(_QWORD *)&stru_140C22BE0.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140C22BB8 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_140C22BE0.Header.WaitListHead;
  stru_140C22BE0.Header.WaitListHead.Blink = &stru_140C22BE0.Header.WaitListHead;
  stru_140C22BE0.Header.WaitListHead.Flink = &stru_140C22BE0.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_140C22BC0 = 0LL;
  qword_140C22BD8 = 0LL;
  qword_140C22BB0 = 0LL;
  stru_140C22BE0.DueTime.QuadPart = 0LL;
  stru_140C22BE0.Period = 0;
  stru_140C22BE0.Processor = 0;
  byte_140C23D40 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
