void PpmEventEnergyEstimationRundown()
{
  __int64 v0; // rdx
  unsigned __int8 v1; // al
  __int64 v2; // rcx
  unsigned __int8 v3; // [rsp+30h] [rbp-9h] BYREF
  char v4; // [rsp+31h] [rbp-8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  char *v6; // [rsp+50h] [rbp+17h]
  int v7; // [rsp+58h] [rbp+1Fh]
  int v8; // [rsp+5Ch] [rbp+23h]
  __int64 v9; // [rsp+60h] [rbp+27h]
  int v10; // [rsp+68h] [rbp+2Fh]
  int v11; // [rsp+6Ch] [rbp+33h]
  __int64 v12; // [rsp+70h] [rbp+37h]
  int v13; // [rsp+78h] [rbp+3Fh]
  int v14; // [rsp+7Ch] [rbp+43h]

  v0 = PpmComputeEnergyData;
  if ( PpmComputeEnergyData )
  {
    v4 = 4;
    v3 = 0;
    if ( *(_BYTE *)PpmComputeEnergyData )
    {
      v1 = 0;
      do
      {
        UserData.Reserved = 0;
        v8 = 0;
        v11 = 0;
        v14 = 0;
        v2 = 56LL * v1;
        UserData.Size = 1;
        UserData.Ptr = (ULONGLONG)&v3;
        v6 = &v4;
        v7 = 1;
        v9 = v2 + v0 + 32;
        v10 = 16;
        v12 = v2 + v0 + 48;
        v13 = 16;
        EtwWrite(PpmEtwHandle, &PPM_ETW_ENERGY_ESTIMATION_FREQ_RUNDOWN, 0LL, 4u, &UserData);
        v0 = PpmComputeEnergyData;
        v1 = v3 + 1;
        v3 = v1;
      }
      while ( v1 < *(_BYTE *)PpmComputeEnergyData );
    }
  }
}
