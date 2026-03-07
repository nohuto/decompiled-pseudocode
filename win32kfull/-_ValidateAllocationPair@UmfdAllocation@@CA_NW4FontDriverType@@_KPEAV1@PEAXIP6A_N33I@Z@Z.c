bool __fastcall UmfdAllocation::_ValidateAllocationPair(
        int a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned int a5,
        unsigned __int8 (__fastcall *a6)(void *, __int64, _QWORD))
{
  return *(void **)(a3 + 16) == a4
      && a1 == *(_DWORD *)(a3 + 4)
      && a2 == *(_QWORD *)(a3 + 8)
      && a5 == *(_DWORD *)(a3 + 24)
      && TryProbeForRead(a4, a5, a3)
      && a6(a4, a3 + 28, a5);
}
