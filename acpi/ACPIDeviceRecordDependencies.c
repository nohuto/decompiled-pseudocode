__int64 __fastcall ACPIDeviceRecordDependencies(_QWORD *a1)
{
  _QWORD *v1; // rdi
  _QWORD *v3; // rcx
  __int64 v4; // rdx
  _QWORD *v5; // rbp
  _QWORD **v6; // rsi
  __int64 v7; // r14
  _QWORD v9[7]; // [rsp+20h] [rbp-58h] BYREF

  v1 = (_QWORD *)*a1;
  v9[0] = &AcpiPowerPhase0List;
  v3 = v1;
  v9[1] = &AcpiPowerBlockedOnDependencyList;
  v9[2] = &AcpiPowerPhase1List;
  v9[3] = &AcpiPowerPhase2List;
  v9[4] = &AcpiPowerPhase3List;
  v9[5] = &AcpiPowerPhase4List;
  v9[6] = &AcpiPowerPhase5List;
  if ( v1 != a1 )
  {
    do
    {
      v4 = v3[5];
      if ( !*(_QWORD *)(v4 + 784)
        && (*(_QWORD *)(v4 + 648) || (*(_DWORD *)(v4 + 1008) & 0x400000) != 0)
        && (*(_QWORD *)(v4 + 8) & 0xA00000000000LL) == 0 )
      {
        *((_DWORD *)v3 + 14) |= 0x4000000u;
      }
      v3 = (_QWORD *)*v3;
    }
    while ( v3 != a1 );
    do
    {
      v5 = (_QWORD *)*v1;
      ACPIDeviceDiscoverDependencies(v1, a1);
      v6 = (_QWORD **)v9;
      v7 = 7LL;
      do
      {
        ACPIDeviceDiscoverDependencies(v1, *v6++);
        --v7;
      }
      while ( v7 );
      v1 = v5;
    }
    while ( v5 != a1 );
  }
  return ACPIPowerNodeDiscoverDependencies(a1);
}
