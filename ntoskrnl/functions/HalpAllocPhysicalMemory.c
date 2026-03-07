__int64 __fastcall HalpAllocPhysicalMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v7; // rax
  void *v8; // rax
  void *v9; // rbx

  if ( (unsigned int)(HalpAllocationDescriptorArraySize - HalpUsedAllocDescriptors) <= 3 )
  {
    v7 = HalpAllocPhysicalMemoryInternal(a1, 0LL, 1LL);
    if ( v7 )
    {
      v8 = (void *)HalpMapPhysicalMemory64(v7, 1LL, 0, 4LL);
      v9 = v8;
      if ( v8 )
      {
        memset(v8, 0, 0x1000uLL);
        HalpUsedAllocDescriptors = 0;
        HalpAllocationDescriptorArray = v9;
        HalpAllocationDescriptorArraySize = 85;
      }
    }
  }
  return HalpAllocPhysicalMemoryInternal(a1, a2, a3);
}
