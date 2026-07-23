/*
 * XREFs of PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x1407972F8
 * Callers:
 *     PerfDiagpProxyWorker @ 0x1407970B0 (PerfDiagpProxyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 *     RtlpQueryRegistryValues @ 0x1406B9848 (RtlpQueryRegistryValues.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x14079740C (PerfDiagpInitializeLoggerInfo.c)
 */

NTSTATUS __fastcall PerfDiagpUpdatePerfDiagLoggerEnableFlags(__int64 a1, __int64 a2)
{
  NTSTATUS result; // eax
  unsigned int v4; // ebx
  ULONG ReturnLength[4]; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v6[14]; // [rsp+40h] [rbp-59h] BYREF
  _OWORD Src[3]; // [rsp+B0h] [rbp+17h] BYREF

  ReturnLength[0] = 0;
  memset(Src, 0, sizeof(Src));
  memset(v6, 0, sizeof(v6));
  LODWORD(v6[1]) = 32;
  v6[2] = a2;
  v6[3] = Src;
  LODWORD(v6[4]) = 3;
  LODWORD(Src[0]) = 48;
  result = RtlpQueryRegistryValues(2LL, L"Diagnostics\\Performance\\BootCKCLSettings", (__int64)v6, 0LL);
  if ( result >= 0 )
  {
    if ( DWORD1(Src[0]) == 3 )
    {
      v4 = Src[0];
      if ( LODWORD(Src[0]) > 0x28 )
      {
        return -1073741789;
      }
      else
      {
        memmove(&unk_140C1A2E8, (char *)Src + 8, LODWORD(Src[0]));
        PerfDiagpInitializeLoggerInfo(1LL, v4 >> 2);
        return NtTraceControl(
                 EtwUpdateLoggerCode,
                 &OutputBuffer,
                 OutputBuffer,
                 &OutputBuffer,
                 OutputBuffer,
                 ReturnLength);
      }
    }
    else
    {
      return -1073741811;
    }
  }
  return result;
}
