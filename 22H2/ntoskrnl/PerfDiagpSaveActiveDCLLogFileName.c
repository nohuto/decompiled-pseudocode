/*
 * XREFs of PerfDiagpSaveActiveDCLLogFileName @ 0x14092FC18
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407970B0 (PerfDiagpProxyWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     memset @ 0x140413800 (memset.c)
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 *     RtlWriteRegistryValue @ 0x1406978F0 (RtlWriteRegistryValue.c)
 *     RtlDeleteRegistryValue @ 0x140781720 (RtlDeleteRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

void PerfDiagpSaveActiveDCLLogFileName()
{
  _WORD *PoolWithTag; // rbx
  unsigned __int16 v1; // cx
  ULONG ReturnLength; // [rsp+40h] [rbp+8h] BYREF

  ReturnLength = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20AuLL, 0x64465250u);
  if ( PoolWithTag )
  {
    memset(&OutputBuffer, 0, 0xB0uLL);
    wcscpy(&xmmword_140C1A20C, L"WdiContextLog");
    dword_140C1A25C = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_140C1A20C);
    qword_140C1A2B8 = (__int64)PoolWithTag;
    word_140C1A2B2 = 520;
    OutputBuffer = 176;
    if ( NtTraceControl(EtwQueryLoggerCode, &OutputBuffer, 0xB0u, &OutputBuffer, 0xB0u, &ReturnLength) < 0
      || (unsigned __int16)word_140C1A2B0 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_140C1A2B0 >> 1;
      PoolWithTag[v1] = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        PoolWithTag,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(PoolWithTag, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
