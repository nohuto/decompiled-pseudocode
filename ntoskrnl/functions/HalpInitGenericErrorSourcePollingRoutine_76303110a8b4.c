__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140C617A8 = 0LL;
  dword_140C61894 = 0;
  dword_140C61890 = 0;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140C61858, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140C617B0, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140C617F0 = 0LL;
  qword_140C61800 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140C61808 = (__int64)&HalpGenericPolledContext;
  KeInitializeTimerEx(&stru_140C61810, NotificationTimer);
  return KiSetTimerEx((__int64)&stru_140C61810, v0, HalpGenericPolledContext, 0, (__int64)&stru_140C617B0);
}
