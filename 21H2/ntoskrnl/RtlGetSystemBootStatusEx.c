/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x140791B70
 * Callers:
 *     PopCheckShutdownMarker @ 0x140A3A2E4 (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x140791C7C (RtlpSystemBootStatusRequest.c)
 */

__int64 __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2, __int64 a3)
{
  return RtlpSystemBootStatusRequest(31LL, a1, a2, a3);
}
