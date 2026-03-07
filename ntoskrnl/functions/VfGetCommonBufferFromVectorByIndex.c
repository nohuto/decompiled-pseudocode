__int64 __fastcall VfGetCommonBufferFromVectorByIndex(int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 RealDmaAdapter; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 288LL))(
           RealDmaAdapter,
           a2,
           a3,
           a4,
           a5);
}
