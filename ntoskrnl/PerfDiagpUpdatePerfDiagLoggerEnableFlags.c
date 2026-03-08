/*
 * XREFs of PerfDiagpUpdatePerfDiagLoggerEnableFlags @ 0x14083C378
 * Callers:
 *     PerfDiagpProxyWorker @ 0x14083C130 (PerfDiagpProxyWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     NtTraceControl @ 0x140694040 (NtTraceControl.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 *     PerfDiagpInitializeLoggerInfo @ 0x14083C48C (PerfDiagpInitializeLoggerInfo.c)
 */

__int64 __fastcall PerfDiagpUpdatePerfDiagLoggerEnableFlags(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // ebx
  SIZE_T Length; // [rsp+20h] [rbp-79h]
  __int64 v6; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v7[14]; // [rsp+40h] [rbp-59h] BYREF
  _OWORD Src[3]; // [rsp+B0h] [rbp+17h] BYREF

  LODWORD(v6) = 0;
  memset(Src, 0, sizeof(Src));
  memset(v7, 0, sizeof(v7));
  LODWORD(v7[1]) = 32;
  v7[2] = a2;
  v7[3] = Src;
  LODWORD(v7[4]) = 3;
  LODWORD(Src[0]) = 48;
  result = RtlpQueryRegistryValues(2LL, L"Diagnostics\\Performance\\BootCKCLSettings", v7, 0LL);
  if ( (int)result >= 0 )
  {
    if ( DWORD1(Src[0]) == 3 )
    {
      v4 = Src[0];
      if ( LODWORD(Src[0]) > 0x28 )
      {
        return 3221225507LL;
      }
      else
      {
        memmove(&unk_140C32408, (char *)Src + 8, LODWORD(Src[0]));
        PerfDiagpInitializeLoggerInfo(1LL, v4 >> 2);
        LODWORD(Length) = dword_140C32350[0];
        return NtTraceControl(
                 4u,
                 (unsigned int *)dword_140C32350,
                 dword_140C32350[0],
                 (volatile signed __int64 *)dword_140C32350,
                 Length,
                 (unsigned __int64)&v6);
      }
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
