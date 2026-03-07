__int64 __fastcall VfCreateCommonBufferFromMdl(int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 RealDmaAdapter; // rdi

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  if ( ViGetAdapterInformationInternal(a1) )
    return 3221225473LL;
  else
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, __int64))(*(_QWORD *)(RealDmaAdapter + 8)
                                                                                 + 312LL))(
             RealDmaAdapter,
             a2,
             a3,
             a4,
             a5);
}
