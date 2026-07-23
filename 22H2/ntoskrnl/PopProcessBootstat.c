/*
 * XREFs of PopProcessBootstat @ 0x140A4477C
 * Callers:
 *     PoInitSystem @ 0x140A3ED78 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     PopTraceBootError @ 0x1405733B8 (PopTraceBootError.c)
 *     RtlGetSystemBootStatus @ 0x14079A7E0 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x14079A8F0 (RtlSetSystemBootStatus.c)
 *     PopCheckShutdownMarker @ 0x140A447E0 (PopCheckShutdownMarker.c)
 */

int PopProcessBootstat()
{
  int result; // eax
  __int128 DataBuffer; // [rsp+20h] [rbp-28h] BYREF
  int v2; // [rsp+30h] [rbp-18h]

  PopCheckShutdownMarker();
  v2 = 0;
  DataBuffer = 0LL;
  result = RtlGetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
  if ( result >= 0 )
  {
    if ( HIDWORD(DataBuffer) )
    {
      PopTraceBootError();
      v2 = 0;
      DataBuffer = 0LL;
      return RtlSetSystemBootStatus(RtlBsdItemErrorInfo, &DataBuffer, 0x14u, 0LL);
    }
  }
  return result;
}
