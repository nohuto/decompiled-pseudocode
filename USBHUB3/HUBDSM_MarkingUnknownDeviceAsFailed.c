/*
 * XREFs of HUBDSM_MarkingUnknownDeviceAsFailed @ 0x1C00234E0
 * Callers:
 *     <none>
 * Callees:
 *     HUBPDO_ReportDeviceFailure @ 0x1C001B588 (HUBPDO_ReportDeviceFailure.c)
 */

__int64 __fastcall HUBDSM_MarkingUnknownDeviceAsFailed(__int64 a1)
{
  HUBPDO_ReportDeviceFailure(*(__int64 **)(a1 + 960));
  return 4077LL;
}
