/*
 * XREFs of RtlGetSystemBootStatusEx @ 0x140858A10
 * Callers:
 *     PopCheckShutdownMarker @ 0x140B6B05C (PopCheckShutdownMarker.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x14073AEEC (RtlpSystemBootStatusRequest.c)
 */

NTSTATUS __fastcall RtlGetSystemBootStatusEx(__int64 a1, unsigned int a2, void *a3)
{
  return RtlpSystemBootStatusRequest(31, a1, a2, a3);
}
