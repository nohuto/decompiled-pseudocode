/*
 * XREFs of ACPIBuildProcessDevicePhaseCid @ 0x1C000ED30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dqss @ 0x1C0009A6C (WPP_RECORDER_SF_dqss.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C000BCB0 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIConvertStringDelimitation @ 0x1C0043964 (ACPIConvertStringDelimitation.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCid(__int64 a1)
{
  char *v1; // rdi
  __int64 v3; // rbx
  const char *v4; // rdx
  unsigned int v5; // ebp
  __int64 v6; // rsi
  __int64 v7; // rsi
  int v8; // ebp
  __int64 v9; // rsi
  const char *v10; // rax
  __int64 v11; // rdx
  const char *v12; // rcx

  v1 = *(char **)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 40);
  ACPIConvertStringDelimitation(v1);
  v4 = AcpiInternalDeviceFlagTable;
  if ( v1 )
  {
    v5 = 0;
    if ( AcpiInternalDeviceFlagTable )
    {
      v6 = 0LL;
      while ( !strstr(v1, v4) )
      {
        v6 = ++v5;
        v4 = (&AcpiInternalDeviceFlagTable)[4 * v5];
        if ( !v4 )
          goto LABEL_8;
      }
      v7 = 4 * v6;
      _InterlockedOr64((volatile signed __int64 *)(v3 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v7 + 1]);
      _InterlockedOr64((volatile signed __int64 *)(v3 + 1008), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v7 + 2]);
LABEL_8:
      v4 = AcpiInternalDeviceFlagTable;
    }
  }
  if ( _bittest64((const signed __int64 *)(v3 + 8), 0x2Du) )
  {
    if ( *(_QWORD *)(v3 + 608) )
    {
      v8 = 0;
      if ( v4 )
      {
        v9 = 0LL;
        do
        {
          if ( strstr(*(const char **)(v3 + 608), v4) )
            _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), ~(__int64)(&AcpiInternalDeviceFlagTable)[v9 + 3]);
          v9 = 4LL * (unsigned int)++v8;
          v4 = (&AcpiInternalDeviceFlagTable)[v9];
        }
        while ( v4 );
      }
    }
  }
  if ( ((*(_DWORD *)(v3 + 8) & 0x2000000) == 0
     || _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 200), (signed __int64)v1, 0LL))
    && v1 )
  {
    ExFreePoolWithTag(v1, 0);
  }
  *(_DWORD *)(a1 + 32) = 10;
  v10 = (const char *)&unk_1C00622D0;
  v11 = *(_QWORD *)(v3 + 8);
  v12 = (const char *)&unk_1C00622D0;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v10 = *(const char **)(v3 + 608);
    if ( (v11 & 0x400000000000LL) != 0 )
      v12 = *(const char **)(v3 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x22u,
      (__int64)&WPP_a0f908b75b693eaadb9088735086d97e_Traceguids,
      0,
      v3,
      v10,
      v12);
  ACPIBuildCompleteMustSucceed(0LL, 0, 0LL, a1);
  return 0LL;
}
