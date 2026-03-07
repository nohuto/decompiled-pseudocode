void *ACPIGlobalInitialize()
{
  int v0; // edx
  __int64 RSDT; // rbx

  AcpiHalDispatchTable = 1094930505;
  qword_1C0070138 = (__int64)ACPIGpeHalEnableDisableEvents;
  dword_1C0070134 = 2;
  qword_1C0070140 = (__int64)ACPIEnableInitializeACPI;
  qword_1C0070148 = (__int64)ACPIWakeEnableWakeEvents;
  qword_1C0070150 = (__int64)ACPIWakeMarkHiberPhase;
  ((void (__fastcall *)(int *, __int64 *))HalDispatchTable->HalInitPowerManagement)(
    &AcpiHalDispatchTable,
    &PmHalDispatchTable);
  RSDT = ACPILoadFindRSDT();
  if ( !RSDT )
    KeBugCheckEx(0xA5u, 0x11uLL, 1uLL, 0LL, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v0) = 4;
    WPP_RECORDER_SF_i(
      WPP_GLOBAL_Control->DeviceExtension,
      v0,
      6,
      30,
      (__int64)&WPP_94a568583922335cc08c125c0dbec1dc_Traceguids,
      RSDT);
  }
  *((_BYTE *)AcpiInformation + 84) = 1;
  *(_QWORD *)AcpiInformation = RSDT;
  ACPIGetUsedDebuggingDevices();
  return AcpiInformation;
}
