/*
 * XREFs of PerfDiagpInitializeLoggerInfo @ 0x14083C48C
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14083C130 (PerfDiagpProxyWorker.c)
 *     PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14083C378 (PerfDiagpUpdatePerfDiagLoggerEnableFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

void __fastcall PerfDiagpInitializeLoggerInfo(int a1, __int16 a2)
{
  memset(dword_140C32350, 0, 0xB0uLL);
  dword_140C32398 = -2130771792;
  dword_140C3237C = 0x20000;
  wcscpy(&xmmword_140C3232C, L"PerfDiag Logger");
  RtlInitUnicodeString(&DestinationString, &xmmword_140C3232C);
  LODWORD(dword_140C32350[0]) = 180;
  dword_140C32400 = 1;
  if ( a1 )
  {
    word_140C32406 = 1;
    word_140C32404 = a2 + 1;
    HIWORD(dword_140C32400) = 1;
    LOWORD(dword_140C32400) = a2 + 2;
    LODWORD(dword_140C32350[0]) = 4 * (unsigned __int16)(a2 + 1) + 180;
  }
}
