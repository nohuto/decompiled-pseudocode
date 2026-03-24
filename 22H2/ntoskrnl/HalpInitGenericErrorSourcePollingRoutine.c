/*
 * XREFs of HalpInitGenericErrorSourcePollingRoutine @ 0x1409A7DA8
 * Callers:
 *     HalpInitializeGenericErrorSource @ 0x1409A7E74 (HalpInitializeGenericErrorSource.c)
 * Callees:
 *     KiSetTimerEx @ 0x14025F5D0 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x140341AF0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1403446C0 (KeInitializeDpc.c)
 *     KeInitializeMutex @ 0x14035FBE0 (KeInitializeMutex.c)
 */

__int64 HalpInitGenericErrorSourcePollingRoutine()
{
  __int64 v0; // rbx

  qword_140C49CA8 = 0LL;
  dword_140C49D94 = 0;
  dword_140C49D90 = 0;
  HalpGenericPolledContext = 500;
  KeInitializeMutex(&stru_140C49D58, 0);
  v0 = -10000LL * (unsigned int)HalpGenericPolledContext;
  KeInitializeDpc(&stru_140C49CB0, (PKDEFERRED_ROUTINE)HalpGenericPolledDpcRoutine, &HalpGenericPolledContext);
  qword_140C49CF0 = 0LL;
  qword_140C49D00 = (__int64)HalpGenericPolledWorkerRoutine;
  qword_140C49D08 = (__int64)&HalpGenericPolledContext;
  KeInitializeTimerEx(&Timer, NotificationTimer);
  return KiSetTimerEx((__int64)&Timer, v0, HalpGenericPolledContext, 0, (__int64)&stru_140C49CB0);
}
