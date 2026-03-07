void *NSInstrumentation::CTypeIsolation<40960,160>::Create()
{
  __int64 Pool2; // rax
  void *v1; // rbx

  Pool2 = ExAllocatePool2(262LL, 40LL, 1869834581LL);
  v1 = (void *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = 0LL;
    *(_QWORD *)(Pool2 + 24) = 0LL;
    *(_DWORD *)(Pool2 + 32) = 0;
    *(_BYTE *)(Pool2 + 36) = 0;
    *(_QWORD *)(Pool2 + 8) = Pool2;
    *(_QWORD *)Pool2 = Pool2;
    if ( (unsigned __int8)NSInstrumentation::CTypeIsolation<40960,160>::Initialize(Pool2) )
      return v1;
    NSInstrumentation::CTypeIsolation<40960,160>::~CTypeIsolation<40960,160>(v1);
    ExFreePoolWithTag(v1, 0);
  }
  return 0LL;
}
