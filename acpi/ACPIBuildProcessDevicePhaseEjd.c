__int64 __fastcall ACPIBuildProcessDevicePhaseEjd(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  int v6; // esi
  __int64 v7; // rdx
  void *v8; // rax
  void *v9; // r8
  __int64 v10; // rdx
  const char *v11; // rax
  const char *v12; // r8
  signed __int32 v13; // edx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = a1 + 80;
  *(_DWORD *)(a1 + 32) = (*(_BYTE *)(v1 + 8) & 2) != 0 ? 16 : 26;
  if ( *(_QWORD *)(a1 + 56) )
  {
    dword_1C006F938 = 0;
    pszDest = 0;
    FreeDataBuffs(v3, 1LL);
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v4 = (_QWORD *)qword_1C006F448;
    v5 = (_QWORD *)(v1 + 848);
    if ( *(__int64 **)qword_1C006F448 != &AcpiUnresolvedEjectList )
      __fastfail(3u);
    *(_QWORD *)(v1 + 856) = qword_1C006F448;
    *v5 = &AcpiUnresolvedEjectList;
    *v4 = v5;
    qword_1C006F448 = v1 + 848;
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  if ( ACPIDockIsDockDevice() )
  {
    if ( !*((_BYTE *)AcpiInformation + 132) )
    {
      v7 = *(_QWORD *)(v1 + 8);
      v8 = &unk_1C00622D0;
      v9 = &unk_1C00622D0;
      if ( (v7 & 0x200000000000LL) != 0 )
      {
        v8 = *(void **)(v1 + 608);
        if ( (v7 & 0x400000000000LL) != 0 )
          v9 = *(void **)(v1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_qss(
          WPP_GLOBAL_Control->DeviceExtension,
          v7,
          6,
          38,
          (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
          v1,
          (__int64)v8,
          (__int64)v9);
      }
      KeBugCheckEx(0xA5u, 0xCuLL, v1, *(_QWORD *)(a1 + 56), 0LL);
    }
    KeAcquireSpinLockAtDpcLevel(&AcpiDeviceTreeLock);
    v6 = ACPIBuildDockExtension(*(_QWORD *)(v1 + 760));
    KeReleaseSpinLockFromDpcLevel(&AcpiDeviceTreeLock);
  }
  else
  {
    v6 = 0;
  }
  v10 = *(_QWORD *)(v1 + 8);
  v11 = (const char *)&unk_1C00622D0;
  v12 = (const char *)&unk_1C00622D0;
  if ( (v10 & 0x200000000000LL) != 0 )
  {
    v11 = *(const char **)(v1 + 608);
    if ( (v10 & 0x400000000000LL) != 0 )
      v12 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x27u,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v6,
      v1,
      v11,
      v12);
  v13 = *(_DWORD *)(a1 + 32);
  if ( v6 < 0 )
    *(_DWORD *)(a1 + 48) = v6;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), v13);
  return (unsigned int)v6;
}
