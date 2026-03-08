/*
 * XREFs of PopBatteryWakeDpc @ 0x1403B0980
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     PopBatteryQueueWork @ 0x1403C0538 (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140C3CC80 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140C3CC48, 0, 0);
  _InterlockedExchange(&dword_140C3CBC0, 0);
  PopBatteryQueueWork(v0);
  ExQueueWorkItem(&stru_140C3CC60, DelayedWorkQueue);
}
