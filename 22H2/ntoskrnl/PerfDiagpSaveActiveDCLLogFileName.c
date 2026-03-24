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
  _WORD *ValueData; // rbx
  unsigned __int16 v1; // cx
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  ValueData = ExAllocatePoolWithTag(PagedPool, 0x20AuLL, 0x64465250u);
  if ( ValueData )
  {
    memset(dword_140C1A230, 0, 0xB0uLL);
    wcscpy(&xmmword_140C1A20C, L"WdiContextLog");
    dword_140C1A25C = 0x20000;
    RtlInitUnicodeString(&DestinationString, &xmmword_140C1A20C);
    qword_140C1A2B8 = (__int64)ValueData;
    word_140C1A2B2 = 520;
    dword_140C1A230[0] = 176;
    if ( (int)NtTraceControl(3LL, dword_140C1A230, 0xB0u, dword_140C1A230, 0xB0u, &v2) < 0
      || (unsigned __int16)word_140C1A2B0 < 2u )
    {
      RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
    }
    else
    {
      v1 = (unsigned __int16)word_140C1A2B0 >> 1;
      ValueData[v1] = 0;
      RtlWriteRegistryValue(
        2u,
        L"Diagnostics\\Performance",
        L"ActiveShutdownDCL",
        1u,
        ValueData,
        2 * (unsigned __int16)(v1 + 1));
    }
    ExFreePoolWithTag(ValueData, 0);
  }
  else
  {
    RtlDeleteRegistryValue(2u, L"Diagnostics\\Performance", L"ActiveShutdownDCL");
  }
}
