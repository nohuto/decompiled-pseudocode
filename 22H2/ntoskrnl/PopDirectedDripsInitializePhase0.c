/*
 * XREFs of PopDirectedDripsInitializePhase0 @ 0x140A3FEB8
 * Callers:
 *     PopInitializeDirectedDrips @ 0x140A3FA80 (PopInitializeDirectedDrips.c)
 * Callees:
 *     PopInitializeWorkItem @ 0x140791618 (PopInitializeWorkItem.c)
 *     PopDirectedDripsInitializeDisengageTimer @ 0x1407916EC (PopDirectedDripsInitializeDisengageTimer.c)
 *     PopDirectedDripsUmInitialize @ 0x140791728 (PopDirectedDripsUmInitialize.c)
 *     PopDirectedDripsDiagInitialize @ 0x140A3FF90 (PopDirectedDripsDiagInitialize.c)
 */

void PopDirectedDripsInitializePhase0()
{
  qword_140C24D28 = 0LL;
  stru_140C24CB8.Header.SignalState = 0;
  dword_140C24D68 = 0;
  qword_140C24EC0 = -1LL;
  unk_140C24D30 = 0;
  dword_140C24D34 = 0;
  stru_140C24CB8.Header.WaitListHead.Blink = &stru_140C24CB8.Header.WaitListHead;
  stru_140C24CB8.Header.WaitListHead.Flink = &stru_140C24CB8.Header.WaitListHead;
  LOWORD(stru_140C24CB8.Header.Lock) = 1;
  stru_140C24CB8.Header.Size = 6;
  dword_140C24CD8 = -1946157056;
  byte_140C24D38 = 0;
  PopInitializeWorkItem(
    (__int64)&unk_140C24D40,
    (__int64)PopDirectedDripsNotifyResiliencyCompletionWorker,
    (__int64)&PopDirectedDripsState);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C24D70, 2, PopDirectedDripsWaitWakeTimeoutSeconds);
  PopDirectedDripsInitializeDisengageTimer((__int64)&unk_140C24E10, 3, PopDirectedDripsSurprisePowerOnTimeoutSeconds);
  qword_140C24EC8 = 0LL;
  dword_140C24ED0 = 0;
  PopDirectedDripsDiagInitialize(0LL);
  PopDirectedDripsUmInitialize();
}
