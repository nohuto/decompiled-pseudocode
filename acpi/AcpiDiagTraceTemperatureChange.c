/*
 * XREFs of AcpiDiagTraceTemperatureChange @ 0x1C0008890
 * Callers:
 *     ACPIThermalLoopEx @ 0x1C00410F0 (ACPIThermalLoopEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000B2B0 (ACPIAmliBuildObjectPathnameUnicode.c)
 */

void __fastcall AcpiDiagTraceTemperatureChange(__int64 a1, __int64 a2)
{
  __int16 v4; // [rsp+30h] [rbp-50h] BYREF
  int v5; // [rsp+34h] [rbp-4Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  wchar_t *Buffer; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  int *v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]

  v5 = 0;
  v4 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( AcpiDiagHandle
    && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_TEMPERATURE_CHANGE)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a2 + 760), &DestinationString, 1LL) >= 0 )
  {
    v4 = DestinationString.Length >> 1;
    UserData.Ptr = (unsigned __int64)&v4;
    Buffer = DestinationString.Buffer;
    v5 = *(_DWORD *)(a1 + 16);
    v11 = &v5;
    v9 = 2 * (DestinationString.Length >> 1);
    *(_QWORD *)&UserData.Size = 2LL;
    v10 = 0;
    v12 = 4LL;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_TEMPERATURE_CHANGE, 0LL, 3u, &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
