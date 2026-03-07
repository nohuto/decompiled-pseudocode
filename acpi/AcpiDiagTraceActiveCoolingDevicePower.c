void __fastcall AcpiDiagTraceActiveCoolingDevicePower(__int64 a1, __int64 a2, int a3, int a4, char a5)
{
  __int64 v7; // rcx
  unsigned __int16 v8; // [rsp+30h] [rbp-81h] BYREF
  __int16 v9; // [rsp+34h] [rbp-7Dh] BYREF
  __int16 v10; // [rsp+38h] [rbp-79h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-71h] BYREF
  struct _UNICODE_STRING v12; // [rsp+50h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+60h] [rbp-51h] BYREF
  wchar_t *Buffer; // [rsp+70h] [rbp-41h]
  int v15; // [rsp+78h] [rbp-39h]
  int v16; // [rsp+7Ch] [rbp-35h]
  int *v17; // [rsp+80h] [rbp-31h]
  __int64 v18; // [rsp+88h] [rbp-29h]
  int *v19; // [rsp+90h] [rbp-21h]
  __int64 v20; // [rsp+98h] [rbp-19h]
  __int16 *v21; // [rsp+A0h] [rbp-11h]
  __int64 v22; // [rsp+A8h] [rbp-9h]
  wchar_t *v23; // [rsp+B0h] [rbp-1h]
  int v24; // [rsp+B8h] [rbp+7h]
  int v25; // [rsp+BCh] [rbp+Bh]
  __int16 *v26; // [rsp+C0h] [rbp+Fh]
  __int64 v27; // [rsp+C8h] [rbp+17h]
  int v28; // [rsp+120h] [rbp+6Fh] BYREF
  int v29; // [rsp+128h] [rbp+77h] BYREF

  v29 = a4;
  v28 = a3;
  v9 = 0;
  v10 = 0;
  v8 = 0;
  v12 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v12, 0LL);
  if ( AcpiDiagHandle )
  {
    if ( EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_ACTIVE_COOLING_DEVICE_POWER) )
    {
      if ( (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a1 + 760), &DestinationString, 1LL) >= 0 )
      {
        v7 = *(_QWORD *)(a2 + 760);
        v8 = DestinationString.Length >> 1;
        if ( (int)ACPIAmliBuildObjectPathnameUnicode(v7, &v12, 1LL) >= 0 )
        {
          UserData.Ptr = (unsigned __int64)&v8;
          Buffer = DestinationString.Buffer;
          v9 = v12.Length >> 1;
          v15 = 2 * v8;
          v17 = &v28;
          v19 = &v29;
          v21 = &v9;
          v23 = v12.Buffer;
          v24 = 2 * (v12.Length >> 1);
          v10 = a5 != 0;
          v26 = &v10;
          *(_QWORD *)&UserData.Size = 2LL;
          v16 = 0;
          v18 = 4LL;
          v20 = 4LL;
          v22 = 2LL;
          v25 = 0;
          v27 = 2LL;
          EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_ACTIVE_COOLING_DEVICE_POWER, 0LL, 7u, &UserData);
        }
      }
    }
  }
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( v12.Buffer )
    ExFreePoolWithTag(v12.Buffer, 0);
}
