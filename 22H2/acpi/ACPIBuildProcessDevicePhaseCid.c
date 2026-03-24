/*
 * XREFs of ACPIBuildProcessDevicePhaseCid @ 0x1C0014DE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIConvertStringDelimitation @ 0x1C00164D4 (ACPIConvertStringDelimitation.c)
 *     ACPIBuildCompleteCommon @ 0x1C001A6D0 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCid(__int64 a1)
{
  signed __int64 v1; // rdi
  __int64 v3; // rbx
  const char *v4; // rax
  unsigned int v5; // r14d
  __int64 v6; // rbp
  __int64 v7; // rax
  const char *v8; // rdx
  int v9; // ebp
  __int64 v10; // r14
  __int64 v11; // rdx
  void *v12; // rax
  void *v13; // rcx
  __int64 v14; // r8
  __int64 v16; // rbp

  v1 = *(_QWORD *)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 40);
  ACPIConvertStringDelimitation(v1);
  if ( v1 )
  {
    v4 = AcpiInternalDeviceFlagTable;
    v5 = 0;
    if ( AcpiInternalDeviceFlagTable )
    {
      v6 = 0LL;
      while ( !strstr((const char *)v1, v4) )
      {
        v6 = ++v5;
        v4 = (&AcpiInternalDeviceFlagTable)[4 * v5];
        if ( !v4 )
          goto LABEL_6;
      }
      v16 = 4 * v6;
      _InterlockedOr64((volatile signed __int64 *)(v3 + 8), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v16 + 1]);
      _InterlockedOr64((volatile signed __int64 *)(v3 + 960), (unsigned __int64)(&AcpiInternalDeviceFlagTable)[v16 + 2]);
    }
  }
LABEL_6:
  v7 = *(_QWORD *)(v3 + 8);
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    if ( *(_QWORD *)(v3 + 568) )
    {
      v8 = AcpiInternalDeviceFlagTable;
      v9 = 0;
      if ( AcpiInternalDeviceFlagTable )
      {
        v10 = 0LL;
        do
        {
          if ( strstr(*(const char **)(v3 + 568), v8) )
            _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), ~(__int64)(&AcpiInternalDeviceFlagTable)[v10 + 3]);
          v10 = 4LL * (unsigned int)++v9;
          v8 = (&AcpiInternalDeviceFlagTable)[v10];
        }
        while ( v8 );
        v7 = *(_QWORD *)(v3 + 8);
      }
    }
  }
  if ( (v7 & 0x2000000) != 0 )
    v1 &= (unsigned __int128)-(__int128)(unsigned __int64)_InterlockedCompareExchange64(
                                                            (volatile signed __int64 *)(v3 + 200),
                                                            v1,
                                                            0LL) >> 64;
  if ( v1 )
    ExFreePoolWithTag((PVOID)v1, 0);
  v11 = 10LL;
  v12 = &unk_1C00701BA;
  *(_DWORD *)(a1 + 32) = 10;
  v13 = &unk_1C00701BA;
  v14 = *(_QWORD *)(v3 + 8);
  if ( (v14 & 0x200000000000LL) != 0 )
  {
    v12 = *(void **)(v3 + 568);
    if ( (v14 & 0x400000000000LL) != 0 )
      v13 = *(void **)(v3 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v11,
      6,
      34,
      (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      0,
      v3,
      (__int64)v12,
      (__int64)v13);
    v11 = *(unsigned int *)(a1 + 32);
  }
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v11);
  return 0LL;
}
