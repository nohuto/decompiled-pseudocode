__int64 HalpTimerCreateReferencePage()
{
  void *MemoryInternal; // rax
  _QWORD *v1; // rbx
  ULONG_PTR v2; // r8

  if ( *(_DWORD *)(HalpPerformanceCounter + 228) != 5 )
    return 0LL;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(4096, 1u);
  HalpTimerReferencePage = MemoryInternal;
  v1 = MemoryInternal;
  if ( MemoryInternal )
  {
    memset(MemoryInternal, 0, 0x1000uLL);
    v2 = HalpPerformanceCounter;
    *(_DWORD *)v1 = 1416388936;
    v1[1] = RtlUdiv128(10000000LL, 0LL, *(_QWORD *)(v2 + 192), 0LL);
    return 0LL;
  }
  return 3221225626LL;
}
