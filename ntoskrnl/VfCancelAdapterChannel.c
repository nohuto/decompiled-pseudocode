/*
 * XREFs of VfCancelAdapterChannel @ 0x140AC2BE0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViRemoveChannelWcb @ 0x1405CC73C (ViRemoveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140AC1290 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140AC158C (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x140AC5A90 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 */

char __fastcall VfCancelAdapterChannel(int a1, __int64 a2, __int64 a3)
{
  __int64 RealDmaAdapter; // rdi
  __int64 AdapterInformationInternal; // rbp
  char v8; // al
  char v9; // di
  __int64 v10; // rbx

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 176LL))(
         RealDmaAdapter,
         a2,
         a3);
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
