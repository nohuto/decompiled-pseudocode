/*
 * XREFs of HalpMmBuildTiledMemoryMap @ 0x140A8D8E8
 * Callers:
 *     HalpInterruptBuildGlobalStartupStub @ 0x1403A3BE0 (HalpInterruptBuildGlobalStartupStub.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 *     HalpAllocateCR3Root @ 0x1403A3C68 (HalpAllocateCR3Root.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpCommitCR3Worker @ 0x140A8CA14 (HalpCommitCR3Worker.c)
 *     HalpMapCR3Ex @ 0x140A8D980 (HalpMapCR3Ex.c)
 */

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
