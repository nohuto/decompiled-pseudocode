/*
 * XREFs of DxgkInitialPower @ 0x1C02056FC
 * Callers:
 *     DriverEntry @ 0x1C03D9E6C (DriverEntry.c)
 * Callees:
 *     <none>
 */

__int64 DxgkInitialPower()
{
  NTSTATUS v0; // eax
  __int64 v1; // rbx
  __int64 v3; // rcx
  NTSTATUS v4; // eax
  NTSTATUS v5; // eax
  char OutputBuffer; // [rsp+40h] [rbp+8h] BYREF

  OutputBuffer = 0;
  v0 = ZwPowerInformation((POWER_INFORMATION_LEVEL)66, 0LL, 0, &OutputBuffer, 1u);
  v1 = v0;
  if ( v0 < 0 )
    goto LABEL_4;
  byte_1C013B497 = OutputBuffer;
  if ( OutputBuffer )
  {
    WdLogSingleEntry1(4LL, 0LL);
    v4 = PoRegisterPowerSettingCallback(
           (PDEVICE_OBJECT)g_pDeviceObject,
           &GUID_MONITOR_POWER_ON,
           DpiMiracastHandlePowerCallback,
           0LL,
           &Handle);
    v1 = v4;
    if ( v4 >= 0 )
    {
      v5 = PoRegisterPowerSettingCallback(
             (PDEVICE_OBJECT)g_pDeviceObject,
             &GUID_LOW_POWER_EPOCH,
             DpiMiracastHandlePowerCallback,
             0LL,
             &qword_1C013B8D0);
      v1 = v5;
      if ( v5 >= 0 )
      {
        dword_1C013B8D8 = 0;
        byte_1C013B499 = 0;
        qword_1C013B960 = (__int64)IoAllocateWorkItem((PDEVICE_OBJECT)g_pDeviceObject);
        if ( qword_1C013B960 )
        {
          KeInitializeTimerEx(&Timer, SynchronizationTimer);
          KeInitializeDpc(&Dpc, (PKDEFERRED_ROUTINE)DpiMiracastConnectedStandbyDelayTimerDpc, 0LL);
          return (unsigned int)v1;
        }
        v1 = -1073741801LL;
        v3 = 6LL;
        goto LABEL_6;
      }
    }
LABEL_4:
    v3 = 2LL;
LABEL_6:
    WdLogSingleEntry1(v3, v1);
  }
  return (unsigned int)v1;
}
