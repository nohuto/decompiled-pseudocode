/*
 * XREFs of EtwpInitializeRealTimeConnection @ 0x140B718B4
 * Callers:
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObCreateObjectType @ 0x14080CB00 (ObCreateObjectType.c)
 */

__int64 EtwpInitializeRealTimeConnection()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 0x18u;
  v2[7] = IopOpenIoRing;
  LOWORD(v2[0]) = 120;
  v2[8] = EtwpCloseRealTimeConnectionObject;
  LODWORD(v2[1]) = 256;
  v2[9] = EtwpDeleteRealTimeConnectionObject;
  *(GENERIC_MAPPING *)((char *)&v2[1] + 4) = EtwpGenericMapping;
  HIDWORD(v2[3]) = 1024;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 160;
  RtlInitUnicodeString(&DestinationString, L"EtwConsumer");
  return ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&EtwpRealTimeConnectionObjectType);
}
