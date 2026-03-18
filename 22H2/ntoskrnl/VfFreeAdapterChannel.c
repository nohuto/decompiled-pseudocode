/*
 * XREFs of VfFreeAdapterChannel @ 0x140AC7030
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402B6B40 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     ViRemoveChannelWcb @ 0x1405CEBEC (ViRemoveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140AC5290 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140AC558C (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140AC56AC (VF_ASSERT_IRQL.c)
 *     ViFreeMapRegisterFile @ 0x140AC9A90 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140AC9E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140ACA158 (ViGetRealDmaAdapter.c)
 */

void __fastcall VfFreeAdapterChannel(int a1)
{
  __int64 AdapterInformationInternal; // rdi
  __int64 RealDmaAdapter; // rax
  __int64 v4; // rbx

  VF_ASSERT_IRQL(2u);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)(RealDmaAdapter + 8) + 48LL))(RealDmaAdapter);
  if ( AdapterInformationInternal )
  {
    _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 220), 0);
    v4 = ViRemoveChannelWcb(AdapterInformationInternal, 0LL, 0LL);
    if ( v4 )
    {
      DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v4 + 48));
      if ( *(_QWORD *)(v4 + 96) )
        ViFreeMapRegisterFile(AdapterInformationInternal);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v4);
    }
  }
}
