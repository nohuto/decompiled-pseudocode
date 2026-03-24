/*
 * XREFs of ACPIBuildProcessRunMethodPhaseCheckPep @ 0x1C001FD20
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C001A6D0 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C00209B0 (WPP_RECORDER_SF_Lqss.c)
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1C002A9AC (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 */

__int64 __fastcall ACPIBuildProcessRunMethodPhaseCheckPep(__int64 a1)
{
  __int64 v1; // rsi
  void *v2; // rbp
  int v4; // ebx
  __int64 v5; // rcx
  void *v6; // rax
  signed __int32 v7; // ecx
  KIRQL v8; // di
  int v9; // edx
  __int64 v11; // rax
  void *v12; // rdx
  void *v13; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  v2 = &unk_1C00701BA;
  v4 = 0;
  if ( (*(_QWORD *)(v1 + 8) & 0x8000000000000LL) != 0 )
  {
    *(_DWORD *)(a1 + 32) = 0;
  }
  else
  {
    *(_DWORD *)(a1 + 32) = 4;
    if ( (*(_DWORD *)(v1 + 960) & 0x2000000) == 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v1 + 960), 0x2000000uLL);
      v4 = AcpiNotifyPlExtDiscoverDeviceAsync(*(_QWORD *)(v1 + 720), ACPIBuildDiscoverDeviceCompletion, a1);
      if ( v4 < 0 )
      {
        v11 = *(_QWORD *)(v1 + 8);
        v12 = &unk_1C00701BA;
        v13 = &unk_1C00701BA;
        if ( (v11 & 0x200000000000LL) != 0 )
        {
          v12 = *(void **)(v1 + 568);
          if ( (v11 & 0x400000000000LL) != 0 )
            v13 = *(void **)(v1 + 576);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            WPP_GLOBAL_Control->DeviceExtension,
            2,
            6,
            59,
            (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
            v4,
            v1,
            (__int64)v12,
            (__int64)v13);
      }
    }
  }
  v5 = *(_QWORD *)(v1 + 8);
  v6 = &unk_1C00701BA;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v2 = *(void **)(v1 + 568);
    if ( (v5 & 0x400000000000LL) != 0 )
      v6 = *(void **)(v1 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      4,
      6,
      60,
      (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      v4,
      v1,
      (__int64)v2,
      (__int64)v6);
  if ( v4 != 259 )
  {
    v7 = *(_DWORD *)(a1 + 32);
    if ( v4 == -1073741738 )
    {
      *(_DWORD *)(a1 + 48) = -1073741738;
      ACPIBuildCompleteCommon((volatile signed __int32 *)(a1 + 24), 2);
    }
    else
    {
      if ( v4 < 0 )
      {
        *(_DWORD *)(a1 + 48) = v4;
        KeBugCheckEx(0xA5u, 3uLL, 0LL, v4, 0LL);
      }
      *(_DWORD *)(a1 + 32) = 2;
      _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 24), v7, 1);
      v8 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
      v9 = AcpiBuildDpcFlags | 2;
      AcpiBuildDpcFlags = v9;
      if ( (v9 & 1) == 0 )
      {
        AcpiBuildDpcFlags = v9 | 1;
        KeInsertQueueDpc(&AcpiBuildDpc, 0LL, 0LL);
      }
      KeReleaseSpinLock(&AcpiBuildQueueLock, v8);
    }
  }
  return (unsigned int)v4;
}
