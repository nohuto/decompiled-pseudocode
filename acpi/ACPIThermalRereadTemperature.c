/*
 * XREFs of ACPIThermalRereadTemperature @ 0x1C0041E34
 * Callers:
 *     AcpiDiagThermalPollingTimerRoutine @ 0x1C0007430 (AcpiDiagThermalPollingTimerRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     ACPIThermalLoopEx @ 0x1C00410F0 (ACPIThermalLoopEx.c)
 *     WPP_RECORDER_SF_qssdddd @ 0x1C0043624 (WPP_RECORDER_SF_qssdddd.c)
 */

void __fastcall ACPIThermalRereadTemperature(__int64 a1)
{
  union _LARGE_INTEGER v2; // [rsp+60h] [rbp-28h] BYREF
  struct _TIME_FIELDS v3; // [rsp+68h] [rbp-20h] BYREF

  v3 = 0LL;
  v2.QuadPart = MEMORY[0xFFFFF78000000008];
  RtlTimeToTimeFields(&v2, &v3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qssdddd(WPP_GLOBAL_Control->DeviceExtension, v3.Second, v3.Minute, v3.Hour);
  ACPIThermalLoopEx(a1, 536870914, 0);
}
