/*
 * XREFs of HUBSM_AddDsmEvent @ 0x1C000A740
 * Callers:
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x1C0079918 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBPDO_EvtDeviceReleaseHardware @ 0x1C007CFF0 (HUBPDO_EvtDeviceReleaseHardware.c)
 *     HUBPDO_EvtDeviceResourceRequirementsQuery @ 0x1C007F1E0 (HUBPDO_EvtDeviceResourceRequirementsQuery.c)
 *     HUBPDO_EvtDeviceReportedMissing @ 0x1C007F3B0 (HUBPDO_EvtDeviceReportedMissing.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBSM_AddDsmEvent(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a1 + 504, a2);
}
