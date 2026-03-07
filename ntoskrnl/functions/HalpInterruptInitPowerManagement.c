__int64 HalpInterruptInitPowerManagement()
{
  ULONG_PTR *v0; // rdi
  unsigned int v1; // esi
  _DWORD v3[2]; // [rsp+28h] [rbp-19h] BYREF
  __int64 (__fastcall *v4)(); // [rsp+30h] [rbp-11h]
  void *v5; // [rsp+38h] [rbp-9h]
  __int64 (__fastcall *v6)(); // [rsp+40h] [rbp-1h]
  __int64 v7; // [rsp+48h] [rbp+7h]
  ULONG_PTR *v8; // [rsp+50h] [rbp+Fh]
  __int128 v9; // [rsp+58h] [rbp+17h]
  int v10; // [rsp+68h] [rbp+27h]
  int v11; // [rsp+6Ch] [rbp+2Bh]
  _QWORD *v12; // [rsp+70h] [rbp+2Fh]
  _QWORD v13[2]; // [rsp+78h] [rbp+37h] BYREF
  int v14; // [rsp+88h] [rbp+47h]
  int v15; // [rsp+8Ch] [rbp+4Bh]

  v15 = 0;
  v13[0] = 0LL;
  v13[1] = 0LL;
  v0 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  v1 = 0;
  v14 = 10;
  while ( v0 != &HalpRegisteredInterruptControllers )
  {
    v7 = 0LL;
    v11 = 0;
    v12 = v13;
    v3[0] = 1;
    v4 = HalpInterruptPowerComponentActiveCallback;
    v3[1] = 1;
    v5 = &HalpInterruptPowerComponentIdleCallback;
    v9 = 0LL;
    v6 = HalpInterruptPowerCriticalTransitionCallback;
    v10 = 1;
    v8 = v0;
    v1 = PoFxRegisterCoreDevice(v0 + 44, v3, v0 + 46);
    PoFxActivateComponent(v0[46], 0LL, 0);
    PoFxStartDevicePowerManagement(v0[46]);
    v0 = (ULONG_PTR *)*v0;
  }
  return v1;
}
