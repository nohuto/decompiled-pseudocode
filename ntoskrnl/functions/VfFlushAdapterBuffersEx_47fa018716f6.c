__int64 __fastcall VfFlushAdapterBuffersEx(int a1, __int64 a2, __int64 a3, __int64 a4, int a5, char a6)
{
  __int64 RealDmaAdapter; // rsi
  __int64 AdapterInformationInternal; // rdi
  __int64 result; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
    VF_ASSERT_MAX_IRQL();
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, char))(*(_QWORD *)(RealDmaAdapter + 8)
                                                                                    + 208LL))(
             RealDmaAdapter,
             a2,
             a3,
             a4,
             a5,
             a6);
  if ( AdapterInformationInternal )
  {
    if ( !(_DWORD)result )
      _InterlockedExchange((volatile __int32 *)(AdapterInformationInternal + 220), 0);
  }
  return result;
}
