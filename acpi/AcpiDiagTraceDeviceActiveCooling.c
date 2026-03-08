/*
 * XREFs of AcpiDiagTraceDeviceActiveCooling @ 0x1C0007D80
 * Callers:
 *     ACPIThermalReevaluateConstraintsWorker @ 0x1C0041AC0 (ACPIThermalReevaluateConstraintsWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 *     ACPIAmliBuildObjectPathnameUnicode @ 0x1C000B2B0 (ACPIAmliBuildObjectPathnameUnicode.c)
 */

void __fastcall AcpiDiagTraceDeviceActiveCooling(__int64 a1, char a2)
{
  __int16 v4; // [rsp+30h] [rbp-50h] BYREF
  __int16 v5; // [rsp+34h] [rbp-4Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  wchar_t *Buffer; // [rsp+58h] [rbp-28h]
  int v9; // [rsp+60h] [rbp-20h]
  int v10; // [rsp+64h] [rbp-1Ch]
  __int16 *v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]

  DestinationString = 0LL;
  v4 = 0;
  v5 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( AcpiDiagHandle
    && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_ACTIVE_COOLING)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), &DestinationString, 1LL) >= 0 )
  {
    UserData.Ptr = (unsigned __int64)&v4;
    Buffer = DestinationString.Buffer;
    v4 = DestinationString.Length >> 1;
    v9 = 2 * (DestinationString.Length >> 1);
    *(_QWORD *)&UserData.Size = 2LL;
    v5 = a2 != 0;
    v10 = 0;
    v11 = &v5;
    v12 = 2LL;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_ACTIVE_COOLING, 0LL, 3u, &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
