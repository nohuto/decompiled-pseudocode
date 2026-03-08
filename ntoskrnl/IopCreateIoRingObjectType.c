/*
 * XREFs of IopCreateIoRingObjectType @ 0x140B71970
 * Callers:
 *     IoCreateObjectTypes @ 0x140B3F3D0 (IoCreateObjectTypes.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObCreateObjectType @ 0x14080CB00 (ObCreateObjectType.c)
 */

__int64 IopCreateIoRingObjectType()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  memset(v2, 0, 0x78uLL);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"IoRing");
  BYTE2(v2[0]) |= 6u;
  v2[7] = IopOpenIoRing;
  LOWORD(v2[0]) = 120;
  v2[8] = IopCloseIoRing;
  LODWORD(v2[1]) = 7634;
  v2[9] = IopDeleteIoRing;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[5]) = 208;
  return ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&IoRingObjectType);
}
