__int64 __fastcall ACPIBuildProcessDevicePhaseHid(__int64 a1)
{
  __int64 v1; // rbx
  char v2; // r15
  const char *v3; // rax
  unsigned int v4; // edi
  unsigned int v5; // r14d
  const char *v7; // r12
  __int64 v8; // rbp
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  const char *v12; // rax
  const char *v13; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = 0;
  v3 = AcpiInternalDeviceFlagTable;
  v4 = 0;
  v5 = 0;
  v7 = *(const char **)(v1 + 608);
  if ( AcpiInternalDeviceFlagTable )
  {
    v8 = 0LL;
    while ( !strstr(v7, v3) )
    {
      v8 = ++v5;
      v3 = (&AcpiInternalDeviceFlagTable)[4 * v5];
      if ( !v3 )
        goto LABEL_7;
    }
    v9 = 4 * v8;
    _InterlockedOr64((volatile signed __int64 *)(v1 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v9 + 1]);
    _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v9 + 2]);
    v2 = 1;
  }
LABEL_7:
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x200000000000uLL);
  v10 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1145652063LL);
  if ( !v10 || v2 )
  {
    *(_DWORD *)(a1 + 32) = 10;
  }
  else
  {
    AMLIDereferenceHandleEx(v10);
    *(_DWORD *)(a1 + 32) = 9;
    v4 = ACPIGet(v1, 1145652063, 671613191, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, a1 + 128, 0LL);
  }
  v11 = *(_QWORD *)(v1 + 8);
  v12 = (const char *)&unk_1C00622D0;
  v13 = (const char *)&unk_1C00622D0;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v12 = *(const char **)(v1 + 608);
    if ( (v11 & 0x400000000000LL) != 0 )
      v13 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x28u,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v4,
      v1,
      v12,
      v13);
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return v4;
}
