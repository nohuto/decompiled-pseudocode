/*
 * XREFs of EtwpInitializePrivateSessionDemuxObject @ 0x14085FA1C
 * Callers:
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObCreateObjectTypeEx @ 0x14080CB20 (ObCreateObjectTypeEx.c)
 */

__int64 EtwpInitializePrivateSessionDemuxObject()
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  __int128 v2[8]; // [rsp+40h] [rbp-29h] BYREF

  DestinationString = 0LL;
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 0x14u;
  *((_QWORD *)&v2[3] + 1) = IopOpenIoRing;
  LOWORD(v2[0]) = 120;
  *((_QWORD *)&v2[4] + 1) = EtwpDeleteSessionDemuxObject;
  DWORD2(v2[0]) = 256;
  *(GENERIC_MAPPING *)((char *)v2 + 12) = EtwpGenericMapping;
  *(_QWORD *)((char *)&v2[2] + 4) = 0x2000000001LL;
  RtlInitUnicodeString(&DestinationString, L"EtwSessionDemuxEntry");
  return ObCreateObjectTypeEx(&DestinationString, v2, 0LL, 0LL, &EtwpSessionDemuxObjectType);
}
