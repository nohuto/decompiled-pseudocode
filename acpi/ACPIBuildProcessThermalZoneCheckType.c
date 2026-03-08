/*
 * XREFs of ACPIBuildProcessThermalZoneCheckType @ 0x1C00124A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BCB0 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDelayedDependencyRequest @ 0x1C000BD28 (ACPIBuildDelayedDependencyRequest.c)
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00146C0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     ACPIGet @ 0x1C0029384 (ACPIGet.c)
 *     AMLIDereferenceHandleEx @ 0x1C0047B40 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C0048698 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C004B50C (FreeDataBuffs.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZoneCheckType(__int64 a1)
{
  __int64 v1; // rdi
  const char *v2; // r14
  ULONG_PTR v4; // rbp
  __int64 v5; // rax
  const char **v6; // r15
  int v7; // eax
  int v8; // r12d
  __int64 v9; // rcx
  const char *v10; // r8
  const char *v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rbx
  char *Pool2; // rax
  __int64 v15; // rax
  const char *v16; // r8
  const char *v17; // rdx
  _DWORD *v18; // rax
  __int64 v19; // rax
  const char *v20; // rdx
  const char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  char v24; // al
  unsigned int v25; // eax
  char v26; // al
  __int64 v27; // rcx
  const char *v28; // rax

  v1 = *(_QWORD *)(a1 + 40);
  v2 = (const char *)&unk_1C00622D0;
  v4 = 0LL;
  v5 = *(_QWORD *)(v1 + 1008);
  v6 = (const char **)(v1 + 608);
  if ( (v5 & 0x20) != 0 )
  {
    if ( *(_QWORD *)(v1 + 648) && (v5 & 0x40) == 0 )
      *(_DWORD *)(a1 + 20) |= 0x20u;
  }
  else
  {
    v7 = ACPIVerifyAndCopyFirmwareDependencies(*(_QWORD *)(v1 + 760));
    dword_1C006F938 = 0;
    pszDest = 0;
    v8 = v7;
    FreeDataBuffs(a1 + 80, 1LL);
    if ( v8 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 0x20uLL);
      *(_DWORD *)(a1 + 20) |= 0x20u;
    }
    else
    {
      v9 = *(_QWORD *)(v1 + 8);
      v10 = (const char *)&unk_1C00622D0;
      v11 = (const char *)&unk_1C00622D0;
      if ( (v9 & 0x200000000000LL) != 0 )
      {
        v10 = *v6;
        if ( (v9 & 0x400000000000LL) != 0 )
          v11 = *(const char **)(v1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x4Cu,
          (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
          v8,
          v1,
          v10,
          v11);
    }
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
    return (unsigned int)ACPIBuildDelayedDependencyRequest(a1, (__int64)&AcpiBuildThermalZoneList);
  }
  else
  {
    v13 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1145653343LL);
    if ( v13 )
    {
      v22 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1145656671LL);
      v23 = *(_QWORD *)(a1 + 56);
      v4 = v22;
      if ( v22 )
      {
        *(_DWORD *)(a1 + 32) = 6;
        if ( v23 )
          AMLIDereferenceHandleEx(v23);
        v24 = gdwfAMLI;
        *(_QWORD *)(a1 + 56) = v4;
        dword_1C006F938 = 0;
        pszDest = 0;
        if ( (v24 & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
        v25 = ACPIGet(v1, 1145656671, 671613062, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 616, 0LL);
      }
      else
      {
        *(_DWORD *)(a1 + 32) = 7;
        if ( v23 )
          AMLIDereferenceHandleEx(v23);
        v26 = gdwfAMLI;
        *(_QWORD *)(a1 + 56) = v13;
        dword_1C006F938 = 0;
        pszDest = 0;
        if ( (v26 & 4) != 0 )
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 8));
        v4 = v13;
        v25 = ACPIGet(v1, 1145653343, 671612966, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 608, 0LL);
      }
      v12 = v25;
    }
    else
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x20000uLL);
      Pool2 = (char *)ExAllocatePool2(64LL, 17LL, 1399874369LL);
      *v6 = Pool2;
      if ( Pool2 )
      {
        strcpy(Pool2, "ACPI\\ThermalZone");
        v18 = (_DWORD *)ExAllocatePool2(64LL, 5LL, 1399874369LL);
        *(_QWORD *)(v1 + 616) = v18;
        if ( v18 )
        {
          *v18 = *(_DWORD *)(**(_QWORD **)(v1 + 760) + 40LL);
          *(_BYTE *)(*(_QWORD *)(v1 + 616) + 4LL) = 0;
          _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x1E00000000000uLL);
          *(_DWORD *)(a1 + 32) = 0;
          v12 = 0;
        }
        else
        {
          v19 = *(_QWORD *)(v1 + 8);
          v20 = (const char *)&unk_1C00622D0;
          v21 = (const char *)&unk_1C00622D0;
          if ( (v19 & 0x200000000000LL) != 0 )
          {
            v20 = *v6;
            if ( (v19 & 0x400000000000LL) != 0 )
              v21 = *(const char **)(v1 + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_dqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              6u,
              0x4Eu,
              (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
              5,
              v1,
              v20,
              v21);
          v12 = -1073741670;
        }
      }
      else
      {
        v15 = *(_QWORD *)(v1 + 8);
        v16 = (const char *)&unk_1C00622D0;
        v17 = (const char *)&unk_1C00622D0;
        if ( (v15 & 0x200000000000LL) != 0 )
        {
          v16 = 0LL;
          if ( (v15 & 0x400000000000LL) != 0 )
            v17 = *(const char **)(v1 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            6u,
            0x4Du,
            (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
            17,
            v1,
            v16,
            v17);
        v12 = -1073741670;
      }
    }
    v27 = *(_QWORD *)(v1 + 8);
    v28 = (const char *)&unk_1C00622D0;
    if ( (v27 & 0x200000000000LL) != 0 )
    {
      v2 = *v6;
      if ( (v27 & 0x400000000000LL) != 0 )
        v28 = *(const char **)(v1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        6u,
        0x4Fu,
        (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
        v12,
        v1,
        v2,
        v28);
    if ( v12 == 259 )
      v12 = 0;
    else
      ACPIBuildCompleteMustSucceed(v4, v12, 0LL, a1);
    if ( v4 )
      AMLIDereferenceHandleEx(v4);
  }
  return v12;
}
