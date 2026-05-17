/*
 * XREFs of RtlpRecordBootStatusData @ 0x1800EE504
 * Callers:
 *     RtlRestoreBootStatusDefaults @ 0x1800EE040 (RtlRestoreBootStatusDefaults.c)
 *     RtlpGetSetBootStatusData @ 0x1800EE3D4 (RtlpGetSetBootStatusData.c)
 * Callees:
 *     NtPowerInformation @ 0x18009E0B0 (NtPowerInformation.c)
 */

__int64 RtlpRecordBootStatusData()
{
  return NtPowerInformation();
}
