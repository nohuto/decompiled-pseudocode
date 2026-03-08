/*
 * XREFs of VfFreeMapRegisters @ 0x140AC3400
 * Callers:
 *     <none>
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ViRemoveChannelWcb @ 0x1405CC73C (ViRemoveChannelWcb.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140AC158C (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140AC16AC (VF_ASSERT_IRQL.c)
 *     ViFreeMapRegisterFile @ 0x140AC5A90 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140AC5E44 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140AC6158 (ViGetRealDmaAdapter.c)
 */

void __fastcall VfFreeMapRegisters(int a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rbp
  char v7; // r14
  __int64 AdapterInformationInternal; // rsi
  __int64 RealDmaAdapter; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rbx

  v6 = 0LL;
  v7 = 0;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  if ( AdapterInformationInternal )
  {
    VF_ASSERT_IRQL(2u);
    v6 = a2;
    if ( a2 == -559026163 )
    {
      a2 = 0LL;
      v7 = 1;
      v6 = 0LL;
    }
    else if ( a2 && *(_DWORD *)a2 == -1393569779 )
    {
      a2 = *(_QWORD *)(a2 + 48);
    }
  }
  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(RealDmaAdapter + 8) + 56LL))(RealDmaAdapter, a2, a3);
  if ( AdapterInformationInternal )
  {
    if ( v7 == 1 )
      v6 = -559026163LL;
    v10 = ViRemoveChannelWcb(AdapterInformationInternal, v6, 0LL);
    v11 = (_QWORD *)v10;
    if ( v10 )
    {
      SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v10 + 48));
      if ( v11[12] )
        ViFreeMapRegisterFile(AdapterInformationInternal);
      ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, v11);
    }
  }
}
