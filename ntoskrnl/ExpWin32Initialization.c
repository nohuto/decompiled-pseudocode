bool ExpWin32Initialization()
{
  int v0; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v3[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WindowStation");
  memset(v3, 0, 0x78uLL);
  LOWORD(v3[0]) = 120;
  v3[8] = ExpWin32CloseProcedure;
  HIDWORD(v3[4]) = 512;
  v3[9] = ExpWin32DeleteProcedure;
  LODWORD(v3[1]) = 304;
  v3[13] = ExpWin32OkayToCloseProcedure;
  HIDWORD(v3[3]) = 983040;
  v3[10] = ExpWin32ParseProcedure;
  v3[7] = ExpWin32OpenProcedure;
  BYTE2(v3[0]) = BYTE2(v3[0]) & 0xA7 | 0x18;
  *(_OWORD *)((char *)&v3[1] + 4) = ExpWindowStationMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExWindowStationObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Desktop");
  BYTE2(v3[0]) |= 0x40u;
  v3[10] = 0LL;
  *(_OWORD *)((char *)&v3[1] + 4) = ExpDesktopMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExDesktopObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Composition");
  v3[10] = 0LL;
  HIDWORD(v3[0]) = 1024;
  BYTE2(v3[0]) = BYTE2(v3[0]) & 0xBD | 2;
  *(_OWORD *)((char *)&v3[1] + 4) = ExpCompositionMapping;
  v0 = ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExCompositionObjectType);
  HIDWORD(v3[0]) = 0;
  if ( v0 < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"RawInputManager");
  v3[10] = 0LL;
  BYTE2(v3[0]) = BYTE2(v3[0]) & 0xBD | 2;
  *(_OWORD *)((char *)&v3[1] + 4) = ExpRawInputManagerMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExRawInputManagerObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"CoreMessaging");
  v3[10] = 0LL;
  BYTE2(v3[0]) = BYTE2(v3[0]) & 0xBD | 2;
  *(_OWORD *)((char *)&v3[1] + 4) = ExpCoreMessagingMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExCoreMessagingObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"ActivationObject");
  v3[10] = 0LL;
  HIDWORD(v3[4]) = 1;
  BYTE2(v3[0]) = BYTE2(v3[0]) & 0xB9 | 6;
  *(_OWORD *)((char *)&v3[1] + 4) = ExpActivationObjectMapping;
  return (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&ExActivationObjectType) >= 0;
}
