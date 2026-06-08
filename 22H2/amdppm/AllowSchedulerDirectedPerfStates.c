/*
 * XREFs of AllowSchedulerDirectedPerfStates @ 0x1C00020F4
 * Callers:
 *     InitDriver @ 0x1C003703C (InitDriver.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0001E90 (__security_check_cookie.c)
 *     GetCpuIdInfo @ 0x1C000EAA0 (GetCpuIdInfo.c)
 */

bool AllowSchedulerDirectedPerfStates()
{
  char v0; // bl
  __int128 v2; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  v2 = 0LL;
  GetCpuIdInfo(1LL, &v2);
  if ( (v2 & 0xF00) == 0xF00 )
    return (unsigned int)(unsigned __int8)((unsigned int)v2 >> 20) + 15 >= 0x17;
  return v0;
}
