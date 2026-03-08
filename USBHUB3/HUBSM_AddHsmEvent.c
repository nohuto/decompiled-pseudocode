/*
 * XREFs of HUBSM_AddHsmEvent @ 0x1C000A6FC
 * Callers:
 *     HUBFDO_EvtDeviceAdd @ 0x1C0077680 (HUBFDO_EvtDeviceAdd.c)
 *     HUBFDO_EvtDevicePrepareHardware @ 0x1C0078890 (HUBFDO_EvtDevicePrepareHardware.c)
 *     HUBFDO_EvtDeviceReleaseHardware @ 0x1C0079370 (HUBFDO_EvtDeviceReleaseHardware.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x1C0079790 (HUBFDO_IoctlGetPortStatus.c)
 * Callees:
 *     HUBSM_AddEvent @ 0x1C000B8CC (HUBSM_AddEvent.c)
 */

__int64 __fastcall HUBSM_AddHsmEvent(__int64 a1, __int64 a2)
{
  return HUBSM_AddEvent(a1 + 1264, a2);
}
