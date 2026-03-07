void __fastcall AcpiDiagTraceThermalNotification(_DWORD *a1, __int64 a2, __int16 a3)
{
  char *v6; // r9
  __int64 v7; // r11
  unsigned int v8; // r10d
  unsigned int v9; // kr00_4
  unsigned int v10; // kr04_4
  __int64 v11; // rcx
  unsigned int v12; // kr08_4
  unsigned int *v13; // r8
  unsigned int v14; // kr0C_4
  unsigned int v15; // kr10_4
  const EVENT_DESCRIPTOR *v16; // rdx
  int v17; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v18; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v19; // [rsp+40h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+44h] [rbp-C4h] BYREF
  unsigned int DestinationString; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t *Buffer; // [rsp+78h] [rbp-90h]
  int v25; // [rsp+80h] [rbp-88h]
  int v26; // [rsp+84h] [rbp-84h]
  unsigned int *v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h]
  unsigned int *v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h]
  char v31; // [rsp+B4h] [rbp-54h] BYREF
  unsigned int *v32; // [rsp+148h] [rbp+40h]
  __int64 v33; // [rsp+150h] [rbp+48h]
  unsigned int *p_DestinationString; // [rsp+158h] [rbp+50h]
  __int64 v35; // [rsp+160h] [rbp+58h]
  _DWORD v36[10]; // [rsp+168h] [rbp+60h] BYREF

  v20 = 0;
  v18 = 0;
  LOWORD(v17) = 0;
  v19 = 0;
  DestinationString_8 = 0LL;
  DestinationString = 0;
  RtlInitUnicodeString(&DestinationString_8, 0LL);
  if ( AcpiDiagHandle
    && (a3 != 128 || EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_TEMPERATURE_NOTIFICATION))
    && (a3 != 129 || EtwEventEnabled(AcpiDiagHandle, &ACPI_ETW_EVENT_TRIP_POINT_NOTIFICATION))
    && (unsigned __int16)(a3 - 128) <= 1u
    && (int)ACPIAmliBuildObjectPathnameUnicode(*(_QWORD *)(a2 + 760), &DestinationString_8, 1LL) >= 0 )
  {
    v6 = &v31;
    v7 = 10LL;
    LOWORD(v17) = DestinationString_8.Length >> 1;
    UserData.Ptr = (unsigned __int64)&v17;
    v8 = 0;
    Buffer = DestinationString_8.Buffer;
    v9 = a1[4];
    *(_QWORD *)&UserData.Size = 2LL;
    v27 = &v18;
    v18 = v9 / 0xA;
    v10 = a1[5];
    v25 = 2 * (DestinationString_8.Length >> 1);
    v19 = v10 / 0xA;
    v26 = 0;
    v28 = 4LL;
    v29 = &v19;
    v30 = 4LL;
    do
    {
      v11 = v8;
      *(_QWORD *)(v6 - 4) = 4LL;
      ++v8;
      v6 += 16;
      v12 = a1[v11 + 9];
      v13 = &v36[v11];
      *(_QWORD *)(v6 - 28) = v13;
      *v13 = v12 / 0xA;
      --v7;
    }
    while ( v7 );
    v33 = 4LL;
    v14 = a1[7];
    v35 = 4LL;
    v20 = v14 / 0xA;
    v15 = a1[19];
    v32 = &v20;
    p_DestinationString = &DestinationString;
    DestinationString = v15 / 0xA;
    v16 = &ACPI_ETW_EVENT_TEMPERATURE_NOTIFICATION;
    if ( a3 != 128 )
      v16 = &ACPI_ETW_EVENT_TRIP_POINT_NOTIFICATION;
    EtwWrite(AcpiDiagHandle, v16, 0LL, 0x10u, &UserData);
  }
  if ( DestinationString_8.Buffer )
    ExFreePoolWithTag(DestinationString_8.Buffer, 0);
}
