/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x14079A820
 * Callers:
 *     PopCheckShutdownMarker @ 0x140A447E0 (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x14079A92C (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2, __int64 a3)
{
  return RtlpSystemBootStatusRequest(31LL, a1, a2, a3);
}
