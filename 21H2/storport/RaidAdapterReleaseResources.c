/*
 * XREFs of RaidAdapterReleaseResources @ 0x1C0078E14
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C007901C (RaidAdapterRemoveDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0079314 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     StorFreeContiguousIoResources @ 0x1C0006CBC (StorFreeContiguousIoResources.c)
 *     RaidAdapterStop @ 0x1C0013C9C (RaidAdapterStop.c)
 *     RaidPnPPassToMiniPort @ 0x1C0019E0C (RaidPnPPassToMiniPort.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C002C1D8 (RaidAdapterDeleteAsyncCallbacks.c)
 *     WPP_SF_ @ 0x1C00334FC (WPP_SF_.c)
 *     RaAdapterDeregisterFromIdleDetection @ 0x1C003E734 (RaAdapterDeregisterFromIdleDetection.c)
 *     RaidFreeMappingList @ 0x1C0045310 (RaidFreeMappingList.c)
 *     RaFreeRaidResources @ 0x1C004DF80 (RaFreeRaidResources.c)
 */

void __fastcall RaidAdapterReleaseResources(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  struct _IO_WORKITEM *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  unsigned int i; // edi
  __int64 v10; // rdx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  if ( *(_QWORD *)(a1 + 320) && (*(_BYTE *)(a1 + 109) & 0x20) != 0 )
    RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), v4, a3, 0LL, 0);
  v5 = *(struct _IO_WORKITEM **)(a1 + 5792);
  if ( v5 )
  {
    IoFreeWorkItem(v5);
    *(_QWORD *)(a1 + 5792) = 0LL;
  }
  RaAdapterDeregisterFromIdleDetection(a1);
  v6 = *(void **)(a1 + 5496);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x57506152u);
    *(_QWORD *)(a1 + 5496) = 0LL;
  }
  v7 = *(void **)(a1 + 5504);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x504F6152u);
    *(_QWORD *)(a1 + 5504) = 0LL;
  }
  v8 = *(void **)(a1 + 5816);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x504E6152u);
    *(_QWORD *)(a1 + 5816) = 0LL;
  }
  RaidAdapterDeleteAsyncCallbacks(a1);
  Interval.QuadPart = -10000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  RaidAdapterStop(a1);
  for ( i = 0; i < 0x258; ++i )
  {
    if ( !*(_DWORD *)(a1 + 5032) && !*(_DWORD *)(a1 + 4272) )
      break;
    if ( i < 0x32
      && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Bu,
        (__int64)&WPP_c14902a3c76b3c1f0b09f862a5aedd9e_Traceguids);
    }
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( i >= 0x258
    && WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x1Cu,
      (__int64)&WPP_c14902a3c76b3c1f0b09f862a5aedd9e_Traceguids);
  }
  RaFreeRaidResources((PSLIST_HEADER)(a1 + 896), *(_QWORD *)(a1 + 8), *(_BYTE *)(a1 + 4514));
  RaidFreeMappingList((void **)(a1 + 792));
  v10 = *(_QWORD *)(a1 + 112);
  if ( v10 )
  {
    StorFreeContiguousIoResources(a1, v10);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_DWORD *)(a1 + 120) &= ~1u;
  }
}
