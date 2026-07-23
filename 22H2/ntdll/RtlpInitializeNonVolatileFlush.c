/*
 * XREFs of RtlpInitializeNonVolatileFlush @ 0x1800FBCB4
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D1D50 (LdrpInitializeProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtQuerySystemInformation @ 0x18009DBA0 (NtQuerySystemInformation.c)
 */

NTSTATUS RtlpInitializeNonVolatileFlush()
{
  NTSTATUS result; // eax
  char v1; // al
  _BYTE SystemInformation[4]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int32 v3; // [rsp+24h] [rbp-34h]
  char v4; // [rsp+28h] [rbp-30h]

  result = NtQuerySystemInformation(SystemFlushInformation, SystemInformation, 0x20u, 0LL);
  if ( result >= 0 )
  {
    v1 = RtlpIsFlushRequired;
    if ( (v4 & 1) != 0 )
      v1 = 0;
    RtlpIsFlushRequired = v1;
    if ( (SystemInformation[0] & 4) != 0 )
    {
      RtlpOptimalFlushMethod = 2;
    }
    else
    {
      if ( (SystemInformation[0] & 2) == 0 )
      {
LABEL_9:
        result = v3;
        RtlpClFlushSize = v3;
        return result;
      }
      RtlpOptimalFlushMethod = 3;
    }
    RtlpIsDrainRequired = 1;
    goto LABEL_9;
  }
  return result;
}
