/*
 * XREFs of EtwpPsProvCaptureState @ 0x1409ECBF4
 * Callers:
 *     EtwpCrimsonProvEnableCallback @ 0x140798ED0 (EtwpCrimsonProvEnableCallback.c)
 *     EtwpTraceLoggingProvEnableCallback @ 0x1408613A0 (EtwpTraceLoggingProvEnableCallback.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x140244770 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PsEnumProcesses @ 0x1407809CC (PsEnumProcesses.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409ECC80 (EtwpPsProvProcessEnumCallback.c)
 */

BOOLEAN __fastcall EtwpPsProvCaptureState(__int64 *a1, unsigned __int64 a2)
{
  BOOLEAN v2; // bl
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  *(_DWORD *)((char *)&v4 + 9) = a1 == PsProvTraceLoggingGuid;
  v2 = IoSetThreadHardErrorMode(0);
  EtwpPsProvProcessEnumCallback((ULONG_PTR)PsIdleProcess);
  PsEnumProcesses((__int64 (__fastcall *)(__int64 *, __int64))EtwpPsProvProcessEnumCallback, (__int64)&v4);
  return IoSetThreadHardErrorMode(v2);
}
