/*
 * XREFs of PopSetupAirplaneModeNotification @ 0x140865EF0
 * Callers:
 *     PoInitSystem @ 0x140B50B30 (PoInitSystem.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1407DB2B0 (ExSubscribeWnfStateChange.c)
 */

__int64 PopSetupAirplaneModeNotification()
{
  char v1; // [rsp+40h] [rbp+8h] BYREF

  return ExSubscribeWnfStateChange(
           (__int64)&v1,
           (__int64)&WNF_SRC_SYSTEM_RADIO_CHANGED,
           1,
           0,
           (__int64)PopWnfAirplaneModeCallback,
           0LL);
}
