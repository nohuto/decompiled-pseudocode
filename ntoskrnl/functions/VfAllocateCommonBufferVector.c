__int64 __fastcall VfAllocateCommonBufferVector(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 RealDmaAdapter; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int, int, __int64, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 280LL))(
           RealDmaAdapter,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8,
           a9);
}
