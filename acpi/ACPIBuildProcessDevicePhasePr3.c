__int64 __fastcall ACPIBuildProcessDevicePhasePr3(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v2; // rbp
  unsigned int v3; // r14d
  __int64 v5; // rax
  _QWORD *v6; // rsi
  ULONG_PTR v7; // rdx
  unsigned int v8; // eax
  unsigned int v10; // edx
  ULONG_PTR v11; // rcx
  int v12; // eax
  const char *v13; // rax
  __int64 v14; // rdx
  const char *v15; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  v3 = 0;
  if ( *(_QWORD *)(v1 + 488) || *(_QWORD *)(v1 + 440) )
  {
    v6 = (_QWORD *)(a1 + 56);
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_12;
    dword_1C006F938 = 0;
    pszDest = 0;
    goto LABEL_11;
  }
  v5 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 861098079LL);
  *(_QWORD *)(v1 + 488) = v5;
  if ( !v5 )
    *(_QWORD *)(v1 + 488) = *(_QWORD *)(v1 + 480);
  v6 = (_QWORD *)(a1 + 56);
  v7 = *(_QWORD *)(a1 + 56);
  if ( v7 )
  {
    if ( *(_WORD *)(v2 + 2) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_12;
    }
    v8 = ACPIBuildDevicePowerNodes(v1, v7, v2, 4);
    dword_1C006F938 = 0;
    v3 = v8;
    pszDest = 0;
LABEL_11:
    FreeDataBuffs(v2, 1LL);
  }
LABEL_12:
  if ( (*(_DWORD *)(a1 + 20) & 0x20) != 0 )
  {
    *(_DWORD *)(a1 + 28) = 5;
    return ACPIBuildDelayedDependencyRequest(a1, (__int64)&AcpiBuildDeviceList);
  }
  if ( (*(_DWORD *)(v1 + 1008) & 0x400040) == 0 )
  {
    v10 = 0;
    v11 = v1 + 408;
    while ( !*(_QWORD *)v11 || !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL) + 96LL) )
    {
      ++v10;
      v11 += 8LL;
      if ( v10 > 4 )
        goto LABEL_20;
    }
    _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 0x400000uLL);
    *(_DWORD *)(a1 + 20) |= 0x20u;
    return ACPIBuildDelayedDependencyRequest(a1, (__int64)&AcpiBuildDeviceList);
  }
LABEL_20:
  if ( (*(_BYTE *)(v1 + 8) & 2) != 0 )
  {
    if ( *v6 )
      AMLIDereferenceHandleEx(*v6);
    *v6 = 0LL;
    v12 = 31;
  }
  else
  {
    v12 = 30;
  }
  *(_DWORD *)(a1 + 32) = v12;
  v13 = (const char *)&unk_1C00622D0;
  v14 = *(_QWORD *)(v1 + 8);
  v15 = (const char *)&unk_1C00622D0;
  if ( (v14 & 0x200000000000LL) != 0 )
  {
    v13 = *(const char **)(v1 + 608);
    if ( (v14 & 0x400000000000LL) != 0 )
      v15 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x2Au,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v3,
      v1,
      v13,
      v15);
  ACPIBuildCompleteMustSucceed(0LL, v3, 0LL, a1);
  return v3;
}
