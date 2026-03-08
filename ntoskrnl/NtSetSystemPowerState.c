/*
 * XREFs of NtSetSystemPowerState @ 0x140AA36E0
 * Callers:
 *     NtShutdownSystem @ 0x1406044C0 (NtShutdownSystem.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 */

__int64 __fastcall NtSetSystemPowerState(int a1, int a2, int a3)
{
  _DWORD v7[96]; // [rsp+20h] [rbp-1A8h] BYREF

  memset(&v7[3], 0, 0x174uLL);
  v7[0] = a1;
  v7[1] = a2;
  v7[2] = a3;
  return PopTransitionSystemPowerStateEx(v7);
}
