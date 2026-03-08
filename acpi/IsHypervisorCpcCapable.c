/*
 * XREFs of IsHypervisorCpcCapable @ 0x1C0094B98
 * Callers:
 *     ACPIRootInitialize @ 0x1C0093768 (ACPIRootInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00019D0 (__security_check_cookie.c)
 */

bool IsHypervisorCpcCapable()
{
  char v0; // bl
  __int128 SystemInformation; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  SystemInformation = 0LL;
  if ( ZwQuerySystemInformation(SystemHypervisorInformation, &SystemInformation, 0x10u, 0LL) >= 0 )
    return (WORD4(SystemInformation) & 0x400) != 0LL;
  return v0;
}
