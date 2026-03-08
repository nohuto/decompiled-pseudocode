/*
 * XREFs of EtwpInitializeCoverageSampler @ 0x140B70C24
 * Callers:
 *     EtwpInitialize @ 0x140B3CA40 (EtwpInitialize.c)
 * Callees:
 *     ExInitializePushLock @ 0x140238200 (ExInitializePushLock.c)
 *     ExRundownCompleted @ 0x140294280 (ExRundownCompleted.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ExWaitForRundownProtectionRelease @ 0x140352F40 (ExWaitForRundownProtectionRelease.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     ObCreateObjectType @ 0x14080CB00 (ObCreateObjectType.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14080F6BC (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

__int64 EtwpInitializeCoverageSampler()
{
  __int64 result; // rax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-39h] BYREF
  _QWORD v2[16]; // [rsp+40h] [rbp-29h] BYREF

  DestinationString = 0LL;
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C066E0, 0LL, 0LL);
  EtwpCovSampGlobals = 0LL;
  ExInitializePushLock(&stru_140C31880);
  ExWaitForRundownProtectionRelease(&stru_140C31880);
  ExRundownCompleted(&stru_140C31880);
  RtlInitUnicodeString(&DestinationString, L"CoverageSampler");
  memset(v2, 0, 0x78uLL);
  BYTE2(v2[0]) |= 4u;
  v2[8] = EtwpCoverageSamplerClose;
  LOWORD(v2[0]) = 120;
  v2[9] = EtwpCoverageSamplerDelete;
  HIDWORD(v2[4]) = 1;
  LODWORD(v2[5]) = 1736;
  LODWORD(v2[1]) = 402;
  HIDWORD(v2[3]) = 2031617;
  result = ObCreateObjectType(&DestinationString, (__int64)v2, 0LL, (__int64)&qword_140C31870);
  if ( (int)result < 0 )
    KeBugCheckEx(0x5Eu, 0xC0uLL, 0LL, 0LL, 0LL);
  return result;
}
