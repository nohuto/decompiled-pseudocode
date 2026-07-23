/*
 * XREFs of VslpIumPhase4Initialize @ 0x1403CEF48
 * Callers:
 *     VslInitSystem @ 0x140A73D70 (VslInitSystem.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x1402840D0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     EtwRegisterClassicProvider @ 0x140762E20 (EtwRegisterClassicProvider.c)
 *     PoDisableSleepStates @ 0x1408E3D80 (PoDisableSleepStates.c)
 *     VslpIumInitializeTelemetry @ 0x140A73D90 (VslpIumInitializeTelemetry.c)
 */

__int64 VslpIumPhase4Initialize()
{
  __int64 result; // rax
  NTSTATUS v1; // eax
  __int64 v2; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v3[8]; // [rsp+38h] [rbp-90h] BYREF
  _DWORD v4[28]; // [rsp+40h] [rbp-88h] BYREF

  v2 = 0LL;
  memset(v4, 0, 0x68uLL);
  result = VslpIumInitializeTelemetry();
  if ( VslVsmEnabled )
  {
    v1 = VslpEnterIumSecureMode(2u, 1, 0, (__int64)v4);
    if ( v1 < 0 )
      KeBugCheckEx(0x6Fu, v1, 3uLL, 0LL, 0LL);
    if ( v4[4] < 0 )
      PoDisableSleepStates(1LL, 8LL, v3);
    return EtwRegisterClassicProvider(
             (unsigned int)VslpProfilingId,
             0,
             (unsigned int)VslpEtwClassicCallback,
             0,
             (__int64)&v2);
  }
  return result;
}
