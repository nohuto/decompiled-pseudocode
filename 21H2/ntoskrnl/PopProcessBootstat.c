/*
 * XREFs of PopProcessBootstat @ 0x140B2C0C0
 * Callers:
 *     PoInitSystem @ 0x140B026CC (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopTraceBootError @ 0x1405D3C64 (PopTraceBootError.c)
 *     RtlSetSystemBootStatus @ 0x1407EDAF0 (RtlSetSystemBootStatus.c)
 *     RtlGetSystemBootStatus @ 0x14085F000 (RtlGetSystemBootStatus.c)
 *     PopCheckShutdownMarker @ 0x140B2C124 (PopCheckShutdownMarker.c)
 */

NTSTATUS PopProcessBootstat()
{
  NTSTATUS result; // eax
  __int128 v1; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+30h] [rbp-18h]

  PopCheckShutdownMarker();
  v2 = 0;
  v1 = 0LL;
  result = RtlGetSystemBootStatus(13, (__int64)&v1, 20, 0LL);
  if ( result >= 0 )
  {
    if ( HIDWORD(v1) )
    {
      PopTraceBootError();
      v2 = 0;
      v1 = 0LL;
      return RtlSetSystemBootStatus(13, (__int64)&v1, 20);
    }
  }
  return result;
}
