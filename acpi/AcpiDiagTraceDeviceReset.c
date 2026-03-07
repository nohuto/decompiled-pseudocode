void __fastcall AcpiDiagTraceDeviceReset(__int64 a1, int a2, int a3)
{
  __int64 v3; // rcx
  unsigned __int16 v4; // ax
  wchar_t *Buffer; // r8
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // dx
  __int64 v8; // rcx
  unsigned __int16 DestinationString; // [rsp+38h] [rbp-D0h] BYREF
  struct _UNICODE_STRING DestinationString_8; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+50h] [rbp-B8h] BYREF
  size_t pcchLength; // [rsp+58h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t *v14; // [rsp+78h] [rbp-90h]
  int v15; // [rsp+80h] [rbp-88h]
  int v16; // [rsp+84h] [rbp-84h]
  int *v17; // [rsp+88h] [rbp-80h]
  __int64 v18; // [rsp+90h] [rbp-78h]
  int *v19; // [rsp+98h] [rbp-70h]
  __int64 v20; // [rsp+A0h] [rbp-68h]
  char psz[128]; // [rsp+A8h] [rbp-60h] BYREF
  int v22; // [rsp+150h] [rbp+48h] BYREF
  int v23; // [rsp+158h] [rbp+50h] BYREF

  v23 = a3;
  v22 = a2;
  v3 = *(_QWORD *)(a1 + 760);
  pcchLength = 0LL;
  DestinationString_8 = 0LL;
  if ( v3 )
  {
    LODWORD(v11) = 128;
    if ( (int)AMLIGetNameSpaceObjectPath(v3, psz, &v11) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString_8, 0LL);
      v4 = RtlStringCchLengthA(psz, 0x80uLL, &pcchLength) < 0 ? 512 : pcchLength;
      DestinationString = v4;
      DestinationString_8.Buffer = (wchar_t *)ExAllocatePool2(64LL, 2LL * v4 + 2, 1399874369LL);
      Buffer = DestinationString_8.Buffer;
      if ( DestinationString_8.Buffer )
      {
        v6 = DestinationString;
        DestinationString_8.Length = 2 * DestinationString;
        v7 = 0;
        for ( DestinationString_8.MaximumLength = 2 * DestinationString + 2;
              v7 < DestinationString;
              Buffer = DestinationString_8.Buffer )
        {
          v8 = v7++;
          Buffer[v8] = psz[v8];
          v6 = DestinationString;
        }
        Buffer[v6] = 0;
        UserData.Ptr = (unsigned __int64)&DestinationString;
        v14 = DestinationString_8.Buffer;
        *(_QWORD *)&UserData.Size = 2LL;
        v15 = 2 * DestinationString;
        v17 = &v22;
        v19 = &v23;
        v18 = 2LL;
        v16 = 0;
        v20 = 4LL;
        EtwWrite(AcpiDiagHandle, &ACPI_ETW_EVENT_DEVICE_RESET, 0LL, 4u, &UserData);
        if ( DestinationString_8.Buffer )
          ExFreePoolWithTag(DestinationString_8.Buffer, 0);
      }
    }
  }
}
