__int64 __fastcall VfAllocateDomainCommonBuffer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        _QWORD *a8,
        __int64 a9)
{
  _QWORD *Pool2; // rdi
  __int64 RealDmaAdapter; // rbp
  unsigned int v15; // ebx
  int v16; // eax

  Pool2 = 0LL;
  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  if ( !ViGetAdapterInformation(a1) || (Pool2 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1449943368LL)) != 0LL )
  {
    v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, __int64, int, _QWORD *, __int64))(*(_QWORD *)(RealDmaAdapter + 8) + 232LL))(
            RealDmaAdapter,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9);
    v15 = v16;
    if ( Pool2 )
    {
      if ( v16 < 0 )
      {
        ExFreePoolWithTag(Pool2, 0);
      }
      else
      {
        Pool2[2] = *a8;
        ViHalTrackDomainCommonBuffer(Pool2);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v15;
}
