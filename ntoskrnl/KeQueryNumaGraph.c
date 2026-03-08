/*
 * XREFs of KeQueryNumaGraph @ 0x140B923AC
 * Callers:
 *     MmInitSystem @ 0x140B393A4 (MmInitSystem.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

void *KeQueryNumaGraph()
{
  ULONG_PTR v0; // rdi
  void *Pool2; // rax
  void *v2; // rbx

  v0 = 2LL * (unsigned __int16)KeNumberNodes * (unsigned __int16)KeNumberNodes;
  Pool2 = (void *)ExAllocatePool2(256LL, v0, 0x616D754Eu);
  v2 = Pool2;
  if ( Pool2 )
    memmove(Pool2, KiNodeGraph, v0);
  return v2;
}
