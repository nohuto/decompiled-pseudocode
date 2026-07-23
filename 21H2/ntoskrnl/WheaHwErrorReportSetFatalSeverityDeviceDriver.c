/*
 * XREFs of WheaHwErrorReportSetFatalSeverityDeviceDriver @ 0x1405BC0C0
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x1405BC2C0 (WheaReportFatalHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheaHwErrorReportSetSeverityDeviceDriver @ 0x1405BC170 (WheaHwErrorReportSetSeverityDeviceDriver.c)
 *     WheapErrorHandleIsValid @ 0x1405BC580 (WheapErrorHandleIsValid.c)
 */

__int64 __fastcall WheaHwErrorReportSetFatalSeverityDeviceDriver(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  WheaHwErrorReportSetSeverityDeviceDriver(v4, 1LL);
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 20LL) |= 0x40000000u;
  *(_DWORD *)(*(_QWORD *)(a1 + 40) + 20LL) &= ~0x80000000;
  result = 0LL;
  *(_QWORD *)(a1 + 56) = a2;
  return result;
}
