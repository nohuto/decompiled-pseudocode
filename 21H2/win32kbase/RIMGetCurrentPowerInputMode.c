/*
 * XREFs of RIMGetCurrentPowerInputMode @ 0x1C00A21D8
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C00A20A0 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     ApiSetGetPowerTransitionsState @ 0x1C00A2238 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 */

__int64 RIMGetCurrentPowerInputMode()
{
  _DWORD v1[16]; // [rsp+20h] [rbp-58h] BYREF

  memset(v1, 0, sizeof(v1));
  ApiSetGetPowerTransitionsState(v1);
  if ( v1[7] )
    return 1LL;
  else
    return v1[8] != 0 ? 2 : 0;
}
