/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140B379E0
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140B51E7C (PopInitializeDirectedDrips.c)
 * Callees:
 *     PopDirectedDripsInitializeDisengageTimer @ 0x140802C0C (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x140802C48 (PopDirectedDripsUmInitialize.c)
 *     PopInitializeWorkItem @ 0x140822418 (PopInitializeWorkItem.c)
 *     PopDirectedDripsDiagInitialize @ 0x140B388D0 (PopDirectedDripsDiagInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  qword_140C3F248 = 0LL;
  stru_140C3F1D8.Header.SignalState = 0;
  dword_140C3F288 = 0;
  qword_140C3F3E0 = -1LL;
  unk_140C3F250 = 0;
  dword_140C3F254 = 0;
  stru_140C3F1D8.Header.WaitListHead.Blink = &stru_140C3F1D8.Header.WaitListHead;
  stru_140C3F1D8.Header.WaitListHead.Flink = &stru_140C3F1D8.Header.WaitListHead;
  LOWORD(stru_140C3F1D8.Header.Lock) = 1;
  stru_140C3F1D8.Header.Size = 6;
  dword_140C3F1F8 = -1946157056;
  byte_140C3F258 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140C3F260,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)&PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C3F290, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C3F330, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  qword_140C3F3E8 = 0LL;
  dword_140C3F3F0 = 0;
  PopDirectedDripsDiagInitialize(0LL);
  PopDirectedDripsUmInitialize();
}
