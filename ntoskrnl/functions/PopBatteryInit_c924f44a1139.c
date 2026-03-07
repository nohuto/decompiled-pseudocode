LIST_ENTRY *PopBatteryInit()
{
  __int64 v0; // rcx
  _DWORD *v1; // rax
  LIST_ENTRY *result; // rax

  qword_140C3CB68 = (__int64)&qword_140C3CB60;
  qword_140C3CB60 = (__int64)&qword_140C3CB60;
  qword_140C3CB78 = (__int64)&qword_140C3CB70;
  qword_140C3CB70 = (__int64)&qword_140C3CB70;
  v0 = 4LL;
  qword_140C3CB48 = 0LL;
  dword_140C3CCEC = -1;
  PopWeakChargerCompositeState = -1;
  PopWeakChargerNotificationBatteryMiniport = -1;
  PopWeakChargerNotificationUsbStack = -1;
  PopBatteryWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopBatteryWorker;
  v1 = &unk_140C3CC88;
  *(_OWORD *)&xmmword_140C3CD18 = 0LL;
  *(_QWORD *)&PopCB = 0LL;
  xmmword_140C3CD28 = 0LL;
  xmmword_140C3CD18 = 0LL;
  qword_140C3A088 = 0LL;
  PopWeakChargerLock = 0LL;
  xmmword_140C3CD38 = 0LL;
  qword_140C3CCFC = 0LL;
  byte_140C3CCE8 = 0;
  LOBYTE(xmmword_140C3CD28) = 1;
  qword_140C3CD08 = 0LL;
  dword_140C3CCF8 = 0;
  PopBatteryWorkItem.Parameter = 0LL;
  PopBatteryWorkItem.List.Flink = 0LL;
  do
  {
    *v1 = 2;
    v1 += 6;
    --v0;
  }
  while ( v0 );
  *(_QWORD *)&stru_140C3CBC8.Header.Lock = 8LL;
  stru_140C3CC48.Header.WaitListHead.Blink = &stru_140C3CC48.Header.WaitListHead;
  stru_140C3CC48.Header.WaitListHead.Flink = &stru_140C3CC48.Header.WaitListHead;
  qword_140C3CC20 = (__int64)PopBatteryWakeDpc;
  stru_140C3CBC8.Header.WaitListHead.Blink = &stru_140C3CBC8.Header.WaitListHead;
  stru_140C3CBC8.Header.WaitListHead.Flink = &stru_140C3CBC8.Header.WaitListHead;
  stru_140C3CC60.WorkerRoutine = (void (__fastcall *)(void *))PopBootBatteryStatusWorker;
  LOWORD(stru_140C3CC48.Header.Lock) = 1;
  stru_140C3CC48.Header.Size = 6;
  stru_140C3CC48.Header.SignalState = 0;
  qword_140C3CD10 = 0LL;
  dword_140C3CC08 = 275;
  qword_140C3CC28 = 0LL;
  qword_140C3CC40 = 0LL;
  qword_140C3CC18 = 0LL;
  stru_140C3CBC8.DueTime.QuadPart = 0LL;
  stru_140C3CBC8.Period = 0;
  stru_140C3CBC8.Processor = 0;
  stru_140C3CC60.Parameter = 0LL;
  stru_140C3CC60.List.Flink = 0LL;
  byte_140C3CB58 = 0;
  dword_140C3CBBC = 0;
  *(_QWORD *)&stru_140C3A0E0.Header.Lock = 8LL;
  PopEstimateSpoiledUntilTime = MEMORY[0xFFFFF78000000008] + 300000000LL;
  qword_140C3A0B8 = (__int64)PopRefreshEstimateAfterSpoilingDpc;
  result = &stru_140C3A0E0.Header.WaitListHead;
  stru_140C3A0E0.Header.WaitListHead.Blink = &stru_140C3A0E0.Header.WaitListHead;
  stru_140C3A0E0.Header.WaitListHead.Flink = &stru_140C3A0E0.Header.WaitListHead;
  PopPostSpoilingRefresh = 275;
  qword_140C3A0C0 = 0LL;
  qword_140C3A0D8 = 0LL;
  qword_140C3A0B0 = 0LL;
  stru_140C3A0E0.DueTime.QuadPart = 0LL;
  stru_140C3A0E0.Period = 0;
  stru_140C3A0E0.Processor = 0;
  byte_140C3CC80 = 1;
  PopBatteryInitiateIgnoreStatusDuringBoot = 1;
  return result;
}
