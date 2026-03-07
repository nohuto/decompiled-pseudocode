char __fastcall RtlpUpdateDynamicTimeZones(__int16 a1)
{
  ULONG v2; // edi
  char v3; // bl
  ULONG i; // edx
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  HANDLE DestinationString; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v12[14]; // [rsp+98h] [rbp-70h] BYREF
  __int128 Buf2; // [rsp+108h] [rbp+0h] BYREF
  __int128 v14; // [rsp+118h] [rbp+10h]
  __int64 v15; // [rsp+128h] [rbp+20h]
  int v16; // [rsp+130h] [rbp+28h]
  _OWORD Buf1[2]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v18; // [rsp+158h] [rbp+50h]
  int v19; // [rsp+160h] [rbp+58h]
  _WORD KeyInformation[136]; // [rsp+168h] [rbp+60h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  DestinationString = 0LL;
  ResultLength[0] = 0;
  DestinationString_8 = 0LL;
  memset(KeyInformation, 0, sizeof(KeyInformation));
  v15 = 0LL;
  v16 = 0;
  Buf2 = 0LL;
  v18 = 0LL;
  v14 = 0LL;
  v19 = 0;
  memset(Buf1, 0, sizeof(Buf1));
  memset(&ObjectAttributes_8, 0, 44);
  memset(v12, 0, sizeof(v12));
  LODWORD(v12[1]) = 292;
  LODWORD(v12[4]) = 50331648;
  v12[2] = L"TZI";
  v12[3] = &Buf2;
  if ( (int)RtlpGetRegistryHandle(3, L"Time Zones", 0, &KeyHandle) < 0 )
    return 0;
  v2 = 0;
  v3 = 1;
  for ( i = 0; ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0x110u, ResultLength) >= 0; i = v2 )
  {
    *(_DWORD *)(&DestinationString_8.MaximumLength + 1) = 0;
    DestinationString_8.MaximumLength = KeyInformation[6];
    DestinationString_8.Length = KeyInformation[6];
    ObjectAttributes_8.RootDirectory = KeyHandle;
    DestinationString_8.Buffer = &KeyInformation[8];
    ObjectAttributes_8.ObjectName = &DestinationString_8;
    ObjectAttributes_8.Length = 48;
    ObjectAttributes_8.Attributes = 576;
    *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&Handle, 0x2000000u, &ObjectAttributes_8) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString_8, L"Dynamic DST");
      ObjectAttributes_8.RootDirectory = Handle;
      ObjectAttributes_8.Length = 48;
      ObjectAttributes_8.ObjectName = &DestinationString_8;
      ObjectAttributes_8.Attributes = 576;
      *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&DestinationString, 0x20019u, &ObjectAttributes_8) >= 0 )
      {
        Buf2 = 0LL;
        LODWORD(Buf2) = -44;
        v14 = 0LL;
        v15 = 0LL;
        v16 = 0;
        if ( (int)RtlpQueryRegistryValues(0x40000000LL, (const WCHAR *)Handle, v12, 0LL) >= 0
          && (int)RtlpFindRegTziForCurrentYear((__int64)Buf1, (__int64)DestinationString, a1) >= 0 )
        {
          if ( memcmp(Buf1, &Buf2, 0x2CuLL) )
            RtlWriteRegistryValue(0x40000000u, (PCWSTR)Handle, L"TZI", 3u, Buf1, 0x2Cu);
        }
        ZwClose(DestinationString);
      }
      ZwClose(Handle);
    }
    ++v2;
  }
  ZwClose(KeyHandle);
  return v3;
}
