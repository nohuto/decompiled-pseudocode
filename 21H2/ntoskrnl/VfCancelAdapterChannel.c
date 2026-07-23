/*
 * XREFs of VfCancelAdapterChannel @ 0x1409CC590
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x14021A938 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ViRemoveChannelWcb @ 0x1405A14E8 (ViRemoveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x1409CACD0 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1409CAFCC (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x1409CF3C4 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x1409CF748 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x1409CFA50 (ViGetRealDmaOperation.c)
 */

char __fastcall VfCancelAdapterChannel(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, __int64); // rbx
  __int64 AdapterInformationInternal; // rbp
  char v8; // al
  char v9; // di
  __int64 v10; // rbx

  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, __int64))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v8 = RealDmaOperation(a1, a2, a3);
  v9 = v8;
  if ( AdapterInformationInternal )
  {
    if ( v8 )
    {
      v10 = ViRemoveChannelWcb(AdapterInformationInternal, 0LL, a3);
      if ( v10 )
      {
        DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
        SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v10 + 48));
        if ( *(_QWORD *)(v10 + 96) )
          ViFreeMapRegisterFile(AdapterInformationInternal);
        ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v10);
      }
    }
  }
  return v9;
}
