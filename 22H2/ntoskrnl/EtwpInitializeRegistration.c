/*
 * XREFs of EtwpInitializeRegistration @ 0x140A72644
 * Callers:
 *     EtwpInitialize @ 0x140A41844 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x14035FC1C (KiInitializeMutant.c)
 *     memset @ 0x140413800 (memset.c)
 *     ObCreateObjectType @ 0x140790760 (ObCreateObjectType.c)
 */

__int64 __fastcall EtwpInitializeRegistration(__int64 a1, __int64 a2, __int64 a3)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v5[16]; // [rsp+30h] [rbp-29h] BYREF

  LOBYTE(a3) = 1;
  DestinationString = 0LL;
  KiInitializeMutant((ULONG_PTR)&EtwpGlobalMutex, 0, a3, 0LL);
  EtwpReplyListLock = 0LL;
  qword_140C19958 = (__int64)&EtwpReplyListHead;
  EtwpReplyListHead = (__int64)&EtwpReplyListHead;
  memset(v5, 0, 0x78uLL);
  BYTE2(v5[0]) |= 0x18u;
  v5[7] = EtwpOpenRealTimeConnectionObject;
  LOWORD(v5[0]) = 120;
  v5[8] = EtwpCloseRegistrationObject;
  LODWORD(v5[1]) = 256;
  v5[9] = EtwpDeleteRegistrationObject;
  *(GENERIC_MAPPING *)((char *)&v5[1] + 4) = EtwpGenericMapping;
  HIDWORD(v5[3]) = 2052;
  HIDWORD(v5[4]) = 512;
  HIDWORD(v5[5]) = 112;
  RtlInitUnicodeString(&DestinationString, L"EtwRegistration");
  return ObCreateObjectType(&DestinationString, (__int64)v5, 0LL, (__int64)&EtwpRegistrationObjectType);
}
