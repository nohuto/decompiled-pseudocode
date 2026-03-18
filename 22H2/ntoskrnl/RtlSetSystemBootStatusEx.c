/*
 * XREFs of RtlSetSystemBootStatusEx @ 0x1409BDD60
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     RtlpSystemBootStatusRequest @ 0x1407A6A9C (RtlpSystemBootStatusRequest.c)
 */

NTSTATUS __fastcall RtlSetSystemBootStatusEx(__int64 a1, unsigned int a2, void *a3)
{
  return RtlpSystemBootStatusRequest(32, a1, a2, a3);
}
