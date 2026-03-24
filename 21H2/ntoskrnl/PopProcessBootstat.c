/*
 * XREFs of PopProcessBootstat @ 0x140A39280
 * Callers:
 *     PoInitSystem @ 0x140A3F948 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PopTraceBootError @ 0x140573478 (PopTraceBootError.c)
 *     RtlGetSystemBootStatus @ 0x140790580 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x140790690 (RtlSetSystemBootStatus.c)
 *     PopCheckShutdownMarker @ 0x140A392E4 (PopCheckShutdownMarker.c)
 */

__int64 PopProcessBootstat()
{
  __int64 result; // rax
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+30h] [rbp-18h]

  PopCheckShutdownMarker();
  v2 = 0;
  v1 = 0LL;
  result = RtlGetSystemBootStatus(13, (__int64)&v1, 20, 0LL);
  if ( (int)result >= 0 )
  {
    if ( HIDWORD(v1) )
    {
      PopTraceBootError();
      v2 = 0;
      v1 = 0LL;
      return RtlSetSystemBootStatus(13, (__int64)&v1, 20, 0LL);
    }
  }
  return result;
}
