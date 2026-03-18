/*
 * XREFs of HUBFDO_EvtDeviceArmWakeFromSx @ 0x1C000DE30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044B40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBFDO_EvtDeviceArmWakeFromSx(__int64 a1)
{
  _InterlockedOr(
    (volatile signed __int32 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015
                                                                                                + 1616))(
                                  WdfDriverGlobals,
                                  a1,
                                  off_1C0069198)
                              + 40),
    0x400u);
  return 0LL;
}
