/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x14079740C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407970B0 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407972F8 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     memset @ 0x140413800 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(&OutputBuffer, 0, 0xB0uLL);
  dword_140C1A278 = -2130771792;
  dword_140C1A25C = 0x20000;
  wcscpy(&xmmword_140C1A20C, L"PerfDiag Logger");
  RtlInitUnicodeString(&DestinationString, &xmmword_140C1A20C);
  OutputBuffer = 180;
  dword_140C1A2E0 = 1;
  if ( a1 )
  {
    word_140C1A2E6 = 1;
    word_140C1A2E4 = a2 + 1;
    HIWORD(dword_140C1A2E0) = 1;
    LOWORD(dword_140C1A2E0) = a2 + 2;
    OutputBuffer = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
