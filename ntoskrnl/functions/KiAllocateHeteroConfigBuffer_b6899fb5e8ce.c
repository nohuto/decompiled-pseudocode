__int64 KiAllocateHeteroConfigBuffer()
{
  int ThreadWorkloadClassCount; // ebx
  __int64 Pool2; // rax

  ThreadWorkloadClassCount = KeGetThreadWorkloadClassCount();
  Pool2 = ExAllocatePool2(64LL, (unsigned int)(12672 * ThreadWorkloadClassCount + 24), 1699243339LL);
  if ( !Pool2 )
    return 3221225626LL;
  *(_DWORD *)(Pool2 + 20) = ThreadWorkloadClassCount;
  KiHeteroConfig = Pool2;
  return 0LL;
}
