/*
 * XREFs of PopUpdateBackgroundCoolingStatus @ 0x140860F88
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140B45CAC (PoInitSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 */

__int64 __fastcall PopUpdateBackgroundCoolingStatus(char a1)
{
  BOOL v2; // [rsp+40h] [rbp-28h] BYREF
  __int64 v3; // [rsp+48h] [rbp-20h] BYREF

  v3 = WNF_EXEC_THERMAL_LIMITER_TERMINATE_BACKGROUND_TASKS;
  v2 = a1 != 0;
  return ZwUpdateWnfStateData((__int64)&v3, (__int64)&v2);
}
