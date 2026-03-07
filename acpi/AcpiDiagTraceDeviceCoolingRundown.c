void __fastcall AcpiDiagTraceDeviceCoolingRundown(__int64 a1, char a2, char a3)
{
  __int16 v5; // [rsp+30h] [rbp-29h] BYREF
  __int16 v6; // [rsp+34h] [rbp-25h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  wchar_t *Buffer; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+68h] [rbp+Fh]
  int v11; // [rsp+6Ch] [rbp+13h]
  __int16 *v12; // [rsp+70h] [rbp+17h]
  __int64 v13; // [rsp+78h] [rbp+1Fh]
  char *v14; // [rsp+80h] [rbp+27h]
  __int64 v15; // [rsp+88h] [rbp+2Fh]
  char v16; // [rsp+D0h] [rbp+77h] BYREF

  v16 = a3;
  DestinationString = 0LL;
  v5 = 0;
  v6 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( AcpiDiagHandle
    && EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_COOLING_RUNDOWN)
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), &DestinationString, 1LL) >= 0 )
  {
    UserData.Ptr = (unsigned __int64)&v5;
    Buffer = DestinationString.Buffer;
    v5 = DestinationString.Length >> 1;
    v10 = 2 * (DestinationString.Length >> 1);
    *(_QWORD *)&UserData.Size = 2LL;
    v6 = a2 != 0;
    v11 = 0;
    v12 = &v6;
    v14 = &v16;
    v13 = 2LL;
    v15 = 1LL;
    EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_COOLING_RUNDOWN, 0LL, 4u, &UserData);
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
}
