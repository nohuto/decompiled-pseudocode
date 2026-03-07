__int64 __fastcall VfFlushDmaBuffer(int a1, __int64 a2, char a3)
{
  __int64 RealDmaAdapter; // rax
  __int64 v6; // r8

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  LOBYTE(v6) = a3;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 240LL))(
           RealDmaAdapter,
           a2,
           v6);
}
