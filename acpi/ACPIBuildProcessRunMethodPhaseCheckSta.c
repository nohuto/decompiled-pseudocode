__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckSta(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // r14
  char v3; // si
  int v5; // ebp
  const char *v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  const char *v9; // rcx
  const char *v10; // rcx
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r10
  __int64 v16; // rcx
  void *v17; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C00622D0;
  v3 = 0;
  *(_DWORD *)(a1 + 32) = 6;
  v5 = 0;
  v6 = *(const char **)(v1 + 1008);
  if ( ((unsigned __int8)v6 & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 648) && ((unsigned __int8)v6 & 0x40) == 0 )
      *(_DWORD *)(a1 + 20) |= 0x20u;
  }
  else
  {
    v7 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 760));
    dword_1C006F938 = 0;
    pszDest = 0;
    v5 = v7;
    FreeDataBuffs(a1 + 88, 1LL);
    if ( v5 >= 0 )
    {
      *(_DWORD *)(a1 + 20) |= 0x20u;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 0x20uLL);
    }
    else
    {
      v8 = *(_QWORD *)(v1 + 8);
      v6 = (const char *)&unk_1C00622D0;
      v9 = (const char *)&unk_1C00622D0;
      if ( (v8 & 0x200000000000LL) != 0 )
      {
        v6 = *(const char **)(v1 + 608);
        if ( (v8 & 0x400000000000LL) != 0 )
          v9 = *(const char **)(v1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x3Eu,
          (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
          v5,
          v1,
          v6,
          v9);
    }
  }
  if ( (*(_DWORD *)(a1 + 84) & 8) != 0 )
  {
    if ( (*(_DWORD *)(v1 + 1008) & 0x2000LL) != 0 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v1 + 1008), 0xFFFFFFFFFFFFCFFFuLL);
    }
    else if ( (unsigned __int8)ACPIDeviceHasFirmwareDependencies(v1, v6, 0x200000000000LL) )
    {
      *(_DWORD *)(a1 + 32) = 0;
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 0x1000uLL);
      v16 = *(_QWORD *)(v1 + 8);
      v17 = &unk_1C00622D0;
      if ( (v16 & v14) != 0 )
      {
        v2 = *(const char **)(v1 + 608);
        if ( (v16 & 0x400000000000LL) != 0 )
          v17 = *(void **)(v1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_qss(WPP_GLOBAL_Control->DeviceExtension, v13, 6, 63, v15, v1, (__int64)v2, (__int64)v17);
      }
      goto LABEL_19;
    }
  }
  if ( (*(_DWORD *)(a1 + 84) & 1) == 0 )
    goto LABEL_19;
  v5 = ACPIGet(v1, 1096045407, -1610348542, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, a1 + 128, 0LL);
  v10 = (const char *)&unk_1C00622D0;
  if ( v1 )
  {
    v11 = *(_QWORD *)(v1 + 8);
    v3 = v1;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v11 & 0x400000000000LL) != 0 )
        v10 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x40u,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v5,
      v3,
      v2,
      v10);
  result = 259LL;
  if ( v5 != 259 )
  {
LABEL_19:
    ACPIBuildCompleteMustSucceed(0LL, v5, 0LL, a1);
    return (unsigned int)v5;
  }
  return result;
}
