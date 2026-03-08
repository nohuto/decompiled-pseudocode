/*
 * XREFs of VslpIumPhase4Initialize @ 0x1403AB65C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140B409E8 (IoInitSystemPreDrivers.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402D8270 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PoDisableSleepStates @ 0x140980FB0 (PoDisableSleepStates.c)
 *     VslpIumInitializeTelemetry @ 0x140B6E0BC (VslpIumInitializeTelemetry.c)
 */

__int64 VslpIumPhase4Initialize()
{
  __int64 result; // rax
  _BYTE v1[16]; // [rsp+30h] [rbp-98h] BYREF
  _DWORD v2[28]; // [rsp+40h] [rbp-88h] BYREF

  memset(v2, 0, 0x68uLL);
  result = VslpIumInitializeTelemetry();
  if ( VslVsmEnabled )
  {
    result = VslpEnterIumSecureMode(2u, 1, 0, (__int64)v2);
    if ( (int)result < 0 )
      KeBugCheckEx(0x6Fu, (int)result, 3uLL, 0LL, 0LL);
    if ( v2[4] < 0 )
      return PoDisableSleepStates(1LL, 8LL, v1);
  }
  return result;
}
