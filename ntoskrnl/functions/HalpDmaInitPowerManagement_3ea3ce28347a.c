__int64 HalpDmaInitPowerManagement()
{
  __int64 v0; // rdi
  unsigned int v1; // esi
  int v3; // eax
  ULONG_PTR v4; // rcx
  _QWORD v5[10]; // [rsp+28h] [rbp-19h] BYREF
  _QWORD v6[2]; // [rsp+78h] [rbp+37h] BYREF
  int v7; // [rsp+88h] [rbp+47h]
  int v8; // [rsp+8Ch] [rbp+4Bh]

  v8 = 0;
  v6[0] = 0LL;
  v6[1] = 0LL;
  v0 = HalpDmaControllers;
  v1 = 0;
  v7 = 10;
  while ( (__int64 *)v0 != &HalpDmaControllers )
  {
    memset(v5, 0, sizeof(v5));
    v5[0] = 0x100000001LL;
    v5[9] = v6;
    v5[3] = HalpDmaPowerCriticalTransitionCallback;
    LODWORD(v5[8]) = 1;
    v5[5] = v0;
    v3 = PoFxRegisterCoreDevice(v0 + 192, v5, v0 + 208);
    if ( v3 < 0 )
      v1 = v3;
    PoFxActivateComponent(*(_QWORD *)(v0 + 208), 0LL, 1);
    v4 = *(_QWORD *)(v0 + 208);
    *(_BYTE *)(v0 + 216) = 1;
    PoFxStartDevicePowerManagement(v4);
    v0 = *(_QWORD *)v0;
  }
  return v1;
}
