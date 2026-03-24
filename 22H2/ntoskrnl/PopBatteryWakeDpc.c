/*
 * XREFs of PopBatteryWakeDpc @ 0x1403A73C0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     PopBatteryQueueWork @ 0x14039A3BC (PopBatteryQueueWork.c)
 */

void PopBatteryWakeDpc()
{
  unsigned int v0; // edi

  byte_140C23D40 = 0;
  v0 = 1;
  if ( PopBatteryInitiateIgnoreStatusDuringBoot )
  {
    PopBatteryInitiateIgnoreStatusDuringBoot = 0;
    v0 = 17;
  }
  KeSetEvent(&stru_140C23D28, 0, 0);
  _InterlockedExchange(&dword_140C23CA0, 0);
  PopBatteryQueueWork(v0);
}
