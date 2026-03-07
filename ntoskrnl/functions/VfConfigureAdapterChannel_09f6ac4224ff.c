__int64 __fastcall VfConfigureAdapterChannel(int a1, unsigned int a2, __int64 a3)
{
  __int64 RealDmaAdapter; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 168LL))(
           RealDmaAdapter,
           a2,
           a3);
}
