/*
 * XREFs of ACPIBuildProcessThermalZonePep @ 0x1C0012CA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BCB0 (ACPIBuildCompleteMustSucceed.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C0037A5C (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 __fastcall ACPIBuildProcessThermalZonePep(__int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // rsi
  int v4; // edi
  __int64 v5; // rax
  const char *v6; // rdx
  const char *v7; // rcx
  char v8; // dl
  const char *v9; // rax
  __int64 v10; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 4;
  v2 = (const char *)&unk_1C00622D0;
  v4 = 0;
  if ( (*(_DWORD *)(v1 + 1008) & 0x2000000) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 1008), 0x2000000uLL);
    v4 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 760), ACPIBuildDiscoverDeviceCompletion, a1);
    if ( v4 < 0 )
    {
      v5 = *(_QWORD *)(v1 + 8);
      v6 = (const char *)&unk_1C00622D0;
      v7 = (const char *)&unk_1C00622D0;
      if ( (v5 & 0x200000000000LL) != 0 )
      {
        v6 = *(const char **)(v1 + 608);
        if ( (v5 & 0x400000000000LL) != 0 )
          v7 = *(const char **)(v1 + 616);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0x49u,
          (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
          v4,
          v1,
          v6,
          v7);
    }
  }
  v8 = 0;
  v9 = (const char *)&unk_1C00622D0;
  if ( v1 )
  {
    v10 = *(_QWORD *)(v1 + 8);
    v8 = v1;
    if ( (v10 & 0x200000000000LL) != 0 )
    {
      v2 = *(const char **)(v1 + 608);
      if ( (v10 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x4Au,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      v4,
      v8,
      v2,
      v9);
  if ( v4 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v4, 0LL, a1);
  return (unsigned int)v4;
}
