__int64 HalpMmBuildTiledMemoryMap()
{
  PVOID v0; // rdi
  int v1; // ebx

  HalpAllocateCR3Root();
  v0 = HalpCR3Root;
  if ( !HalpCR3Root )
    return 3221225495LL;
  memset(HalpCR3Root, 0, 0x1000uLL);
  v1 = HalpMapCR3Ex(HalpLowStubPhysicalAddress);
  if ( v1 >= 0 )
  {
    v1 = HalpMapCR3Ex(HalpLMStub);
    if ( v1 >= 0 )
    {
      v1 = 0;
      HalpCommitCR3Worker((PVOID *)HalpCR3Root, 3u);
      dword_140C61C5C = MmGetPhysicalAddress(v0).LowPart;
    }
  }
  return (unsigned int)v1;
}
