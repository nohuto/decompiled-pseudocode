void *__fastcall HalpMmAllocatePerProcessorMemory(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  void *MemoryInternal; // rax
  void *v4; // rbx

  v2 = HalQueryMaximumProcessorCount(a1, a2) * a1;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(v2, 1LL);
  v4 = MemoryInternal;
  if ( MemoryInternal )
    memset(MemoryInternal, 0, v2);
  return v4;
}
