__int64 HalpBlkAllocateShadowData()
{
  unsigned int v0; // ebx
  unsigned int v1; // edi
  void *MemoryInternal; // rax
  __int64 v3; // r8
  unsigned int v4; // edi
  char *v5; // rdx
  __int64 v6; // rcx
  bool v7; // cf

  v0 = 0;
  v1 = 8 * HalpInterruptBlockedProcessors;
  MemoryInternal = (void *)HalpMmAllocateMemoryInternal(8 * HalpInterruptBlockedProcessors, 1u);
  HalpBlkPcr = (__int64)MemoryInternal;
  if ( !MemoryInternal )
    return (unsigned int)-1073741801;
  memset(MemoryInternal, 0, v1);
  v4 = 0;
  if ( HalpInterruptBlockedProcessors )
  {
    while ( 1 )
    {
      v5 = HalpBlkAllocateAndShadowMemory(0LL, 0xEu, v3, 4, 0LL);
      if ( !v5 )
        break;
      v6 = v4++;
      v7 = v4 < HalpInterruptBlockedProcessors;
      *(_QWORD *)(HalpBlkPcr + 8 * v6) = v5;
      if ( !v7 )
        return v0;
    }
    return (unsigned int)-1073741801;
  }
  return v0;
}
