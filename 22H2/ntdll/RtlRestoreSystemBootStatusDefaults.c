/*
 * XREFs of RtlRestoreSystemBootStatusDefaults @ 0x1800EE170
 * Callers:
 *     <none>
 * Callees:
 *     NtPowerInformation @ 0x18009E0B0 (NtPowerInformation.c)
 */

__int64 RtlRestoreSystemBootStatusDefaults()
{
  return NtPowerInformation();
}
