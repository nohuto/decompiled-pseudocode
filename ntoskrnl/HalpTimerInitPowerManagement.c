/*
 * XREFs of HalpTimerInitPowerManagement @ 0x1403931E8
 * Callers:
 *     HalpTimerInitSystem @ 0x1403776D0 (HalpTimerInitSystem.c)
 * Callees:
 *     PoFxActivateComponent @ 0x140305CE0 (PoFxActivateComponent.c)
 *     PoFxStartDevicePowerManagement @ 0x140393C70 (PoFxStartDevicePowerManagement.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PoFxRegisterCoreDevice @ 0x140836AB0 (PoFxRegisterCoreDevice.c)
 */

__int64 HalpTimerInitPowerManagement()
{
  ULONG_PTR v0; // rbx
  unsigned int v1; // edi
  __int64 v2; // rcx
  ULONG_PTR *v3; // rsi
  _DWORD v5[2]; // [rsp+28h] [rbp-19h] BYREF
  void (*v6)(); // [rsp+30h] [rbp-11h]
  __int64 (__fastcall *v7)(); // [rsp+38h] [rbp-9h]
  __int64 (__fastcall *v8)(); // [rsp+40h] [rbp-1h]
  __int64 v9; // [rsp+48h] [rbp+7h]
  ULONG_PTR v10; // [rsp+50h] [rbp+Fh]
  __int128 v11; // [rsp+58h] [rbp+17h]
  int v12; // [rsp+68h] [rbp+27h]
  int v13; // [rsp+6Ch] [rbp+2Bh]
  _QWORD *v14; // [rsp+70h] [rbp+2Fh]
  _QWORD v15[2]; // [rsp+78h] [rbp+37h] BYREF
  int v16; // [rsp+88h] [rbp+47h]
  int v17; // [rsp+8Ch] [rbp+4Bh]

  v17 = 0;
  v15[0] = 0LL;
  v15[1] = 0LL;
  v0 = HalpRegisteredTimers;
  v1 = 0;
  v16 = 10;
  while ( (ULONG_PTR *)v0 != &HalpRegisteredTimers )
  {
    v2 = *(_QWORD *)(v0 + 288);
    v9 = 0LL;
    v13 = 0;
    v14 = v15;
    v6 = xHalTimerWatchdogStop;
    v3 = (ULONG_PTR *)(v2 + 40);
    v11 = 0LL;
    v7 = HalpTimerPowerComponentIdleCallback;
    v5[0] = 1;
    v8 = HalpTimerPowerCriticalTransitionCallback;
    v5[1] = 1;
    v12 = 1;
    v10 = v0;
    v1 = PoFxRegisterCoreDevice(v2 + 24, v5, v2 + 40);
    if ( (*(_DWORD *)(v0 + 184) & 5) == 4 )
      PoFxActivateComponent(*v3, 0LL, 0);
    PoFxStartDevicePowerManagement(*v3);
    v0 = *(_QWORD *)v0;
  }
  return v1;
}
