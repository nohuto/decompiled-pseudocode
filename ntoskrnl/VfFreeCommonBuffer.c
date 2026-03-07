void __fastcall VfFreeCommonBuffer(int a1, unsigned int a2, __int64 a3, __int64 a4, char a5)
{
  char v9; // si
  __int64 RealDmaAdapter; // rbp
  __int64 AdapterInformationInternal; // rax
  char v12; // r15
  __int64 v13; // rdi
  __int64 v14; // r9
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = a3;
  v9 = 0;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  v12 = a5;
  v13 = AdapterInformationInternal;
  if ( !AdapterInformationInternal
    || (VF_ASSERT_MAX_IRQL(), (v9 = ViHalFreeDomainCommonBuffer(&v15)) != 0)
    || (LOBYTE(v14) = v12,
        !(unsigned int)ViSpecialFreeCommonBuffer(*(_QWORD *)(*(_QWORD *)(RealDmaAdapter + 8) + 24LL), v13, a4, v14)) )
  {
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, char))(*(_QWORD *)(RealDmaAdapter + 8) + 24LL))(
      RealDmaAdapter,
      a2,
      a3,
      a4,
      v12);
    if ( v13 )
    {
      if ( !v9 )
        DECREMENT_COMMON_BUFFERS(v13);
    }
  }
}
