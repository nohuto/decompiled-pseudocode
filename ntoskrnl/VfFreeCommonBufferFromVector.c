__int64 __fastcall VfFreeCommonBufferFromVector(int a1, __int64 a2, unsigned int a3)
{
  __int64 RealDmaAdapter; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(RealDmaAdapter + 8) + 296LL))(
           RealDmaAdapter,
           a2,
           a3);
}
