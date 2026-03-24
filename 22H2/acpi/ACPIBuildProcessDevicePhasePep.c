/*
 * XREFs of ACPIBuildProcessDevicePhasePep @ 0x1C001A480
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C001A6D0 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C002A9AC (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePep(__int64 a1)
{
  __int64 v1; // rdi
  const ULONG_PTR *v2; // rdx
  void *v3; // rbp
  int v5; // ebx
  __int64 v6; // rcx
  void *v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rax
  void *v11; // rdx
  void *v12; // rcx
  __int64 v13; // [rsp+38h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids;
  *(_DWORD *)(a1 + 32) = 4;
  v3 = &unk_1C00701BA;
  v5 = 0;
  if ( (*(_DWORD *)(v1 + 960) & 0x2000000) == 0 )
  {
    _InterlockedOr64((volatile signed __int64 *)(v1 + 960), 0x2000000uLL);
    v5 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 720), ACPIBuildDiscoverDeviceCompletion, a1);
    if ( v5 < 0 )
    {
      v10 = *(_QWORD *)(v1 + 8);
      v11 = &unk_1C00701BA;
      v12 = &unk_1C00701BA;
      if ( (v10 & 0x200000000000LL) != 0 )
      {
        v11 = *(void **)(v1 + 568);
        if ( (v10 & 0x400000000000LL) != 0 )
          v12 = *(void **)(v1 + 576);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = (__int64)v11;
        LOBYTE(v11) = 2;
        WPP_RECORDER_SF_Lqss(
          WPP_GLOBAL_Control->DeviceExtension,
          (_DWORD)v11,
          6,
          29,
          (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
          v5,
          v1,
          v13,
          (__int64)v12);
      }
    }
    v2 = &WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids;
  }
  v6 = *(_QWORD *)(v1 + 8);
  v7 = &unk_1C00701BA;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v3 = *(void **)(v1 + 568);
    if ( (v6 & 0x400000000000LL) != 0 )
      v7 = *(void **)(v1 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v2,
      6,
      30,
      (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      v5,
      v1,
      (__int64)v3,
      (__int64)v7);
  }
  if ( v5 == 259 )
  {
    return 0;
  }
  else
  {
    v8 = *(unsigned int *)(a1 + 32);
    if ( v5 < 0 )
      *(_DWORD *)(a1 + 48) = v5;
    *(_DWORD *)(a1 + 32) = 2;
    ACPIBuildCompleteCommon(a1 + 24, v8);
  }
  return (unsigned int)v5;
}
