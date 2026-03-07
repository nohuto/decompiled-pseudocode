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
