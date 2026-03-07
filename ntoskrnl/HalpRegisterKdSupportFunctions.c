__int64 *HalpRegisterKdSupportFunctions()
{
  __int64 *result; // rax

  off_140C01A20[0] = (__int64 (__fastcall *)())HalpCheckPowerButton;
  off_140C01A08[0] = (__int64 (__fastcall *)())HalpKdSetupDebuggingDevice;
  off_140C01A18[0] = (__int64 (__fastcall *)())HalAcpiGetTable;
  off_140C01A30[0] = (__int64 (__fastcall *)())HalpMapPhysicalMemoryWriteThrough64;
  off_140C01A38 = (__int64 (__fastcall *)())HalpUnmapVirtualAddress;
  qword_140C01A40 = (__int64)HalpKdReadPCIConfig;
  qword_140C01A48 = (__int64)HalpKdWritePCIConfig;
  off_140C01C38[0] = (__int64 (__fastcall *)())HalpKdEnumerateDebuggingDevices;
  off_140C01A10[0] = (__int64 (__fastcall *)())HalpKdReleaseDebuggingDevice;
  off_140C01B18 = (__int64 (__fastcall *)())HalpKdReleaseDebuggingDevice;
  off_140C01D68[0] = (__int64 (__fastcall *)())HalpWatchdogDelayExpiration;
  result = &qword_140C5FDE8;
  qword_140C5FDF0 = (__int64)&qword_140C5FDE8;
  qword_140C5FDE8 = (__int64)&qword_140C5FDE8;
  off_140C01B10[0] = (__int64 (__fastcall *)())HalpKdSetupDebuggingDevice;
  return result;
}
