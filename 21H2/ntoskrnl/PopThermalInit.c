/*
 * XREFs of PopThermalInit @ 0x140B246C0
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     KiInitializeTimer2 @ 0x1403588EC (KiInitializeTimer2.c)
 *     PopInitializeWorkItem @ 0x140829740 (PopInitializeWorkItem.c)
 *     PopInitializeTimer @ 0x1408534E0 (PopInitializeTimer.c)
 */

__int64 PopThermalInit()
{
  _BYTE *v0; // r8
  unsigned int i; // ecx
  unsigned int v2; // kr00_4
  __int64 v3; // r8
  __int64 result; // rax

  LOBYTE(word_140C22070) = 1;
  qword_140C22468 = 0LL;
  PopThermalLock = 0LL;
  qword_140C222A8 = 0LL;
  PopThermalTelemetryLock = 0LL;
  qword_140C22068 = 0LL;
  PopSystemThermalInfo = 0LL;
  PopInitializeTimer(
    (__int64)&PopThermalTelemetryTimer,
    (__int64)PopThermalTelemetryCallback,
    0LL,
    (__int64)PopThermalTelemetryWorker,
    0LL);
  if ( PopThermalPollingMode )
    PopThermalPollingWakesAllowed = 1;
  v0 = PopThermalTrackingThresholds;
  for ( i = 0; i < 0x834; i += 100 )
  {
    v2 = i;
    *v0++ = v2 / 0x14;
  }
  word_140C22172 = 0;
  KiInitializeTimer2((__int64)&unk_140C22170, (__int64)PopThermalEventTransitionTimerCallback, 0LL, 0);
  dword_140C2216C = -1;
  byte_140C22168 = 1;
  result = PopInitializeWorkItem(
             (__int64)&PopThermalStateTransitionWorkItem,
             (__int64)PopThermalStateTransitionWorker,
             v3);
  qword_140C22208 = 0LL;
  PopThermalStateTransitionContext = 0LL;
  byte_140C22210 = 1;
  return result;
}
