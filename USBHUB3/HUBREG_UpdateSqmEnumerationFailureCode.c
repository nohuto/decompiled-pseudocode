/*
 * XREFs of HUBREG_UpdateSqmEnumerationFailureCode @ 0x1C0088774
 * Callers:
 *     HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess @ 0x1C0017920 (HUBPDO_EvtDeviceWdmIrpPnPPowerPreprocess.c)
 * Callees:
 *     HUBREG_WriteValueToDeviceHardwareKey @ 0x1C00867FC (HUBREG_WriteValueToDeviceHardwareKey.c)
 */

__int64 __fastcall HUBREG_UpdateSqmEnumerationFailureCode(__int64 a1)
{
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_DWORD *)(a1 + 2432);
  return HUBREG_WriteValueToDeviceHardwareKey(a1, (__int64)L",.", 4u, 4, (__int64)&v2);
}
