char __fastcall TypeIsolationFactory<NSInstrumentation::CTypeIsolation<233472,912>>::Create(__int64 a1)
{
  __int64 Pool2; // rax
  void *v3; // rbx

  Pool2 = ExAllocatePool2(262LL, 40LL, 1869834581LL);
  v3 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 32) = 0;
    *(_BYTE *)(Pool2 + 36) = 0;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    if ( (unsigned __int8)NSInstrumentation::CTypeIsolation<233472,912>::Initialize(Pool2) )
    {
      *(_QWORD *)(a1 + 40) = v3;
      return 1;
    }
    NSInstrumentation::CTypeIsolation<233472,912>::~CTypeIsolation<233472,912>((__int64)v3);
    ExFreePoolWithTag(v3, 0);
  }
  return 0;
}
