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
