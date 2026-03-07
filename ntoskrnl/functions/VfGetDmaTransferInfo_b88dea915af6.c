__int64 __fastcall VfGetDmaTransferInfo(int a1, __int64 a2, __int64 a3, unsigned int a4, char a5, __int64 a6)
{
  __int64 RealDmaAdapter; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, char, __int64))(*(_QWORD *)(RealDmaAdapter + 8)
                                                                                     + 136LL))(
           RealDmaAdapter,
           a2,
           a3,
           a4,
           a5,
           a6);
}
