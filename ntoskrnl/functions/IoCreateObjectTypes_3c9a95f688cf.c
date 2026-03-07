bool IoCreateObjectTypes()
{
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-39h] BYREF
  __int128 v2[8]; // [rsp+48h] [rbp-29h] BYREF

  DestinationString = 0LL;
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 4u;
  LOWORD(v2[0]) = 120;
  *(GENERIC_MAPPING *)((char *)v2 + 12) = IopFileMapping;
  DWORD2(v2[0]) = 256;
  DWORD1(v2[2]) = 512;
  HIDWORD(v2[1]) = 2032127;
  RtlInitUnicodeString(&DestinationString, L"Adapter");
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&IoAdapterObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Controller");
  HIDWORD(v2[2]) = 72;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&IoControllerObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Device");
  WORD1(v2[0]) |= 0x101u;
  *(_QWORD *)&v2[5] = IopParseDevice;
  *((_QWORD *)&v2[5] + 1) = IopGetSetSecurityObject;
  *((_QWORD *)&v2[4] + 1) = IopDeleteDevice;
  HIDWORD(v2[2]) = 336;
  *(_QWORD *)&v2[6] = 0LL;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&IoDeviceObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Driver");
  BYTE3(v2[0]) &= ~1u;
  HIDWORD(v2[2]) = 336;
  *((_QWORD *)&v2[4] + 1) = IopDeleteDriver;
  memset(&v2[5], 0, 24);
  if ( ViVerifierEnabled && (VfRuleClasses & 0xFF217644) != 0 )
    BYTE2(v2[0]) |= 0x20u;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&IoDriverObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"IoCompletion");
  DWORD2(v2[0]) = 272;
  *(_QWORD *)&v2[4] = IopCloseIoCompletion;
  HIDWORD(v2[1]) = 2031619;
  *((_QWORD *)&v2[4] + 1) = IopDeleteIoCompletion;
  HIDWORD(v2[2]) = 80;
  BYTE2(v2[0]) = BYTE2(v2[0]) & 0x7B | 0x80;
  *(__int128 *)((char *)v2 + 12) = IopCompletionMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&IoCompletionObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"WaitCompletionPacket");
  HIDWORD(v2[2]) = 112;
  *(_QWORD *)&v2[4] = IopCloseWaitCompletionPacket;
  DWORD2(v2[0]) = 272;
  HIDWORD(v2[1]) = 983041;
  BYTE2(v2[0]) = BYTE2(v2[0]) & 0x7B | 4;
  *((_QWORD *)&v2[4] + 1) = 0LL;
  *(__int128 *)((char *)v2 + 12) = IopWaitCompletionMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&IopWaitCompletionPacketObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"File");
  BYTE3(v2[0]) |= 1u;
  *(_QWORD *)&v2[4] = IopCloseFile;
  *((_QWORD *)&v2[2] + 1) = 0x11800000400LL;
  *((_QWORD *)&v2[4] + 1) = IopDeleteFile;
  *(_QWORD *)&v2[5] = IopParseFile;
  *(_QWORD *)&v2[6] = IopQueryName;
  *(_QWORD *)((char *)v2 + 4) = 0x13000000001LL;
  HIDWORD(v2[1]) = 2032127;
  BYTE2(v2[0]) = BYTE2(v2[0]) & 0xEB | 0x10;
  *(GENERIC_MAPPING *)((char *)v2 + 12) = IopFileMapping;
  *((_QWORD *)&v2[5] + 1) = IopGetSetSecurityObject;
  *(_QWORD *)&v2[7] = 0x20005010000000LL;
  return (int)ObCreateObjectTypeEx(&DestinationString, v2, 0LL, (__int16 *)0x9B, &IoFileObjectType) >= 0
      && (int)IopCreateIoRingObjectType() >= 0;
}
