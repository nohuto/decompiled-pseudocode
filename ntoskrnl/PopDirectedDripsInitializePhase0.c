/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140B6E9FC
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140B46FF8 (PopInitializeDirectedDrips.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x14080FA3C (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x14085CDF4 (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x14085CE30 (PopDirectedDripsUmInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140B4407C (PopDirectedDripsDiagInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  qword_140C3EE08 = 0LL;
  stru_140C3ED98.Header.SignalState = 0;
  dword_140C3EE48 = 0;
  qword_140C3EFA0 = -1LL;
  unk_140C3EE10 = 0;
  dword_140C3EE14 = 0;
  stru_140C3ED98.Header.WaitListHead.Blink = &stru_140C3ED98.Header.WaitListHead;
  stru_140C3ED98.Header.WaitListHead.Flink = &stru_140C3ED98.Header.WaitListHead;
  LOWORD(stru_140C3ED98.Header.Lock) = 1;
  stru_140C3ED98.Header.Size = 6;
  dword_140C3EDB8 = -1946157056;
  byte_140C3EE18 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140C3EE20,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)&PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C3EE50, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C3EEF0, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  qword_140C3EFA8 = 0LL;
  dword_140C3EFB0 = 0;
  PopDirectedDripsDiagInitialize(0);
  PopDirectedDripsUmInitialize();
}
