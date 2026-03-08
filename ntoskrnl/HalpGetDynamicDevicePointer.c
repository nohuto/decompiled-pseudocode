/*
 * XREFs of HalpGetDynamicDevicePointer @ 0x140930A44
 * Callers:
 *     HalpQueryAcpiRealTimeClock @ 0x14092FF88 (HalpQueryAcpiRealTimeClock.c)
 *     HalpSetAcpiRealTimeClock @ 0x140930098 (HalpSetAcpiRealTimeClock.c)
 *     HalpArmAcpiWakeAlarm @ 0x140931EE0 (HalpArmAcpiWakeAlarm.c)
 *     HalpQueryAcpiWakeAlarmSystemPowerState @ 0x14093207C (HalpQueryAcpiWakeAlarmSystemPowerState.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 */

__int64 __fastcall HalpGetDynamicDevicePointer(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  PVOID v5; // rdi

  v2 = 0;
  if ( !HalpDynamicDevicesReady )
    return 3221226645LL;
  KeWaitForSingleObject(&HalpDynamicDeviceInterfaceLock, WrExecutive, 0, 0, 0LL);
  v5 = HalpDynamicDevices;
  if ( HalpDynamicDevices )
  {
    ObfReferenceObject(HalpDynamicDevices);
    *a2 = v5;
  }
  else
  {
    v2 = -1073741275;
  }
  KeSetEvent(&HalpDynamicDeviceInterfaceLock, 0, 0);
  return v2;
}
