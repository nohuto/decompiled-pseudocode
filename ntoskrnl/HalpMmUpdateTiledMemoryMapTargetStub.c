/*
 * XREFs of HalpMmUpdateTiledMemoryMapTargetStub @ 0x1405190D8
 * Callers:
 *     HalpInterruptStartProcessor @ 0x140A86180 (HalpInterruptStartProcessor.c)
 *     HalpBuildResumeStructures @ 0x140A92E78 (HalpBuildResumeStructures.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x14029AF10 (MmMapIoSpaceEx.c)
 *     MmUnmapIoSpace @ 0x14029B230 (MmUnmapIoSpace.c)
 *     MmGetPhysicalAddress @ 0x14030C850 (MmGetPhysicalAddress.c)
 */

__int64 HalpMmUpdateTiledMemoryMapTargetStub()
{
  unsigned int v0; // ebx
  _QWORD *v1; // rdi
  PHYSICAL_ADDRESS PhysicalAddress; // rax

  v0 = 0;
  if ( HalpTargetStubPtePa )
  {
    v1 = (_QWORD *)MmMapIoSpaceEx(HalpTargetStubPtePa, 8LL, 4u);
    if ( v1 )
    {
      PhysicalAddress = MmGetPhysicalAddress(HalpLMStub);
      if ( PhysicalAddress.QuadPart )
        *v1 ^= (*v1 ^ PhysicalAddress.QuadPart) & 0xFFFFFFFFFF000LL;
      else
        v0 = -1073741823;
      MmUnmapIoSpace(v1, 8uLL);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v0;
}
