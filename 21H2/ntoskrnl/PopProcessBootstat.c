/*
 * XREFs of PopProcessBootstat @ 0x140A3A280
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PopTraceBootError @ 0x1405736B8 (PopTraceBootError.c)
 *     RtlGetSystemBootStatus @ 0x140791B30 (RtlGetSystemBootStatus.c)
 *     RtlSetSystemBootStatus @ 0x140791C40 (RtlSetSystemBootStatus.c)
 *     PopCheckShutdownMarker @ 0x140A3A2E4 (PopCheckShutdownMarker.c)
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
