char PpmCheckComputeEnergy()
{
  unsigned int *v0; // rdx
  unsigned int v1; // r8d
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // edi
  __int64 Prcb; // rax
  __int64 v6; // r11
  unsigned __int8 v7; // al
  __int64 v8; // rbx
  unsigned int v9; // edx
  __int64 v10; // r10
  int CurrentFrequency; // eax
  __int64 v12; // r10
  __int64 v13; // rbx
  unsigned int i; // edi
  __int64 v15; // rsi
  REGHANDLE v16; // r14
  __int64 v17; // rax
  unsigned int v19; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+38h] [rbp-38h] BYREF
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-28h] BYREF
  __int64 *v23; // [rsp+58h] [rbp-18h]
  __int64 v24; // [rsp+60h] [rbp-10h]

  v20 = 0LL;
  *(_DWORD *)((char *)&v23 + 2) = 0;
  HIWORD(v23) = 0;
  v19 = 0;
  if ( PopComputeEnergy )
  {
    v0 = (unsigned int *)PpmComputeEnergyData;
    if ( PpmComputeEnergyData )
    {
      v1 = 0;
      if ( *(_DWORD *)PpmComputeEnergyData )
      {
        do
        {
          v2 = v1++;
          v3 = 14 * v2;
          v0[v3 + 3] = 64;
          *(_QWORD *)&v0[v3 + 4] = 0LL;
          *(_QWORD *)&v0[v3 + 6] = 0LL;
        }
        while ( v1 < *v0 );
      }
      *(_QWORD *)&UserData.Size = qword_140D1EFE8;
      UserData.Ptr = (ULONGLONG)&KeActiveProcessors;
      LOWORD(v23) = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v19, &UserData) )
      {
        v4 = v19;
        Prcb = KeGetPrcb(v19);
        v6 = Prcb;
        if ( KeHeteroSystem )
          v7 = *(_BYTE *)(Prcb + 34056);
        else
          v7 = *(_BYTE *)(Prcb + 34059);
        v8 = PpmComputeEnergyData;
        v9 = *(_DWORD *)PpmComputeEnergyData - 1;
        if ( (unsigned int)v7 < *(_DWORD *)PpmComputeEnergyData )
          v9 = v7;
        if ( v9 < *(_DWORD *)PpmComputeEnergyData )
        {
          v10 = 56LL * v9;
          *(_DWORD *)(v10 + PpmComputeEnergyData + 12) = v4;
          *(_QWORD *)(v10 + v8 + 16) += *(_QWORD *)(v6 + 34072);
          *(_QWORD *)(v10 + v8 + 24) += *(_QWORD *)(v6 + 34080);
          CurrentFrequency = PpmPerfGetCurrentFrequency(v6, 0LL);
          *(_DWORD *)(v12 + v8 + 8) = CurrentFrequency;
        }
        *(_QWORD *)(v6 + 34072) = 0LL;
        *(_QWORD *)(v6 + 34080) = 0LL;
      }
      v13 = PpmComputeEnergyData;
      for ( i = 0; i < *(_DWORD *)PpmComputeEnergyData; ++i )
      {
        v15 = 56LL * i;
        if ( *(_DWORD *)(v15 + v13 + 12) != 64 )
        {
          ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, __int64 *))PopComputeEnergy)(
            i,
            *(_QWORD *)(v15 + v13 + 16),
            *(_QWORD *)(v15 + v13 + 24),
            *(unsigned int *)(v15 + v13 + 8),
            &v20);
          v21 = v20;
          v19 = i;
          if ( PpmEtwRegistered )
          {
            v16 = PpmEtwHandle;
            if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_COMPUTE_ENERGY) )
            {
              *(_QWORD *)&UserData.Size = 4LL;
              UserData.Ptr = (ULONGLONG)&v19;
              v24 = 8LL;
              v23 = &v21;
              EtwWrite(v16, &PPM_ETW_COMPUTE_ENERGY, 0LL, 2u, &UserData);
            }
          }
          v17 = KeGetPrcb(*(unsigned int *)(v15 + v13 + 12));
          *(_QWORD *)(v17 + 34064) += v20;
        }
        v13 = PpmComputeEnergyData;
      }
    }
  }
  return 1;
}
