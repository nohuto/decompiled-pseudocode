/*
 * XREFs of VrpInitializeLoadedDifferencingHives @ 0x140854594
 * Callers:
 *     VRegSetup @ 0x1408543D0 (VRegSetup.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 VrpInitializeLoadedDifferencingHives()
{
  unsigned int v0; // ebx
  char *Pool2; // rax

  v0 = 0;
  gLoadedDiffHivesLock = 0LL;
  Pool2 = (char *)ExAllocatePool2(256LL, 256LL, 1734693462LL);
  if ( Pool2 )
  {
    qword_140C0E228 = (__int64)Pool2;
    gLoadedDiffHives = 0;
    dword_140C0E224 = 1024;
    if ( (Pool2 + 256 >= Pool2 ? 0x20 : 0) != 0 )
      memset64(Pool2, (unsigned __int64)&gLoadedDiffHives + 1, Pool2 + 256 >= Pool2 ? 0x20 : 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
