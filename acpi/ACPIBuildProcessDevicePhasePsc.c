__int64 __fastcall ACPIBuildProcessDevicePhasePsc(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // r14d
  int *v3; // r12
  const char *v4; // r15
  __int64 v5; // r13
  int v6; // edi
  __int64 **v7; // rcx
  __int64 i; // rdx
  __int64 *v9; // rax
  __int64 v10; // rax
  void *v11; // r8
  void *v12; // rdx
  __int64 v13; // rax
  unsigned int v14; // edi
  ULONG_PTR v15; // r9
  unsigned __int64 v16; // rax
  int v17; // edi
  __int64 v18; // rcx
  const char *v19; // rax
  signed __int32 v20; // edx
  __int64 v22; // [rsp+48h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 32;
  *(_QWORD *)(v1 + 488) = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 861098079LL);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v2 = 2;
  v3 = (int *)(v1 + 516);
  v4 = (const char *)&unk_1C00622D0;
  v5 = 4LL;
  do
  {
    v6 = 1;
    v7 = (__int64 **)(v1 + 416);
    for ( i = 1LL; i <= 3; ++i )
    {
      v9 = *v7;
      if ( *v7 )
      {
        while ( *((_DWORD *)v9 + 4) >= v2 )
        {
          v9 = (__int64 *)*v9;
          if ( !v9 )
          {
            v10 = *(_QWORD *)(v1 + 8);
            v11 = &unk_1C00622D0;
            v12 = &unk_1C00622D0;
            if ( (v10 & 0x200000000000LL) != 0 )
            {
              v11 = *(void **)(v1 + 608);
              if ( (v10 & 0x400000000000LL) != 0 )
                v12 = *(void **)(v1 + 616);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v22 = (__int64)v12;
              LOBYTE(v12) = 4;
              WPP_RECORDER_SF_ddqss(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)v12,
                6,
                45,
                (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
                v6 - 1,
                v2 - 1,
                v1,
                (__int64)v11,
                v22);
            }
            *v3 = v6;
            goto LABEL_12;
          }
        }
      }
      ++v6;
      ++v7;
    }
LABEL_12:
    ++v2;
    ++v3;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)(v1 + 540) = *(_DWORD *)(v1 + 4LL * *(int *)(v1 + 536) + 508);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  v13 = *(_QWORD *)(v1 + 8);
  v14 = 1;
  if ( (v13 & 0x80000000) != 0 )
  {
    v14 = 4;
  }
  else
  {
    v15 = *(_QWORD *)(a1 + 56);
    if ( v15 && *(int *)(a1 + 48) >= 0 )
    {
      if ( (v13 & 0x80000) != 0 )
      {
        dword_1C006F938 = 0;
        pszDest = 0;
        FreeDataBuffs(a1 + 80, 1LL);
        *(_DWORD *)(v1 + 384) = 1;
      }
      else
      {
        if ( *(_WORD *)(a1 + 82) != 1 )
          KeBugCheckEx(0xA5u, 8uLL, v1, v15, *(unsigned __int16 *)(a1 + 82));
        v16 = *(_QWORD *)(a1 + 96);
        if ( v16 < 4 )
          v14 = DevicePowerStateTranslation[v16];
        else
          v14 = 0;
        dword_1C006F938 = 0;
        pszDest = 0;
        FreeDataBuffs(a1 + 80, 1LL);
      }
    }
  }
  v17 = ACPIDeviceInternalDelayedDeviceRequest(v1, v14);
  v18 = *(_QWORD *)(v1 + 8);
  v19 = (const char *)&unk_1C00622D0;
  if ( (v18 & 0x200000000000LL) != 0 )
  {
    v4 = *(const char **)(v1 + 608);
    if ( (v18 & 0x400000000000LL) != 0 )
      v19 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x2Eu,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v17,
      v1,
      v4,
      v19);
  v20 = *(_DWORD *)(a1 + 32);
  if ( v17 < 0 )
    *(_DWORD *)(a1 + 48) = v17;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v20);
  return (unsigned int)v17;
}
