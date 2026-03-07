__int64 HalpDmaInitializeObjectType()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  DestinationString = 0LL;
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 4u;
  LOWORD(v2[0]) = 120;
  LODWORD(v2[1]) = 256;
  *(_OWORD *)((char *)&v2[1] + 4) = PopPowerRequestMapping;
  HIDWORD(v2[4]) = 512;
  HIDWORD(v2[3]) = 2031616;
  v2[9] = HalpDmaFreeChildAdapter;
  RtlInitUnicodeString(&DestinationString, L"DmaAdapter");
  return ((__int64 (__fastcall *)(UNICODE_STRING *, _QWORD *, _QWORD, POBJECT_TYPE *))ObCreateObjectType)(
           &DestinationString,
           v2,
           0LL,
           &HalpDmaAdapterObjectType);
}
